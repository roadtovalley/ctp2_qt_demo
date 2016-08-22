#ifndef SECTRADERSPI_H
#define SECTRADERSPI_H
#include "ZQThostFtdcTraderApi.h"

class SecTraderSpi : public CZQThostFtdcTraderSpi
{
public:
    bool bIsLogon, bIsgetTradingCode, bIsgetSec;
    CZQThostFtdcTradingCodeField g_TradeCode[100];
    CZQThostFtdcSecurityField g_SecInfo[35000];
    int g_TCNum;
    int g_SecNum;
    int nRequestID;

    char *zq_TDAddress;
    char *zq_BrokerID;
    char *zq_UserID;
    char *zq_Password;
    char *zq_UserProductInfo;
    char *zq_AuthCode;

    char systime[20];

    void Init(const char* pi_TDAdress,
                   const char* pi_broker,
                   const char* pi_User,
                   const char* pi_pwd,
                   const char* pi_prodInfo,
                   const char* pi_authCode);
    void OnFrontConnected();
    void OnRspAuthenticate(CZQThostFtdcRspAuthenticateField *pRspAuthenticateField, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
    void OnRspUserLogin(CZQThostFtdcRspUserLoginField *pRspUserLogin, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	void OnRspQryTradingCode(CZQThostFtdcTradingCodeField *pTradingCode, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
    void OnRspQrySecurity(CZQThostFtdcSecurityField *pSecurity, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    int ReqAuthenticate();
    int ReqUserLogin();
    int ReqTrading();
    int ReqQrySecurity();

    SecTraderSpi();
    virtual ~SecTraderSpi();

private:
    CZQThostFtdcTraderApi* m_pTdApi;
};

#endif // SECTRADERSPI_H
