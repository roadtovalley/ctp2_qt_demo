#include <string.h>
#include <iostream>
#include <stdio.h>
#include "SecTraderSpi.h"
using namespace std;

//支持证券交易业务、查询业务

int RequestID = 0;

SecTraderSpi::SecTraderSpi()
{

}

SecTraderSpi::~SecTraderSpi()
{

}

void SecTraderSpi::Init(const char* pi_TDAdress,
                                       const char* pi_broker,
                                       const char* pi_User,
                                       const char* pi_pwd,
                                       const char* pi_prodInfo,
                                       const char* pi_authCode)
{
    zq_TDAddress = new char[strlen(pi_TDAdress)];
    strcpy(zq_TDAddress, pi_TDAdress);
    zq_BrokerID = new char[strlen(pi_broker)];
    strcpy(zq_BrokerID, pi_broker);
    zq_UserID = new char[strlen(pi_User)];
    strcpy(zq_UserID, pi_User);
    zq_Password = new char[strlen(pi_pwd)];
    strcpy(zq_Password, pi_pwd);
    zq_UserProductInfo = new char[strlen(pi_prodInfo)];
    strcpy(zq_UserProductInfo, pi_prodInfo);
    zq_AuthCode = new char[strlen(pi_authCode)];
    strcpy(zq_AuthCode, pi_authCode);
    g_SecNum = 0;
    g_TCNum = 0;
    bIsLogon = false;
    bIsgetTradingCode = false;
    bIsgetSec = false;

    m_pTdApi = CZQThostFtdcTraderApi::CreateFtdcTraderApi("");
    m_pTdApi->RegisterSpi(this);

    // 订阅公私有流
    // TERT_RESTART:从本交易日开始重传
    // TERT_RESUME:从上次收到的续传
    // TERT_QUICK:只传送登录后私有流的内容
    m_pTdApi->SubscribePublicTopic(ZQTHOST_TERT_RESTART);
    m_pTdApi->SubscribePrivateTopic(ZQTHOST_TERT_RESTART);

    // 交易服务器地址,必须配置正确，否则无法连接，报错
    m_pTdApi->RegisterFront(zq_TDAddress);

    // 使客户端开始与后台服务建立连接
    m_pTdApi->Init();
}

void SecTraderSpi::OnFrontConnected()
{
    ReqAuthenticate();
}

int SecTraderSpi::ReqAuthenticate()
{
    CZQThostFtdcReqAuthenticateField reqAuthenticate;

    strcpy(reqAuthenticate.BrokerID, zq_BrokerID);
    strcpy(reqAuthenticate.UserID, zq_UserID);
    strcpy(reqAuthenticate.UserProductInfo, zq_UserProductInfo);
    strcpy(reqAuthenticate.AuthCode, zq_AuthCode);

    int ret = m_pTdApi->ReqAuthenticate(&reqAuthenticate, ++RequestID);
//    if (ret != 0)
        printf("ReqAuthenticate Return Code = %d\n", ret);
    return ret;
}

void SecTraderSpi::OnRspAuthenticate(CZQThostFtdcRspAuthenticateField *pRspAuthenticateField, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    if (!pRspInfo)
    {
        printf("pRspInfo is null\n");
        return;
    }

    if (pRspInfo->ErrorID == 0)
    {
        ReqUserLogin();
    } else
    {
        printf("OnRspAuthenticate, ErrorID = 0x%x\n", pRspInfo->ErrorID);
    }
}

int SecTraderSpi::ReqUserLogin()
{
    CZQThostFtdcReqUserLoginField reqUserLogin;

    //根据测试环境数据来配置
    strcpy(reqUserLogin.BrokerID, zq_BrokerID);
    strcpy(reqUserLogin.UserID, zq_UserID);
    strcpy(reqUserLogin.Password, zq_Password);
    set_null(reqUserLogin.UserProductInfo);
    set_null(reqUserLogin.InterfaceProductInfo);
    set_null(reqUserLogin.ProtocolInfo);
    set_null(reqUserLogin.MacAddress);
    set_null(reqUserLogin.OneTimePassword);
    set_null(reqUserLogin.ClientIPAddress);
    set_null(reqUserLogin.Lang);

    //用户登录函数
    return m_pTdApi->ReqUserLogin(&reqUserLogin, ++RequestID);
}

