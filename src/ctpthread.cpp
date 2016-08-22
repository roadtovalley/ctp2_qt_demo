#include "ctpthread.h"

const char* c_SecMdAddr = "tcp://101.95.178.226:22721";  //192.20.103.164
const char* c_SecTdAddr = "tcp://101.95.178.226:22701";  //101.95.178.226
const char* c_BrokerID = "0001";
const char* c_UserID = "XXXXXXXXX";
const char* c_Password = "XXXXXX";
const char* c_UserProductInfo = "xyzq";
const char* c_AuthCode = "xyzq";

ctpThread::ctpThread(QObject *parent) :
    QThread(parent)
{
    stopped = false;
}

void ctpThread::sl()
{
    #ifdef __unix__                   /* __unix__ is usually defined by compilers targeting Unix systems */
    printf("Sleep 1 sec(linux)\n");
    fflush(stdout);
    sleep(1);
    #elif defined(_WIN32) || defined(WIN32)     /* _Win32 is usually defined by compilers targeting 32 or   64 bit Windows systems */
    printf("Sleep 1000 msec(windows)\n");
    fflush(stdout);
    Sleep(1000);
    #endif
}

void ctpThread::run()
{
    SecTraderSpi *pTdHandler = new SecTraderSpi();
    pTdHandler->Init(c_SecTdAddr,
                     c_BrokerID,
                     c_UserID,
                     c_Password,
                     c_UserProductInfo,
                     c_AuthCode);
    while (!pTdHandler->bIsLogon) sl();
    pTdHandler->ReqTrading();
    while (!pTdHandler->bIsgetTradingCode) sl();
    pTdHandler->ReqQrySecurity();
    while (!pTdHandler->bIsgetSec) sl();
    printf("Total Stock Number = %d\n", pTdHandler->g_SecNum);
    fflush(stdout);
    //行情管理
    SecQuoterSpi *pMdHandler = new SecQuoterSpi();
    pMdHandler->setQuoteModel(quoteModel);
    pMdHandler->Init(c_SecMdAddr,
                     c_BrokerID,
                     c_UserID,
                     c_Password,
                     pTdHandler);
    wait();
}
void ctpThread::setQuoteModel(QStandardItemModel *model)
{
    quoteModel = model;
}
