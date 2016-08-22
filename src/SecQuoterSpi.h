#ifndef SECQUOTERSPI_H
#define SECQUOTERSPI_H
#include <map>
#include <string>
#include <QtGui>
#include "ZQThostFtdcMdApi.h"
#include "SecTraderSpi.h"
using namespace std;

class SecQuoterSpi : public CZQThostFtdcMdSpi
{
public:
    std::map<std::string, CZQThostFtdcDepthMarketDataField> LastDepth;
    char *zq_MDAddress;
    char *zq_BrokerID;
    char *zq_UserID;
    char *zq_Password;

    void OnFrontConnected();
    void OnRspUserLogin(CZQThostFtdcRspUserLoginField *pRspUserLogin, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
    void OnFrontDisconnected(int nReason);
	void Init(const char* pi_MDAdress, const char* pi_BrokerID, const char* pi_User, const char* pi_pwd, SecTraderSpi* pTdHandler);
    void initSubMD();
    void SubscribeMD(char* Instrument, char* ExchangeID);
    void setQuoteModel(QStandardItemModel *model);
    void setModelData(CZQThostFtdcDepthMarketDataField *pDepthMarketData);

    void OnRtnDepthMarketData(CZQThostFtdcDepthMarketDataField *pDepthMarketData);

    int SubscribeMarketData();

    SecQuoterSpi();
    virtual ~SecQuoterSpi();

private:
    CZQThostFtdcMdApi * m_pMdApi;
    SecTraderSpi* g_pTdHandler;
    QStandardItemModel *quoteModel;
};

#endif // SECQUOTERSPI_H