void SecTraderSpi::OnRspUserLogin(CZQThostFtdcRspUserLoginField *pRspUserLogin, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    if (pRspInfo && pRspInfo->ErrorID != 0)
    {
        printf("OnRspUserLogin, ErrorID=0x%04x, ErrMsg=%s\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
    }
    else
    {   
        bIsLogon = true;
    }
}
int SecTraderSpi::ReqTrading()
{
    CZQThostFtdcQryTradingCodeField reqTradingCode;
	///经纪公司代码
	strcpy(reqTradingCode.BrokerID, zq_BrokerID);
	///投资者代码
	strcpy(reqTradingCode.InvestorID, zq_UserID);
	///交易所代码
	set_null(reqTradingCode.ExchangeID);
	///客户代码
	set_null(reqTradingCode.ClientID);
	///交易编码类型
	set_null(reqTradingCode.ClientIDType);
    //请求查询交易账户
	int ret = m_pTdApi->ReqQryTradingCode(&reqTradingCode, ++RequestID);
    //if (ret != 0)
        printf("ReqQryTradingCode Return Code = %d\n", ret);
    return ret;
}
void SecTraderSpi::OnRspQryTradingCode(CZQThostFtdcTradingCodeField *pTradingCode, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    printf("OnRspQryTradingCode\n");
    if (pRspInfo && pRspInfo->ErrorID != 0)
    {
        printf("OnRspQryTradingCode, ErrorID=0x%04x, ErrMsg=%s\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
    }
    else
    {   
        g_TCNum++;
        g_TradeCode[g_TCNum-1] = *pTradingCode;
        printf("OnRspQryTradingCode: BrokerID=%s;", pTradingCode->BrokerID);	//经纪公司代码
        printf("InvestorID=%s;",pTradingCode->InvestorID);	                    //投资者代码
        printf("ExchangeID=%s;",pTradingCode->ExchangeID);          	        //交易所代码
        printf("ClientID=%s;",pTradingCode->ClientID);	                        //客户代码
        printf("IsActive=%d;",pTradingCode->IsActive);	                        //是否活跃
        printf("ClientIDType=%c;",pTradingCode->ClientIDType);	                //交易编码类型
        printf("MarketID=%s;",pTradingCode->MarketID);	                        //市场代码
        printf("BranchID=%s;",pTradingCode->BranchID);                          //交易所营业部编码            
        printf("isLast=%d\n" ,bIsLast);                    
        fflush(stdout);
    }
    if (bIsLast)
    {
        bIsgetTradingCode = true;
    }
}

//查询证券
int SecTraderSpi::ReqQrySecurity()
{
    printf("ReqQrySecurity\n");
    CZQThostFtdcQrySecurityField  field;

    set_null(field.InstrumentID);
    set_null(field.ExchangeID);
    set_null(field.ExchangeInstID);
    set_null(field.ProductID);

    int rtn_cd = m_pTdApi->ReqQrySecurity(&field, ++RequestID);
    printf("RqeQrySecutiry Return: %d\n", rtn_cd);
    return rtn_cd;
}

//查询证券响应
void SecTraderSpi::OnRspQrySecurity(CZQThostFtdcSecurityField *pSecurity, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    if (pRspInfo && pRspInfo->ErrorID != 0)
    {
        printf("查询OnRspQrySecurity失败“,ErrorID=0x%04x, ErrMsg=%s\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
    }
    else if (pSecurity)
    {
        if (((strcmp(pSecurity->ProductID, "SHStock") == 0) &&
             (strcmp(pSecurity->SecurityClassID, "SHAShares") == 0)) ||
            ((strcmp(pSecurity->ProductID, "SZStock") == 0) &&
             ((strcmp(pSecurity->SecurityClassID, "SZGEM") == 0) ||
              (strcmp(pSecurity->SecurityClassID, "SZMainAShares") == 0) ||
              (strcmp(pSecurity->SecurityClassID, "SZSME") == 0))))
        {
            g_SecNum++;
            g_SecInfo[g_SecNum - 1] = *pSecurity;
/*
            printf("ExchangeID=[%s];", pSecurity->ExchangeID);
            printf("InstrumentID=[%s];", pSecurity->InstrumentID);
            printf("PriductID=[%s];", pSecurity->ProductID);    //产品代码
            printf("SecurityClassID=[%s];\n", pSecurity->SecurityClassID); 
            fflush(stdout);
*/
        }
    }
    else
        printf("no records\n");
    if (bIsLast)
        bIsgetSec = true;
}
