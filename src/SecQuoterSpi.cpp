#include <string.h>
#include <iostream>
#include <stdio.h>
#include "SecQuoterSpi.h"

//支持行情订阅、取消订阅、动态行情

using namespace std;
SecQuoterSpi::SecQuoterSpi()
{

}

SecQuoterSpi::~SecQuoterSpi()
{

}

void SecQuoterSpi::Init(const char* pi_MDAdress, const char* pi_BrokerID, const char* pi_User, const char* pi_pwd, SecTraderSpi* pTdHandler)
{
    zq_MDAddress = new char[strlen(pi_MDAdress)];
    strcpy(zq_MDAddress, pi_MDAdress);
    zq_BrokerID = new char[strlen(pi_BrokerID)];
    strcpy(zq_BrokerID, pi_BrokerID);
    zq_UserID = new char[strlen(pi_User)];
    strcpy(zq_UserID, pi_User);
    zq_Password = new char[strlen(pi_pwd)];
    strcpy(zq_Password, pi_pwd);
    
    g_pTdHandler = pTdHandler;

    m_pMdApi=CZQThostFtdcMdApi::CreateFtdcMdApi("");
    m_pMdApi->RegisterSpi(this);
    m_pMdApi->RegisterFront(zq_MDAddress);
    m_pMdApi->Init();
}

void SecQuoterSpi::OnFrontConnected()
{
    CZQThostFtdcReqUserLoginField reqUserLogin;

    //根据测试环境的实际数据来配置
    strcpy(reqUserLogin.BrokerID,zq_BrokerID);
    strcpy(reqUserLogin.UserID, zq_UserID);
    strcpy(reqUserLogin.Password, zq_Password);
    set_null(reqUserLogin.UserProductInfo);
    set_null(reqUserLogin.InterfaceProductInfo);
    set_null(reqUserLogin.ProtocolInfo);
    set_null(reqUserLogin.MacAddress);
    set_null(reqUserLogin.OneTimePassword);
    set_null(reqUserLogin.ClientIPAddress);
    set_null(reqUserLogin.Lang);

    //用户登录
    m_pMdApi->ReqUserLogin(&reqUserLogin,1);
}
void SecQuoterSpi::OnFrontDisconnected(int nReason)
{
    printf("I am in OnFrontDisconnected!\n");
}
void SecQuoterSpi::setQuoteModel(QStandardItemModel *model)
{
    quoteModel = model;
}
void SecQuoterSpi::OnRspUserLogin(CZQThostFtdcRspUserLoginField *pRspUserLogin, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    printf("OnRspUserLogin\n");
    if (pRspInfo && pRspInfo->ErrorID != 0)
    {
        printf("登录失败,ErrorID=0x%04x, ErrMsg=%s\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
    }
    else
    {
        initSubMD();
    }
}
void SecQuoterSpi::SubscribeMD(char* Instrument, char* ExchangeID)
{
	//订阅行情
    char** Instruments;
    Instruments=new char*[0];
    Instruments[0]= new char[strlen(Instrument)];
   strcpy(Instruments[0], Instrument);
	m_pMdApi->SubscribeMarketData (Instruments, 1, ExchangeID);
}
void SecQuoterSpi::initSubMD()
{
    //根据合约列表订阅行情
	for (int i=0; i<g_pTdHandler->g_SecNum; i++)
	{
        quoteModel->insertRow(0);
        quoteModel->setData(quoteModel->index(0, 0), QString::fromLocal8Bit(g_pTdHandler->g_SecInfo[i].InstrumentID));
        quoteModel->setData(quoteModel->index(0, 1), QString::fromLocal8Bit(g_pTdHandler->g_SecInfo[i].ExchangeID));
        quoteModel->setData(quoteModel->index(0, 2), QString::fromLocal8Bit(g_pTdHandler->g_SecInfo[i].InstrumentName));
        quoteModel->setData(quoteModel->index(0, 3), "-");
        quoteModel->setData(quoteModel->index(0, 4), "-");
        quoteModel->setData(quoteModel->index(0, 5), "-");
        quoteModel->setData(quoteModel->index(0, 6), "-");
        quoteModel->setData(quoteModel->index(0, 7), "-");
        quoteModel->setData(quoteModel->index(0, 8), "-");
        quoteModel->setData(quoteModel->index(0, 9), "-");
        quoteModel->setData(quoteModel->index(0,10), "-");
        quoteModel->setData(quoteModel->index(0,11), "-");
        quoteModel->setData(quoteModel->index(0,12), "-");
        quoteModel->setData(quoteModel->index(0,13), "-");

        SubscribeMD(g_pTdHandler->g_SecInfo[i].InstrumentID, g_pTdHandler->g_SecInfo[i].ExchangeID);

	}
}

//订阅行情响应
void OnRspSubMarketData(CZQThostFtdcSpecificInstrumentField *pSpecificInstrument, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
}

void SecQuoterSpi::setModelData(CZQThostFtdcDepthMarketDataField *pDepthMarketData)
{
    QString InstrumentID = QString::fromLocal8Bit(pDepthMarketData->InstrumentID);
    QString ExchangeID = QString::fromLocal8Bit(pDepthMarketData->ExchangeID);
    QString InstrumentName = QString::fromLocal8Bit(pDepthMarketData->InstrumentName);
    double dailyPNL = 0;
    QString OpenPrice = QString::number(pDepthMarketData->OpenPrice,'f', 2);
    QString HighestPrice = QString::number(pDepthMarketData->HighestPrice,'f', 2);
    QString LowestPrice = QString::number(pDepthMarketData->LowestPrice,'f', 2);
    QString LastPrice = QString::number(pDepthMarketData->LastPrice,'f', 2);
    QString PreClosePrice = QString::number(pDepthMarketData->PreClosePrice,'f', 2);
    QString Volume = QString::number(pDepthMarketData->Volume);
    QString Turnover = QString::number(pDepthMarketData->Turnover,'f',2);
    QString UpperLimitPrice = QString::number(pDepthMarketData->UpperLimitPrice,'f', 2);
    QString LowerLimitPrice = QString::number(pDepthMarketData->LowerLimitPrice,'f', 2);
    QString UpdateTime = QString::fromLocal8Bit(pDepthMarketData->UpdateTime);

    if (pDepthMarketData->PreClosePrice>0)
        dailyPNL = (pDepthMarketData->LastPrice/pDepthMarketData->PreClosePrice-1)*100;
    QList<QStandardItem *> tList = quoteModel->findItems(InstrumentID);
    if (tList.count()>0)
    {
        int row = tList.at(0)->row();
        //quoteModel->beginResetModel();
        quoteModel->setData(quoteModel->index(row, 3), dailyPNL);
        quoteModel->setData(quoteModel->index(row, 4), OpenPrice);
        quoteModel->setData(quoteModel->index(row, 5), HighestPrice);
        quoteModel->setData(quoteModel->index(row, 6), LowestPrice);
        quoteModel->setData(quoteModel->index(row, 7), LastPrice);
        quoteModel->setData(quoteModel->index(row, 8), PreClosePrice);
        quoteModel->setData(quoteModel->index(row, 9), Volume);
        quoteModel->setData(quoteModel->index(row,10), Turnover);
        quoteModel->setData(quoteModel->index(row,11), UpperLimitPrice);
        quoteModel->setData(quoteModel->index(row,12), LowerLimitPrice);
        quoteModel->setData(quoteModel->index(row,13), UpdateTime);
        //quoteModel->endResetModel();
    }
    else
    {
        //quoteModel->beginInsertRows();
        quoteModel->insertRow(0);
        quoteModel->setData(quoteModel->index(0, 0), InstrumentID);
        quoteModel->setData(quoteModel->index(0, 1), ExchangeID);
        quoteModel->setData(quoteModel->index(0, 2), InstrumentName);
        quoteModel->setData(quoteModel->index(0, 3), dailyPNL);
        quoteModel->setData(quoteModel->index(0, 4), OpenPrice);
        quoteModel->setData(quoteModel->index(0, 5), HighestPrice);
        quoteModel->setData(quoteModel->index(0, 6), LowestPrice);
        quoteModel->setData(quoteModel->index(0, 7), LastPrice);
        quoteModel->setData(quoteModel->index(0, 8), PreClosePrice);
        quoteModel->setData(quoteModel->index(0, 9), Volume);
        quoteModel->setData(quoteModel->index(0,10), Turnover);
        quoteModel->setData(quoteModel->index(0,11), UpperLimitPrice);
        quoteModel->setData(quoteModel->index(0,12), LowerLimitPrice);
        quoteModel->setData(quoteModel->index(0,13), UpdateTime);
        //quoteModel->endInsertRows();
    }
}

//订阅的行情数据
void SecQuoterSpi::OnRtnDepthMarketData(CZQThostFtdcDepthMarketDataField *pDepthMarketData)
{
	memcpy(&LastDepth[pDepthMarketData->InstrumentID], pDepthMarketData, sizeof(*pDepthMarketData));
    setModelData(pDepthMarketData);
}

