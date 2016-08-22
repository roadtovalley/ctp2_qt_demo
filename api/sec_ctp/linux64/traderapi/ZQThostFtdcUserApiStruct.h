/////////////////////////////////////////////////////////////////////////
///@system 新一代交易所系统
///@company 上海期货信息技术有限公司
///@file ZQThostFtdcUserApiStruct.h
///@brief 定义了客户端接口使用的业务数据结构
///@history 
///20060106	赵鸿昊		创建该文件
/////////////////////////////////////////////////////////////////////////

#if !defined(_ZQTHOST_FTDCSTRUCT_H)
#define _ZQTHOST_FTDCSTRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "ZQThostFtdcUserApiDataType.h"
///响应信息
struct CZQThostFtdcRspInfoField
{
	///错误代码
	TZQThostFtdcErrorIDType	ErrorID;
	///错误消息
	TZQThostFtdcErrorMsgType	ErrorMsg;
};

///信息分发
struct CZQThostFtdcDisseminationField
{
	///序列系列号
	TZQThostFtdcSequenceSeriesType	SequenceSeries;
	///序列号
	TZQThostFtdcSequenceNoType	SequenceNo;
};

///用户登录请求
struct CZQThostFtdcReqUserLoginField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///密码
	TZQThostFtdcPasswordType	Password;
	///用户端产品信息
	TZQThostFtdcProductInfoType	UserProductInfo;
	///接口端产品信息
	TZQThostFtdcProductInfoType	InterfaceProductInfo;
	///协议信息
	TZQThostFtdcProtocolInfoType	ProtocolInfo;
	///Mac地址
	TZQThostFtdcMacAddressType	MacAddress;
	///动态密码
	TZQThostFtdcPasswordType	OneTimePassword;
	///终端IP地址
	TZQThostFtdcIPAddressType	ClientIPAddress;
	///接口语言
	TZQThostFtdcLangType	Lang;
};

///用户登录应答
struct CZQThostFtdcRspUserLoginField
{
	///登录成功时间
	TZQThostFtdcTimeType	LoginTime;
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///交易系统名称
	TZQThostFtdcSystemNameType	SystemName;
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///最大报单引用
	TZQThostFtdcOrderRefType	MaxOrderRef;
};

///用户登出请求
struct CZQThostFtdcUserLogoutField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
};

///强制交易员退出
struct CZQThostFtdcForceUserLogoutField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
};

///全部登出
struct CZQThostFtdcLogoutAllField
{
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///系统名称
	TZQThostFtdcSystemNameType	SystemName;
};

///重置用户密码
struct CZQThostFtdcUserPasswordUpdateField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///旧密码
	TZQThostFtdcPasswordType	OldPassword;
	///新密码
	TZQThostFtdcPasswordType	NewPassword;
};

///激活用户
struct CZQThostFtdcActivateUserField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
};

///客户端认证请求
struct CZQThostFtdcReqAuthenticateField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///用户端产品信息
	TZQThostFtdcProductInfoType	UserProductInfo;
	///认证码
	TZQThostFtdcAuthCodeType	AuthCode;
};

///客户端认证响应
struct CZQThostFtdcRspAuthenticateField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///用户端产品信息
	TZQThostFtdcProductInfoType	UserProductInfo;
};

///客户端认证信息
struct CZQThostFtdcAuthenticationInfoField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///用户端产品信息
	TZQThostFtdcProductInfoType	UserProductInfo;
	///认证信息
	TZQThostFtdcAuthInfoType	AuthInfo;
	///是否为认证结果
	TZQThostFtdcBoolType	IsResult;
};

///报单录入
struct CZQThostFtdcInputOrderField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///报单引用
	TZQThostFtdcOrderRefType	OrderRef;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///报单价格条件
	TZQThostFtdcOrderPriceTypeType	OrderPriceType;
	///买卖方向
	TZQThostFtdcDirectionType	Direction;
	///组合开平标志
	TZQThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///组合投机套保标志
	TZQThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///价格
	TZQThostFtdcPriceType	LimitPrice;
	///数量
	TZQThostFtdcVolumeType	VolumeTotalOriginal;
	///有效期类型
	TZQThostFtdcTimeConditionType	TimeCondition;
	///GTD日期
	TZQThostFtdcDateType	GTDDate;
	///成交量类型
	TZQThostFtdcVolumeConditionType	VolumeCondition;
	///最小成交量
	TZQThostFtdcVolumeType	MinVolume;
	///触发条件
	TZQThostFtdcContingentConditionType	ContingentCondition;
	///止损价
	TZQThostFtdcPriceType	StopPrice;
	///强平原因
	TZQThostFtdcForceCloseReasonType	ForceCloseReason;
	///自动挂起标志
	TZQThostFtdcBoolType	IsAutoSuspend;
	///业务单元
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///请求编号
	TZQThostFtdcRequestIDType	RequestID;
	///用户强评标志
	TZQThostFtdcBoolType	UserForceClose;
	///互换单标志
	TZQThostFtdcBoolType	IsSwapOrder;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///资金账户代码
	TZQThostFtdcAccountIDType	AccountID;
	///IP地址
	TZQThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TZQThostFtdcMacAddressType	MacAddress;
	///头寸类型
	TZQThostFtdcCreditPositionTypeType	CreditPositionType;
};

///输入报单操作
struct CZQThostFtdcInputOrderActionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///报单操作引用
	TZQThostFtdcOrderActionRefType	OrderActionRef;
	///报单引用
	TZQThostFtdcOrderRefType	OrderRef;
	///请求编号
	TZQThostFtdcRequestIDType	RequestID;
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///报单编号
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///操作标志
	TZQThostFtdcActionFlagType	ActionFlag;
	///价格
	TZQThostFtdcPriceType	LimitPrice;
	///数量变化
	TZQThostFtdcVolumeType	VolumeChange;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///IP地址
	TZQThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TZQThostFtdcMacAddressType	MacAddress;
};

///转托管录入
struct CZQThostFtdcInputCustodyTransferField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///报单引用
	TZQThostFtdcOrderRefType	OrderRef;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///申报数量
	TZQThostFtdcVolumeType	Volume;
	///转入交易单元
	TZQThostFtdcPbuIDType	InPbuID;
	///转托管类型
	TZQThostFtdcCustodyTransferTypeType	CustodyTransferType;
	///请求编号
	TZQThostFtdcRequestIDType	RequestID;
	///IP地址
	TZQThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TZQThostFtdcMacAddressType	MacAddress;
};

///校验用户密码
struct CZQThostFtdcVerifyUserPasswordField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///密码
	TZQThostFtdcPasswordType	Password;
};

///转托管报单操作
struct CZQThostFtdcInputCustodyTransferActionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///报单操作引用
	TZQThostFtdcOrderActionRefType	OrderActionRef;
	///报单引用
	TZQThostFtdcOrderRefType	OrderRef;
	///请求编号
	TZQThostFtdcRequestIDType	RequestID;
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///报单编号
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///操作标志
	TZQThostFtdcActionFlagType	ActionFlag;
	///IP地址
	TZQThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TZQThostFtdcMacAddressType	MacAddress;
};

///资金转移
struct CZQThostFtdcInputTransferFundField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///资金账户
	TZQThostFtdcAccountIDType	AccountID;
	///申请流水号
	TZQThostFtdcExternalSerialType	ApplySerial;
	///转移方向
	TZQThostFtdcTransferDirectionType	TransferDirection;
	///转账金额
	TZQThostFtdcMoneyType	Amount;
};

///冲正资金转移
struct CZQThostFtdcInputRepealFundField
{
	///被冲正CTP转账流水号
	TZQThostFtdcSerialType	CTPRepealFundSerial;
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///申请流水号
	TZQThostFtdcExternalSerialType	ApplySerial;
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///资金账户
	TZQThostFtdcAccountIDType	AccountID;
};

///仓位转移
struct CZQThostFtdcInputTransferPositionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///申请流水号
	TZQThostFtdcExternalSerialType	ApplySerial;
	///转移方向
	TZQThostFtdcTransferDirectionType	TransferDirection;
	///数量
	TZQThostFtdcVolumeType	Volume;
	///转移持仓类型
	TZQThostFtdcTransferPositionTypeType	TransferPositionType;
};

///冲正仓位转移
struct CZQThostFtdcInputRepealPositionField
{
	///被冲正CTP转仓流水号
	TZQThostFtdcSerialType	CTPRepealPositionSerial;
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///申请流水号
	TZQThostFtdcExternalSerialType	ApplySerial;
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///行情订阅
struct CZQThostFtdcSpecificInstrumentField
{
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///报单
struct CZQThostFtdcOrderField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///报单引用
	TZQThostFtdcOrderRefType	OrderRef;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///报单价格条件
	TZQThostFtdcOrderPriceTypeType	OrderPriceType;
	///买卖方向
	TZQThostFtdcDirectionType	Direction;
	///组合开平标志
	TZQThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///组合投机套保标志
	TZQThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///价格
	TZQThostFtdcPriceType	LimitPrice;
	///数量
	TZQThostFtdcVolumeType	VolumeTotalOriginal;
	///有效期类型
	TZQThostFtdcTimeConditionType	TimeCondition;
	///GTD日期
	TZQThostFtdcDateType	GTDDate;
	///成交量类型
	TZQThostFtdcVolumeConditionType	VolumeCondition;
	///最小成交量
	TZQThostFtdcVolumeType	MinVolume;
	///触发条件
	TZQThostFtdcContingentConditionType	ContingentCondition;
	///止损价
	TZQThostFtdcPriceType	StopPrice;
	///强平原因
	TZQThostFtdcForceCloseReasonType	ForceCloseReason;
	///自动挂起标志
	TZQThostFtdcBoolType	IsAutoSuspend;
	///业务单元
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///请求编号
	TZQThostFtdcRequestIDType	RequestID;
	///本地报单编号
	TZQThostFtdcOrderLocalIDType	OrderLocalID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///会员代码
	TZQThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///交易所交易员代码
	TZQThostFtdcTraderIDType	TraderID;
	///安装编号
	TZQThostFtdcInstallIDType	InstallID;
	///报单提交状态
	TZQThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///报单提示序号
	TZQThostFtdcSequenceNoType	NotifySequence;
	///交易日
	TZQThostFtdcDateType	TradingDay;
	///结算编号
	TZQThostFtdcSettlementIDType	SettlementID;
	///报单编号
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///报单来源
	TZQThostFtdcOrderSourceType	OrderSource;
	///报单状态
	TZQThostFtdcOrderStatusType	OrderStatus;
	///报单类型
	TZQThostFtdcOrderTypeType	OrderType;
	///今成交数量
	TZQThostFtdcVolumeType	VolumeTraded;
	///剩余数量
	TZQThostFtdcVolumeType	VolumeTotal;
	///报单日期
	TZQThostFtdcDateType	InsertDate;
	///委托时间
	TZQThostFtdcTimeType	InsertTime;
	///激活时间
	TZQThostFtdcTimeType	ActiveTime;
	///挂起时间
	TZQThostFtdcTimeType	SuspendTime;
	///最后修改时间
	TZQThostFtdcTimeType	UpdateTime;
	///撤销时间
	TZQThostFtdcTimeType	CancelTime;
	///最后修改交易所交易员代码
	TZQThostFtdcTraderIDType	ActiveTraderID;
	///结算会员编号
	TZQThostFtdcParticipantIDType	ClearingPartID;
	///序号
	TZQThostFtdcSequenceNoType	SequenceNo;
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///用户端产品信息
	TZQThostFtdcProductInfoType	UserProductInfo;
	///状态信息
	TZQThostFtdcErrorMsgType	StatusMsg;
	///用户强评标志
	TZQThostFtdcBoolType	UserForceClose;
	///操作用户代码
	TZQThostFtdcUserIDType	ActiveUserID;
	///经纪公司报单编号
	TZQThostFtdcSequenceNoType	BrokerOrderSeq;
	///相关报单
	TZQThostFtdcOrderSysIDType	RelativeOrderSysID;
	///互换单标志
	TZQThostFtdcBoolType	IsSwapOrder;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///资金账户代码
	TZQThostFtdcAccountIDType	AccountID;
	///IP地址
	TZQThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TZQThostFtdcMacAddressType	MacAddress;
	///头寸类型
	TZQThostFtdcCreditPositionTypeType	CreditPositionType;
};

///成交
struct CZQThostFtdcTradeField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///报单引用
	TZQThostFtdcOrderRefType	OrderRef;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///成交编号
	TZQThostFtdcTradeIDType	TradeID;
	///买卖方向
	TZQThostFtdcDirectionType	Direction;
	///报单编号
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///会员代码
	TZQThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///交易角色
	TZQThostFtdcTradingRoleType	TradingRole;
	///合约在交易所的代码
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///开平标志
	TZQThostFtdcOffsetFlagType	OffsetFlag;
	///投机套保标志
	TZQThostFtdcHedgeFlagType	HedgeFlag;
	///价格
	TZQThostFtdcPriceType	Price;
	///数量
	TZQThostFtdcVolumeType	Volume;
	///成交时期
	TZQThostFtdcDateType	TradeDate;
	///成交时间
	TZQThostFtdcTimeType	TradeTime;
	///成交类型
	TZQThostFtdcTradeTypeType	TradeType;
	///成交价来源
	TZQThostFtdcPriceSourceType	PriceSource;
	///交易所交易员代码
	TZQThostFtdcTraderIDType	TraderID;
	///本地报单编号
	TZQThostFtdcOrderLocalIDType	OrderLocalID;
	///结算会员编号
	TZQThostFtdcParticipantIDType	ClearingPartID;
	///业务单元
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///序号
	TZQThostFtdcSequenceNoType	SequenceNo;
	///交易日
	TZQThostFtdcDateType	TradingDay;
	///结算编号
	TZQThostFtdcSettlementIDType	SettlementID;
	///经纪公司报单编号
	TZQThostFtdcSequenceNoType	BrokerOrderSeq;
	///成交来源
	TZQThostFtdcTradeSourceType	TradeSource;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///资金账户代码
	TZQThostFtdcAccountIDType	AccountID;
};

///报单操作
struct CZQThostFtdcOrderActionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///报单操作引用
	TZQThostFtdcOrderActionRefType	OrderActionRef;
	///报单引用
	TZQThostFtdcOrderRefType	OrderRef;
	///请求编号
	TZQThostFtdcRequestIDType	RequestID;
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///报单编号
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///操作标志
	TZQThostFtdcActionFlagType	ActionFlag;
	///价格
	TZQThostFtdcPriceType	LimitPrice;
	///数量变化
	TZQThostFtdcVolumeType	VolumeChange;
	///操作日期
	TZQThostFtdcDateType	ActionDate;
	///操作时间
	TZQThostFtdcTimeType	ActionTime;
	///交易所交易员代码
	TZQThostFtdcTraderIDType	TraderID;
	///安装编号
	TZQThostFtdcInstallIDType	InstallID;
	///本地报单编号
	TZQThostFtdcOrderLocalIDType	OrderLocalID;
	///操作本地编号
	TZQThostFtdcOrderLocalIDType	ActionLocalID;
	///会员代码
	TZQThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///业务单元
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///报单操作状态
	TZQThostFtdcOrderActionStatusType	OrderActionStatus;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///状态信息
	TZQThostFtdcErrorMsgType	StatusMsg;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///IP地址
	TZQThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TZQThostFtdcMacAddressType	MacAddress;
};

///交易所信息变更
struct CZQThostFtdcExchangeField
{
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///交易所名称
	TZQThostFtdcExchangeNameType	ExchangeName;
	///交易所属性
	TZQThostFtdcExchangePropertyType	ExchangeProperty;
	///当前交易日
	TZQThostFtdcDateType	TradingDay;
};

///转托管报单
struct CZQThostFtdcCustodyTransferField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///报单引用
	TZQThostFtdcOrderRefType	OrderRef;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///数量
	TZQThostFtdcVolumeType	Volume;
	///转入交易单元
	TZQThostFtdcPbuIDType	InPbuID;
	///转托管类型
	TZQThostFtdcCustodyTransferTypeType	CustodyTransferType;
	///请求编号
	TZQThostFtdcRequestIDType	RequestID;
	///本地报单编号
	TZQThostFtdcOrderLocalIDType	OrderLocalID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///会员代码
	TZQThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///交易所交易员代码
	TZQThostFtdcTraderIDType	TraderID;
	///安装编号
	TZQThostFtdcInstallIDType	InstallID;
	///报单提交状态
	TZQThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///报单提示序号
	TZQThostFtdcSequenceNoType	NotifySequence;
	///交易日
	TZQThostFtdcDateType	TradingDay;
	///结算编号
	TZQThostFtdcSettlementIDType	SettlementID;
	///报单编号
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///报单来源
	TZQThostFtdcOrderSourceType	OrderSource;
	///报单状态
	TZQThostFtdcOrderStatusType	OrderStatus;
	///报单日期
	TZQThostFtdcDateType	InsertDate;
	///委托时间
	TZQThostFtdcTimeType	InsertTime;
	///撤销时间
	TZQThostFtdcTimeType	CancelTime;
	///最后修改交易所交易员代码
	TZQThostFtdcTraderIDType	ActiveTraderID;
	///结算会员编号
	TZQThostFtdcParticipantIDType	ClearingPartID;
	///序号
	TZQThostFtdcSequenceNoType	SequenceNo;
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///用户端产品信息
	TZQThostFtdcProductInfoType	UserProductInfo;
	///状态信息
	TZQThostFtdcErrorMsgType	StatusMsg;
	///操作用户代码
	TZQThostFtdcUserIDType	ActiveUserID;
	///经纪公司报单编号
	TZQThostFtdcSequenceNoType	BrokerOrderSeq;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///IP地址
	TZQThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TZQThostFtdcMacAddressType	MacAddress;
};

///转托管操作
struct CZQThostFtdcCustodyTransferActionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///报单操作引用
	TZQThostFtdcOrderActionRefType	OrderActionRef;
	///报单引用
	TZQThostFtdcOrderRefType	OrderRef;
	///请求编号
	TZQThostFtdcRequestIDType	RequestID;
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///报单编号
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///操作标志
	TZQThostFtdcActionFlagType	ActionFlag;
	///操作日期
	TZQThostFtdcDateType	ActionDate;
	///操作时间
	TZQThostFtdcTimeType	ActionTime;
	///交易所交易员代码
	TZQThostFtdcTraderIDType	TraderID;
	///安装编号
	TZQThostFtdcInstallIDType	InstallID;
	///本地报单编号
	TZQThostFtdcOrderLocalIDType	OrderLocalID;
	///操作本地编号
	TZQThostFtdcOrderLocalIDType	ActionLocalID;
	///会员代码
	TZQThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///报单操作状态
	TZQThostFtdcOrderActionStatusType	OrderActionStatus;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///状态信息
	TZQThostFtdcErrorMsgType	StatusMsg;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///IP地址
	TZQThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TZQThostFtdcMacAddressType	MacAddress;
};

///交易通知
struct CZQThostFtdcTradingNoticeInfoField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///发送时间
	TZQThostFtdcTimeType	SendTime;
	///消息正文
	TZQThostFtdcContentType	Content;
	///序列系列号
	TZQThostFtdcSequenceSeriesType	SequenceSeries;
	///序列号
	TZQThostFtdcSequenceNoType	SequenceNo;
};

///资金转移回报
struct CZQThostFtdcTransferFundField
{
	///CTP转账流水号
	TZQThostFtdcSerialType	CTPFundSerial;
	///申请流水号
	TZQThostFtdcExternalSerialType	ApplySerial;
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///资金账户代码
	TZQThostFtdcAccountIDType	AccountID;
	///币种代码
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///转移方向
	TZQThostFtdcTransferDirectionType	TransferDirection;
	///出入金金额
	TZQThostFtdcMoneyType	Amount;
	///转移状态
	TZQThostFtdcTransferStatusType	TransferStatus;
	///操作人员
	TZQThostFtdcUserIDType	OperatorID;
	///操作日期
	TZQThostFtdcDateType	OperateDate;
	///操作时间
	TZQThostFtdcTimeType	OperateTime;
};

///仓位转移回报
struct CZQThostFtdcTransferPositionField
{
	///CTP仓位转移流水号
	TZQThostFtdcSerialType	CTPPositionSerial;
	///申请流水号
	TZQThostFtdcExternalSerialType	ApplySerial;
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///证券代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///交易日
	TZQThostFtdcDateType	TradingDay;
	///转移方向
	TZQThostFtdcTransferDirectionType	TransferDirection;
	///转移持仓类型
	TZQThostFtdcTransferPositionTypeType	TransferPositionType;
	///昨日持仓数量
	TZQThostFtdcVolumeType	HistoryVolume;
	///今日买卖持仓数量
	TZQThostFtdcVolumeType	TodayBSVolume;
	///今日申赎持仓数量
	TZQThostFtdcVolumeType	TodayPRVolume;
	///转移状态
	TZQThostFtdcTransferStatusType	TransferStatus;
	///操作人员
	TZQThostFtdcUserIDType	OperatorID;
	///操作日期
	TZQThostFtdcDateType	OperateDate;
	///操作时间
	TZQThostFtdcTimeType	OperateTime;
};

///深度行情通知
struct CZQThostFtdcDepthMarketDataField
{
	///交易日
	TZQThostFtdcDateType	TradingDay;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///合约在交易所的代码
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///最新价
	TZQThostFtdcPriceType	LastPrice;
	///上次结算价
	TZQThostFtdcPriceType	PreSettlementPrice;
	///昨收盘
	TZQThostFtdcPriceType	PreClosePrice;
	///昨持仓量
	TZQThostFtdcLargeVolumeType	PreOpenInterest;
	///今开盘
	TZQThostFtdcPriceType	OpenPrice;
	///最高价
	TZQThostFtdcPriceType	HighestPrice;
	///最低价
	TZQThostFtdcPriceType	LowestPrice;
	///数量
	TZQThostFtdcLongVolumeType	Volume;
	///成交金额
	TZQThostFtdcMoneyType	Turnover;
	///持仓量
	TZQThostFtdcLargeVolumeType	OpenInterest;
	///今收盘
	TZQThostFtdcPriceType	ClosePrice;
	///本次结算价
	TZQThostFtdcPriceType	SettlementPrice;
	///涨停板价
	TZQThostFtdcPriceType	UpperLimitPrice;
	///跌停板价
	TZQThostFtdcPriceType	LowerLimitPrice;
	///昨虚实度
	TZQThostFtdcRatioType	PreDelta;
	///今虚实度
	TZQThostFtdcRatioType	CurrDelta;
	///最后修改时间
	TZQThostFtdcTimeType	UpdateTime;
	///最后修改毫秒
	TZQThostFtdcMillisecType	UpdateMillisec;
	///申买价一
	TZQThostFtdcPriceType	BidPrice1;
	///申买量一
	TZQThostFtdcLongVolumeType	BidVolume1;
	///申卖价一
	TZQThostFtdcPriceType	AskPrice1;
	///申卖量一
	TZQThostFtdcLongVolumeType	AskVolume1;
	///申买价二
	TZQThostFtdcPriceType	BidPrice2;
	///申买量二
	TZQThostFtdcLongVolumeType	BidVolume2;
	///申卖价二
	TZQThostFtdcPriceType	AskPrice2;
	///申卖量二
	TZQThostFtdcLongVolumeType	AskVolume2;
	///申买价三
	TZQThostFtdcPriceType	BidPrice3;
	///申买量三
	TZQThostFtdcLongVolumeType	BidVolume3;
	///申卖价三
	TZQThostFtdcPriceType	AskPrice3;
	///申卖量三
	TZQThostFtdcLongVolumeType	AskVolume3;
	///申买价四
	TZQThostFtdcPriceType	BidPrice4;
	///申买量四
	TZQThostFtdcLongVolumeType	BidVolume4;
	///申卖价四
	TZQThostFtdcPriceType	AskPrice4;
	///申卖量四
	TZQThostFtdcLongVolumeType	AskVolume4;
	///申买价五
	TZQThostFtdcPriceType	BidPrice5;
	///申买量五
	TZQThostFtdcLongVolumeType	BidVolume5;
	///申卖价五
	TZQThostFtdcPriceType	AskPrice5;
	///申卖量五
	TZQThostFtdcLongVolumeType	AskVolume5;
	///当日均价
	TZQThostFtdcPriceType	AveragePrice;
	///业务日期
	TZQThostFtdcDateType	ActionDay;
	///合约名称
	TZQThostFtdcInstrumentNameType	InstrumentName;
	///成交笔数
	TZQThostFtdcLongVolumeType	TradingCount;
	///市盈率1
	TZQThostFtdcRatioType	PERatio1;
	///市盈率2
	TZQThostFtdcRatioType	PERatio2;
	///价格升跌1
	TZQThostFtdcPriceType	PriceUpDown1;
	///价格升跌2
	TZQThostFtdcPriceType	PriceUpDown2;
};

///行情交易所代码
struct CZQThostFtdcMarketDataExchangeField
{
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///行情基础属性
struct CZQThostFtdcMarketDataBaseField
{
	///交易日
	TZQThostFtdcDateType	TradingDay;
	///昨收盘
	TZQThostFtdcPriceType	PreClosePrice;
	///合约名称
	TZQThostFtdcInstrumentNameType	InstrumentName;
};

///行情静态属性
struct CZQThostFtdcMarketDataStaticField
{
	///今开盘
	TZQThostFtdcPriceType	OpenPrice;
	///最高价
	TZQThostFtdcPriceType	HighestPrice;
	///最低价
	TZQThostFtdcPriceType	LowestPrice;
	///涨停板价
	TZQThostFtdcPriceType	UpperLimitPrice;
	///跌停板价
	TZQThostFtdcPriceType	LowerLimitPrice;
};

///行情最新成交属性
struct CZQThostFtdcMarketDataLastMatchField
{
	///最新价
	TZQThostFtdcPriceType	LastPrice;
	///数量
	TZQThostFtdcLongVolumeType	Volume;
	///成交金额
	TZQThostFtdcMoneyType	Turnover;
	///成交笔数
	TZQThostFtdcLongVolumeType	TradingCount;
	///市盈率1
	TZQThostFtdcRatioType	PERatio1;
	///市盈率2
	TZQThostFtdcRatioType	PERatio2;
	///价格升跌1
	TZQThostFtdcPriceType	PriceUpDown1;
	///价格升跌2
	TZQThostFtdcPriceType	PriceUpDown2;
	///持仓量
	TZQThostFtdcLargeVolumeType	OpenInterest;
};

///行情最优价属性
struct CZQThostFtdcMarketDataBestPriceField
{
	///申买价一
	TZQThostFtdcPriceType	BidPrice1;
	///申买量一
	TZQThostFtdcLongVolumeType	BidVolume1;
	///申卖价一
	TZQThostFtdcPriceType	AskPrice1;
	///申卖量一
	TZQThostFtdcLongVolumeType	AskVolume1;
};

///行情申买二、三属性
struct CZQThostFtdcMarketDataBid23Field
{
	///申买价二
	TZQThostFtdcPriceType	BidPrice2;
	///申买量二
	TZQThostFtdcLongVolumeType	BidVolume2;
	///申买价三
	TZQThostFtdcPriceType	BidPrice3;
	///申买量三
	TZQThostFtdcLongVolumeType	BidVolume3;
};

///行情申卖二、三属性
struct CZQThostFtdcMarketDataAsk23Field
{
	///申卖价二
	TZQThostFtdcPriceType	AskPrice2;
	///申卖量二
	TZQThostFtdcLongVolumeType	AskVolume2;
	///申卖价三
	TZQThostFtdcPriceType	AskPrice3;
	///申卖量三
	TZQThostFtdcLongVolumeType	AskVolume3;
};

///行情申买四、五属性
struct CZQThostFtdcMarketDataBid45Field
{
	///申买价四
	TZQThostFtdcPriceType	BidPrice4;
	///申买量四
	TZQThostFtdcLongVolumeType	BidVolume4;
	///申买价五
	TZQThostFtdcPriceType	BidPrice5;
	///申买量五
	TZQThostFtdcLongVolumeType	BidVolume5;
};

///行情申卖四、五属性
struct CZQThostFtdcMarketDataAsk45Field
{
	///申卖价四
	TZQThostFtdcPriceType	AskPrice4;
	///申卖量四
	TZQThostFtdcLongVolumeType	AskVolume4;
	///申卖价五
	TZQThostFtdcPriceType	AskPrice5;
	///申卖量五
	TZQThostFtdcLongVolumeType	AskVolume5;
};

///行情更新时间属性
struct CZQThostFtdcMarketDataUpdateTimeField
{
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///最后修改时间
	TZQThostFtdcTimeType	UpdateTime;
	///最后修改毫秒
	TZQThostFtdcMillisecType	UpdateMillisec;
};

///查询交易所
struct CZQThostFtdcQryExchangeField
{
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///查询行情
struct CZQThostFtdcQryDepthMarketDataField
{
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///查询证券
struct CZQThostFtdcQrySecurityField
{
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///交易所合约代码
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///产品代码
	TZQThostFtdcProductIDType	ProductID;
};

///证券
struct CZQThostFtdcSecurityField
{
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///合约名称
	TZQThostFtdcInstrumentNameType	InstrumentName;
	///合约在交易所的代码
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///市场代码
	TZQThostFtdcMarketIDType	MarketID;
	///产品代码
	TZQThostFtdcProductIDType	ProductID;
	///证券类别代码
	TZQThostFtdcSecurityClassIDType	SecurityClassID;
	///申报单位
	TZQThostFtdcOrderUnitType	OrderUnit;
	///买入交易单位
	TZQThostFtdcTradingUnitType	BuyTradingUnit;
	///卖出交易单位
	TZQThostFtdcTradingUnitType	SellTradingUnit;
	///市价单买最大下单量
	TZQThostFtdcVolumeType	MaxMarketOrderBuyVolume;
	///市价单买最小下单量
	TZQThostFtdcVolumeType	MinMarketOrderBuyVolume;
	///限价单买最大下单量
	TZQThostFtdcVolumeType	MaxLimitOrderBuyVolume;
	///限价单买最小下单量
	TZQThostFtdcVolumeType	MinLimitOrderBuyVolume;
	///市价单卖最大下单量
	TZQThostFtdcVolumeType	MaxMarketOrderSellVolume;
	///市价单卖最小下单量
	TZQThostFtdcVolumeType	MinMarketOrderSellVolume;
	///限价单卖最大下单量
	TZQThostFtdcVolumeType	MaxLimitOrderSellVolume;
	///限价单卖最小下单量
	TZQThostFtdcVolumeType	MinLimitOrderSellVolume;
	///数量乘数
	TZQThostFtdcVolumeMultipleType	VolumeMultiple;
	///最小变动价位
	TZQThostFtdcPriceTickType	PriceTick;
	///上市日
	TZQThostFtdcDateType	OpenDate;
	///持仓类型
	TZQThostFtdcPositionTypeType	PositionType;
	///面值
	TZQThostFtdcSecurityValueType	SecurityValue;
	///证券状态
	TZQThostFtdcStatusFlagType	SecurityStatusFlag;
	///债券应计利息
	TZQThostFtdcInterestType	BondInterest;
	///折算率
	TZQThostFtdcRatioType	ConversionRate;
};

///查询ETF清单
struct CZQThostFtdcQryETFFileField
{
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///ETF合约代码
	TZQThostFtdcInstrumentIDType	ETFInstrumentID;
	///ETF申赎代码
	TZQThostFtdcInstrumentIDType	ETFCreRedInstrumentID;
};

///ETF清单
struct CZQThostFtdcETFFileField
{
	///交易日
	TZQThostFtdcDateType	TradingDay;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///ETF交易代码
	TZQThostFtdcInstrumentIDType	ETFInstrumentID;
	///ETF申赎代码
	TZQThostFtdcInstrumentIDType	ETFCreRedInstrumentID;
	///最小申购赎回单位份数
	TZQThostFtdcVolumeType	CreationRedemptionUnit;
	///最大现金替代比例
	TZQThostFtdcRatioType	Maxcashratio;
	///是否允许申购
	TZQThostFtdcBoolType	CreationStatus;
	///是否允许赎回
	TZQThostFtdcBoolType	RedemptionStatus;
	///预估现金差额
	TZQThostFtdcMoneyType	EstimateCashComponent;
	///前一交易日现金差额
	TZQThostFtdcMoneyType	CashComponent;
	///前一交易日基金单位净值
	TZQThostFtdcMoneyType	NAV;
	///前一交易日申赎基准单位净值
	TZQThostFtdcMoneyType	NAVperCU;
	///当日申购赎回基准单位的红利金额
	TZQThostFtdcMoneyType	DividendPerCU;
};

///查询ETF成分证券
struct CZQThostFtdcQryETFBasketField
{
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///ETF合约代码
	TZQThostFtdcInstrumentIDType	ETFInstrumentID;
	///成分合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///ETF成分证券
struct CZQThostFtdcETFBasketField
{
	///交易日
	TZQThostFtdcDateType	TradingDay;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///ETF交易代码
	TZQThostFtdcInstrumentIDType	ETFInstrumentID;
	///ETF成份证券代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///证券简称
	TZQThostFtdcInstrumentNameType	InstrumentName;
	///证券数量
	TZQThostFtdcVolumeType	Volume;
	///替代标志
	TZQThostFtdcETFCurrenceReplaceStatusType	ETFCurrenceReplaceStatus;
	///溢价比例
	TZQThostFtdcRatioType	Premium;
	///申购替代金额
	TZQThostFtdcMoneyType	CreationReplaceAmount;
	///赎回替代金额
	TZQThostFtdcMoneyType	RedemptionReplaceAmount;
	///挂牌市场
	TZQThostFtdcListingMarketType	Market;
};

///查询新股
struct CZQThostFtdcQrySubscribingSharesField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///申购代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///新股
struct CZQThostFtdcSubscribingSharesField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///申购代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///市场代码
	TZQThostFtdcMarketIDType	MarketID;
	///产品代码
	TZQThostFtdcProductIDType	ProductID;
	///证券类别代码
	TZQThostFtdcSecurityClassIDType	SecurityClassID;
	///网上申购上限
	TZQThostFtdcVolumeType	OnlineLimit;
	///发行价格
	TZQThostFtdcPriceType	Price;
	///币种代码
	TZQThostFtdcCurrencyIDType	CurrencyID;
};

///查询质押申报代码
struct CZQThostFtdcQryPledgeOrderInfoField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///质押申报代码
struct CZQThostFtdcPledgeOrderInfoField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///质押申报代码
	TZQThostFtdcInstrumentIDType	PledgeOrderID;
	///标准券代码
	TZQThostFtdcInstrumentIDType	StandardBondID;
};

///查询市场
struct CZQThostFtdcQryMarketField
{
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///市场代码
	TZQThostFtdcMarketIDType	MarketID;
};

///市场
struct CZQThostFtdcMarketField
{
	///市场代码
	TZQThostFtdcMarketIDType	MarketID;
	///市场名称
	TZQThostFtdcNameType	MarketName;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///查询证券品种
struct CZQThostFtdcQrySecurityProductField
{
	///产品代码
	TZQThostFtdcProductIDType	ProductID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///证券品种
struct CZQThostFtdcSecurityProductField
{
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///产品代码
	TZQThostFtdcProductIDType	ProductID;
	///产品名称
	TZQThostFtdcProductNameType	ProductName;
	///币种代码
	TZQThostFtdcCurrencyIDType	CurrencyID;
};

///查询证券类别
struct CZQThostFtdcQrySecurityClassField
{
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///产品代码
	TZQThostFtdcProductIDType	ProductID;
	///证券类别代码
	TZQThostFtdcSecurityClassIDType	SecurityClassID;
};

///证券类别
struct CZQThostFtdcSecurityClassField
{
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///产品代码
	TZQThostFtdcProductIDType	ProductID;
	///证券类别代码
	TZQThostFtdcSecurityClassIDType	SecurityClassID;
	///证券类别名称
	TZQThostFtdcNameType	SecurityClassName;
};

///查询用户权限
struct CZQThostFtdcQryUserFunctionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
};

///用户权限
struct CZQThostFtdcUserFunctionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///功能代码
	TZQThostFtdcFunctionIDType	FunctionID;
	///功能名称
	TZQThostFtdcNameType	FunctionName;
};

///查询报单
struct CZQThostFtdcQryOrderField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///报单编号
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///开始时间
	TZQThostFtdcTimeType	InsertTimeStart;
	///结束时间
	TZQThostFtdcTimeType	InsertTimeEnd;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///查询报单操作
struct CZQThostFtdcQryOrderActionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///查询成交
struct CZQThostFtdcQryTradeField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///成交编号
	TZQThostFtdcTradeIDType	TradeID;
	///开始时间
	TZQThostFtdcTimeType	TradeTimeStart;
	///结束时间
	TZQThostFtdcTimeType	TradeTimeEnd;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///查询资金账户
struct CZQThostFtdcQryTradingAccountField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///资金账户所属投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///币种代码
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///资金账户代码
	TZQThostFtdcAccountIDType	AccountID;
	///资金账户类型
	TZQThostFtdcAccountTypeType	AccountType;
};

///资金账户
struct CZQThostFtdcTradingAccountField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///资金账户代码
	TZQThostFtdcAccountIDType	AccountID;
	///可用资金
	TZQThostFtdcMoneyType	Available;
	///可取资金
	TZQThostFtdcMoneyType	WithdrawQuota;
	///币种代码
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///入金金额
	TZQThostFtdcMoneyType	Deposit;
	///出金金额
	TZQThostFtdcMoneyType	Withdraw;
	///冻结的保证金
	TZQThostFtdcMoneyType	FrozenMargin;
	///冻结的资金
	TZQThostFtdcMoneyType	FrozenCash;
	///冻结的手续费
	TZQThostFtdcMoneyType	FrozenCommission;
	///当前保证金总额
	TZQThostFtdcMoneyType	CurrMargin;
	///手续费
	TZQThostFtdcMoneyType	Commission;
	///资金账户类型
	TZQThostFtdcAccountTypeType	AccountType;
};

///查询投资者证券持仓
struct CZQThostFtdcQryInvestorSecurityPositionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///投资者证券持仓
struct CZQThostFtdcInvestorSecurityPositionField
{
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///交易日
	TZQThostFtdcDateType	TradingDay;
	///持仓多空方向
	TZQThostFtdcPosiDirectionType	PosiDirection;
	///昨日持仓
	TZQThostFtdcPositionVolumeType	HistoryPosition;
	///昨日持仓冻结
	TZQThostFtdcPositionVolumeType	HistoryFrozen;
	///今日买卖持仓
	TZQThostFtdcPositionVolumeType	TodayBSPosition;
	///今日买卖持仓冻结
	TZQThostFtdcPositionVolumeType	TodayBSFrozen;
	///今日申赎持仓
	TZQThostFtdcPositionVolumeType	TodayPRPosition;
	///今日申赎持仓冻结
	TZQThostFtdcPositionVolumeType	TodayPRFrozen;
	///持仓成本
	TZQThostFtdcMoneyType	PositionCost;
	///今日拆分合并持仓
	TZQThostFtdcPositionVolumeType	TodaySMPosition;
	///今日拆分合并持仓冻结
	TZQThostFtdcPositionVolumeType	TodaySMFrozen;
	///融资买入数量
	TZQThostFtdcPositionVolumeType	MarginBuyVolume;
	///融券卖出数量
	TZQThostFtdcPositionVolumeType	ShortSellVolume;
};

///查询投资者质押持仓
struct CZQThostFtdcQryInvestorPledgePositionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///投资者质押持仓
struct CZQThostFtdcInvestorPledgePositionField
{
	///交易日
	TZQThostFtdcDateType	TradingDay;
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///入库证券代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///质押申报代码
	TZQThostFtdcInstrumentIDType	PledgeOrderID;
	///标准券代码
	TZQThostFtdcInstrumentIDType	StandardBondID;
	///昨日入库持仓
	TZQThostFtdcPositionVolumeType	HisPledgePos;
	///昨日入库持仓冻结
	TZQThostFtdcPositionVolumeType	HisPledgePosFrozen;
	///今日入库持仓
	TZQThostFtdcPositionVolumeType	TodayPledgePos;
	///今日入库持仓冻结
	TZQThostFtdcPositionVolumeType	TodayPledgePosFrozen;
};

///查询投资者质押回购
struct CZQThostFtdcQryInvestorPledgeInfoField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///标准券代码
	TZQThostFtdcInstrumentIDType	StandardBondID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///投资者质押回购
struct CZQThostFtdcInvestorPledgeInfoField
{
	///交易日
	TZQThostFtdcDateType	TradingDay;
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///标准券代码
	TZQThostFtdcInstrumentIDType	StandardBondID;
	///融资数量
	TZQThostFtdcPositionVolumeType	PurchaseVol;
	///融资金额
	TZQThostFtdcMoneyType	PurchaseAmt;
	///融券数量
	TZQThostFtdcPositionVolumeType	ReversePurVol;
	///融券金额
	TZQThostFtdcMoneyType	ReversePurAmt;
	///未成交融资数量
	TZQThostFtdcPositionVolumeType	NoTradePurchaseVol;
	///未成交融资金额
	TZQThostFtdcMoneyType	NoTradePurchaseAmt;
	///未成交融券数量
	TZQThostFtdcPositionVolumeType	NoTradeReversePurVol;
	///未成交融券金额
	TZQThostFtdcMoneyType	NoTradeReversePurAmt;
};

///查询报单资金明细
struct CZQThostFtdcQryOrderFundDetailField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///报单编号
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///开始时间
	TZQThostFtdcTimeType	InsertTimeStart;
	///结束时间
	TZQThostFtdcTimeType	InsertTimeEnd;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///报单资金明细
struct CZQThostFtdcOrderFundDetailField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///交易日
	TZQThostFtdcDateType	TradingDay;
	///报单编号
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///资金账户代码
	TZQThostFtdcAccountIDType	AccountID;
	///初始冻结金额
	TZQThostFtdcMoneyType	TotalFrozen;
	///总费用
	TZQThostFtdcMoneyType	TotalFee;
	///成交金额
	TZQThostFtdcMoneyType	Turnover;
};

///查询投资者
struct CZQThostFtdcQryInvestorField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
};

///投资者
struct CZQThostFtdcInvestorField
{
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者名称
	TZQThostFtdcNameType	InvestorName;
	///证件类型
	TZQThostFtdcIdCardTypeType	IdentifiedCardType;
	///证件号码
	TZQThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///是否活跃
	TZQThostFtdcBoolType	IsActive;
	///联系电话
	TZQThostFtdcTelephoneType	Telephone;
	///通讯地址
	TZQThostFtdcAddressType	Address;
	///开户日期
	TZQThostFtdcDateType	OpenDate;
	///手机
	TZQThostFtdcMobileType	Mobile;
	///佣金模板代码
	TZQThostFtdcTemplateNoType	BrokerageTemplateNo;
	///个股期权佣金模板代码
	TZQThostFtdcTemplateNoType	SecurityOptionTemplateNo;
	///保证金模板代码
	TZQThostFtdcTemplateNoType	MarginTemplateNo;
	///融资融券佣金模板代码
	TZQThostFtdcTemplateNoType	CreditTemplateNo;
};

///查询交易账户
struct CZQThostFtdcQryTradingCodeField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///交易编码类型
	TZQThostFtdcClientIDTypeType	ClientIDType;
};

///交易账户
struct CZQThostFtdcTradingCodeField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///是否活跃
	TZQThostFtdcBoolType	IsActive;
	///交易编码类型
	TZQThostFtdcClientIDTypeType	ClientIDType;
	///市场代码
	TZQThostFtdcMarketIDType	MarketID;
	///交易所营业部编码
	TZQThostFtdcBranchIDType	BranchID;
};

///查询投资单元
struct CZQThostFtdcQryInvestUnitField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
};

///投资单元
struct CZQThostFtdcInvestUnitField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///投资单元名称
	TZQThostFtdcNameType	InvestUnitName;
};

///查询投资单元与交易资金账户关系
struct CZQThostFtdcQryInvestUnitAndTradingAcctField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///产品代码
	TZQThostFtdcProductIDType	ProductID;
	///资金账户代码
	TZQThostFtdcAccountIDType	AccountID;
};

///投资单元与交易资金账户关系
struct CZQThostFtdcInvestUnitAndTradingAcctField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///产品代码
	TZQThostFtdcProductIDType	ProductID;
	///资金账户代码
	TZQThostFtdcAccountIDType	AccountID;
};

///查询投资者用户与投资单元关系
struct CZQThostFtdcQryInvestUnitAndUserField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者用户代码
	TZQThostFtdcUserIDType	UserID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///投资者用户与投资单元关系
struct CZQThostFtdcInvestUnitAndUserField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///查询投资者佣金
struct CZQThostFtdcQryBrokerageField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///佣金模板代码
	TZQThostFtdcTemplateNoType	BrokerageTemplateNo;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///投资者佣金
struct CZQThostFtdcBrokerageField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///佣金模板代码
	TZQThostFtdcTemplateNoType	BrokerageTemplateNo;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///产品代码
	TZQThostFtdcProductIDType	ProductID;
	///证券类别代码
	TZQThostFtdcSecurityClassIDType	SecurityClassID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///业务类别
	TZQThostFtdcBizClassType	BizClass;
	///佣金类型
	TZQThostFtdcBrokerageTypeType	BrokerageType;
	///佣金按金额收取比例
	TZQThostFtdcRatioType	RatioByAmt;
	///佣金按面值收取比例
	TZQThostFtdcRatioType	RatioByPar;
	///佣金按笔收取金额
	TZQThostFtdcMoneyType	FeePerOrder;
	///佣金最低收取金额
	TZQThostFtdcMoneyType	FeeMin;
	///佣金最高收取金额
	TZQThostFtdcMoneyType	FeeMax;
	///佣金按数量收取金额
	TZQThostFtdcMoneyType	FeeByVolume;
};

///查询新股申购额度
struct CZQThostFtdcQrySubscribingSharesQuotaField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
};

///新股申购额度
struct CZQThostFtdcSubscribingSharesQuotaField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///可申购额度
	TZQThostFtdcVolumeType	MaxVolume;
};

///查询标准券使用率
struct CZQThostFtdcQryRepoRatioField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///标准券代码
	TZQThostFtdcInstrumentIDType	StandardBondID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///标准券使用率
struct CZQThostFtdcRepoRatioField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///标准券代码
	TZQThostFtdcInstrumentIDType	StandardBondID;
	///标准券使用率
	TZQThostFtdcRatioType	StandardUseRatio;
};

///查询回购放大倍数
struct CZQThostFtdcQryRepurchaseMaxTimesField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///回购放大倍数
struct CZQThostFtdcRepurchaseMaxTimesField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///回购放大倍数
	TZQThostFtdcRepurchaseMaxTimesType	RepurchaseMaxTimes;
};

///查询资金转移
struct CZQThostFtdcQryTransferFundField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///资金账户代码
	TZQThostFtdcAccountIDType	AccountID;
	///CTP转账流水号
	TZQThostFtdcSerialType	CTPFundSerial;
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///申请流水号
	TZQThostFtdcExternalSerialType	ApplySerial;
};

///查询仓位转移
struct CZQThostFtdcQryTransferPositionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///CTP仓位转移流水号
	TZQThostFtdcSerialType	CTPPositionSerial;
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///申请流水号
	TZQThostFtdcExternalSerialType	ApplySerial;
};

///查询经纪公司用户与投资者关系
struct CZQThostFtdcQryBrokerUserAndInvestorField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///经纪公司用户代码
	TZQThostFtdcUserIDType	UserID;
};

///经纪公司用户与投资者关系
struct CZQThostFtdcBrokerUserAndInvestorField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
};

///查询经纪公司
struct CZQThostFtdcQryBrokerField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
};

///经纪公司
struct CZQThostFtdcBrokerField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///经纪公司简称
	TZQThostFtdcBrokerAbbrType	BrokerAbbr;
	///经纪公司名称
	TZQThostFtdcNameType	BrokerName;
	///是否活跃
	TZQThostFtdcBoolType	IsActive;
};

///查询部门
struct CZQThostFtdcQryDepartmentField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///经纪公司部门代码
	TZQThostFtdcDepartmentIDType	DepartmentID;
};

///部门
struct CZQThostFtdcDepartmentField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///经纪公司部门代码
	TZQThostFtdcDepartmentIDType	DepartmentID;
	///经纪公司部门名称
	TZQThostFtdcNameType	DepartmentName;
};

///查询基础交易费用
struct CZQThostFtdcQryBasicTradingFeeField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///基础交易费用
struct CZQThostFtdcBasicTradingFeeField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///产品代码
	TZQThostFtdcProductIDType	ProductID;
	///证券类别代码
	TZQThostFtdcSecurityClassIDType	SecurityClassID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///业务类别
	TZQThostFtdcBizClassType	BizClass;
	///印花税按金额收取比例
	TZQThostFtdcRatioType	StampTaxRatioByAmt;
	///印花税按面值收取比例
	TZQThostFtdcRatioType	StampTaxRatioByPar;
	///印花税按笔收取金额
	TZQThostFtdcMoneyType	StampTaxFeePerOrder;
	///印花税最低收取金额
	TZQThostFtdcMoneyType	StampTaxFeeMin;
	///印花税最高收取金额
	TZQThostFtdcMoneyType	StampTaxFeeMax;
	///过户费按金额收取比例
	TZQThostFtdcRatioType	TransferRatioByAmt;
	///过户费按面值收取比例
	TZQThostFtdcRatioType	TransferRatioByPar;
	///过户费按笔收取金额
	TZQThostFtdcMoneyType	TransferFeePerOrder;
	///过户费最低收取金额
	TZQThostFtdcMoneyType	TransferFeeMin;
	///过户费最高收取金额
	TZQThostFtdcMoneyType	TransferFeeMax;
	///经手费按金额收取比例
	TZQThostFtdcRatioType	HandlingRatioByAmt;
	///经手费按面值收取比例
	TZQThostFtdcRatioType	HandlingRatioByPar;
	///经手费按笔收取金额
	TZQThostFtdcMoneyType	HandlingFeePerOrder;
	///经手费最低收取金额
	TZQThostFtdcMoneyType	HandlingFeeMin;
	///经手费最高收取金额
	TZQThostFtdcMoneyType	HandlingFeeMax;
	///证管费按金额收取比例
	TZQThostFtdcRatioType	RegulateRatioByAmt;
	///证管费按面值收取比例
	TZQThostFtdcRatioType	RegulateRatioByPar;
	///证管费按笔收取金额
	TZQThostFtdcMoneyType	RegulateFeePerOrder;
	///证管费最低收取金额
	TZQThostFtdcMoneyType	RegulateFeeMin;
	///证管费最高收取金额
	TZQThostFtdcMoneyType	RegulateFeeMax;
	///过户费按数量收取金额
	TZQThostFtdcMoneyType	TransferFeeByVolume;
	///经手费按数量收取金额
	TZQThostFtdcMoneyType	HandlingFeeByVolume;
	///结算费按金额收取比例
	TZQThostFtdcRatioType	SettlementRatioByAmt;
	///结算费按面值收取比例
	TZQThostFtdcRatioType	SettlementRatioByPar;
	///结算费按笔收取金额
	TZQThostFtdcMoneyType	SettlementFeePerOrder;
	///结算费按数量收取金额
	TZQThostFtdcMoneyType	SettlementFeeByVolume;
	///结算费最低收取金额
	TZQThostFtdcMoneyType	SettlementFeeMin;
	///结算费最高收取金额
	TZQThostFtdcMoneyType	SettlementFeeMax;
	///系统标识
	TZQThostFtdcSystemFlagType	SystemFlag;
};

///查询用户会话
struct CZQThostFtdcQryUserSessionField
{
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
};

///用户会话
struct CZQThostFtdcUserSessionField
{
	///登录前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///登录会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///登录日期
	TZQThostFtdcDateType	LoginDate;
	///登录时间
	TZQThostFtdcTimeType	LoginTime;
	///登录IP地址
	TZQThostFtdcIPAddressType	IPAddress;
	///用户端产品信息
	TZQThostFtdcProductInfoType	UserProductInfo;
	///接口端产品信息
	TZQThostFtdcProductInfoType	InterfaceProductInfo;
	///协议信息
	TZQThostFtdcProtocolInfoType	ProtocolInfo;
	///登录Mac地址
	TZQThostFtdcMacAddressType	MacAddress;
};

///查询用户
struct CZQThostFtdcQryUserField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///用户类型
	TZQThostFtdcUserTypeType	UserType;
};

///用户
struct CZQThostFtdcUserField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///用户名称
	TZQThostFtdcUserNameType	UserName;
	///用户类型
	TZQThostFtdcUserTypeType	UserType;
	///是否活跃
	TZQThostFtdcBoolType	IsActive;
	///登录限制
	TZQThostFtdcLoginLimitType	LoginLimit;
	///每秒最大报单数
	TZQThostFtdcPerSecondOrdersType	PerSecondOrders;
};

///查询交易所交易员报盘机信息
struct CZQThostFtdcQryTraderOfferField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///交易报盘编号
	TZQThostFtdcTraderOfferIDType	TraderOfferID;
};

///交易所交易员报盘机信息
struct CZQThostFtdcTraderOfferField
{
	///交易报盘编号
	TZQThostFtdcTraderOfferIDType	TraderOfferID;
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///连接类型
	TZQThostFtdcConnectTypeType	ConnectType;
	///连接字符串
	TZQThostFtdcConnectStringType	ConnectString;
	///用户名
	TZQThostFtdcUserNameType	UserName;
	///密码
	TZQThostFtdcPasswordType	Password;
	///通用字段1
	TZQThostFtdcCommStringType	CommString1;
	///通用字段2
	TZQThostFtdcCommStringType	CommString2;
	///通用字段3
	TZQThostFtdcCommStringType	CommString3;
	///报文序号1
	TZQThostFtdcSequenceNoType	SequenceNo1;
	///报文序号2
	TZQThostFtdcSequenceNoType	SequenceNo2;
	///应用名称
	TZQThostFtdcAppNameType	AppName;
	///运行ID
	TZQThostFtdcRunIDType	RunID;
	///平台类型
	TZQThostFtdcPlatformTypeType	PlatformType;
	///前置ID
	TZQThostFtdcFrontIDType	FrontID;
	///会话ID
	TZQThostFtdcSessionIDType	SessionID;
	///连接状态
	TZQThostFtdcConnectStatusType	ConnectStatus;
	///发出连接请求的日期
	TZQThostFtdcDateType	ConnectRequestDate;
	///发出连接请求的时间
	TZQThostFtdcTimeType	ConnectRequestTime;
	///完成连接日期
	TZQThostFtdcDateType	ConnectDate;
	///完成连接时间
	TZQThostFtdcTimeType	ConnectTime;
};

///更新交易所交易员报盘机信息
struct CZQThostFtdcUpdTraderOfferField
{
	///交易报盘编号
	TZQThostFtdcTraderOfferIDType	TraderOfferID;
	///连接类型
	TZQThostFtdcConnectTypeType	ConnectType;
	///连接字符串
	TZQThostFtdcConnectStringType	ConnectString;
	///用户名
	TZQThostFtdcUserNameType	UserName;
	///密码
	TZQThostFtdcPasswordType	Password;
	///通用字段1
	TZQThostFtdcCommStringType	CommString1;
	///通用字段2
	TZQThostFtdcCommStringType	CommString2;
	///通用字段3
	TZQThostFtdcCommStringType	CommString3;
	///报文序号1
	TZQThostFtdcSequenceNoType	SequenceNo1;
	///报文序号2
	TZQThostFtdcSequenceNoType	SequenceNo2;
};

///查询交易员信息
struct CZQThostFtdcQryTraderField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///交易所交易员代码
	TZQThostFtdcTraderIDType	TraderID;
	///交易报盘编号
	TZQThostFtdcTraderOfferIDType	TraderOfferID;
};

///交易员信息
struct CZQThostFtdcTraderField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///交易所交易员代码
	TZQThostFtdcTraderIDType	TraderID;
	///平台类型
	TZQThostFtdcPlatformTypeType	PlatformType;
	///交易报盘编号
	TZQThostFtdcTraderOfferIDType	TraderOfferID;
};

///查询行情服务器信息
struct CZQThostFtdcQryMdServerField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///行情服务器编号
	TZQThostFtdcMdServerIDType	MdServerID;
};

///行情服务器信息
struct CZQThostFtdcMdServerField
{
	///行情服务器编号
	TZQThostFtdcMdServerIDType	MdServerID;
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///连接类型
	TZQThostFtdcConnectTypeType	ConnectType;
	///连接字符串
	TZQThostFtdcConnectStringType	ConnectString;
	///用户名
	TZQThostFtdcUserNameType	UserName;
	///密码
	TZQThostFtdcPasswordType	Password;
	///通用字段1
	TZQThostFtdcCommStringType	CommString1;
	///通用字段2
	TZQThostFtdcCommStringType	CommString2;
	///应用名称
	TZQThostFtdcAppNameType	AppName;
	///运行ID
	TZQThostFtdcRunIDType	RunID;
	///前置ID
	TZQThostFtdcFrontIDType	FrontID;
	///会话ID
	TZQThostFtdcSessionIDType	SessionID;
	///连接状态
	TZQThostFtdcConnectStatusType	ConnectStatus;
	///发出连接请求的日期
	TZQThostFtdcDateType	ConnectRequestDate;
	///发出连接请求的时间
	TZQThostFtdcTimeType	ConnectRequestTime;
	///完成连接日期
	TZQThostFtdcDateType	ConnectDate;
	///完成连接时间
	TZQThostFtdcTimeType	ConnectTime;
};

///更新行情服务器信息
struct CZQThostFtdcUpdMdServerField
{
	///行情服务器编号
	TZQThostFtdcMdServerIDType	MdServerID;
	///连接类型
	TZQThostFtdcConnectTypeType	ConnectType;
	///连接字符串
	TZQThostFtdcConnectStringType	ConnectString;
	///用户名
	TZQThostFtdcUserNameType	UserName;
	///密码
	TZQThostFtdcPasswordType	Password;
	///通用字段1
	TZQThostFtdcCommStringType	CommString1;
	///通用字段2
	TZQThostFtdcCommStringType	CommString2;
};

///查询Dbmt信息
struct CZQThostFtdcQryDbmtField
{
	///应用名称
	TZQThostFtdcAppNameType	AppName;
};

///Dbmt信息
struct CZQThostFtdcDbmtField
{
	///应用名称
	TZQThostFtdcAppNameType	AppName;
	///连接类型
	TZQThostFtdcConnectTypeType	ConnectType;
	///连接字符串
	TZQThostFtdcConnectStringType	ConnectString;
	///用户名
	TZQThostFtdcUserNameType	UserName;
	///密码
	TZQThostFtdcPasswordType	Password;
	///当前最大Dbmt编号
	TZQThostFtdcSequenceNoType	CurrDbmtNo;
	///运行ID
	TZQThostFtdcRunIDType	RunID;
	///前置ID
	TZQThostFtdcFrontIDType	FrontID;
	///会话ID
	TZQThostFtdcSessionIDType	SessionID;
	///Dbmt连接状态
	TZQThostFtdcConnectStatusType	DbmtConnectStatus;
	///发出连接请求的日期
	TZQThostFtdcDateType	ConnectRequestDate;
	///发出连接请求的时间
	TZQThostFtdcTimeType	ConnectRequestTime;
	///完成连接日期
	TZQThostFtdcDateType	ConnectDate;
	///完成连接时间
	TZQThostFtdcTimeType	ConnectTime;
};

///更新Dbmt信息
struct CZQThostFtdcUpdDbmtField
{
	///应用名称
	TZQThostFtdcAppNameType	AppName;
	///连接类型
	TZQThostFtdcConnectTypeType	ConnectType;
	///连接字符串
	TZQThostFtdcConnectStringType	ConnectString;
	///用户名
	TZQThostFtdcUserNameType	UserName;
	///密码
	TZQThostFtdcPasswordType	Password;
	///当前最大Dbmt编号
	TZQThostFtdcSequenceNoType	CurrDbmtNo;
};

///查询Dbwriter信息
struct CZQThostFtdcQryDbwriterField
{
	///应用名称
	TZQThostFtdcAppNameType	AppName;
};

///Dbwriter信息
struct CZQThostFtdcDbwriterField
{
	///应用名称
	TZQThostFtdcAppNameType	AppName;
	///连接类型
	TZQThostFtdcConnectTypeType	ConnectType;
	///连接字符串
	TZQThostFtdcConnectStringType	ConnectString;
	///用户名
	TZQThostFtdcUserNameType	UserName;
	///密码
	TZQThostFtdcPasswordType	Password;
	///运行ID
	TZQThostFtdcRunIDType	RunID;
	///前置ID
	TZQThostFtdcFrontIDType	FrontID;
	///会话ID
	TZQThostFtdcSessionIDType	SessionID;
	///Dbwriter连接状态
	TZQThostFtdcConnectStatusType	DbwriterConnectStatus;
	///发出连接请求的日期
	TZQThostFtdcDateType	ConnectRequestDate;
	///发出连接请求的时间
	TZQThostFtdcTimeType	ConnectRequestTime;
	///完成连接日期
	TZQThostFtdcDateType	ConnectDate;
	///完成连接时间
	TZQThostFtdcTimeType	ConnectTime;
};

///更新Dbwriter信息
struct CZQThostFtdcUpdDbwriterField
{
	///应用名称
	TZQThostFtdcAppNameType	AppName;
	///连接类型
	TZQThostFtdcConnectTypeType	ConnectType;
	///连接字符串
	TZQThostFtdcConnectStringType	ConnectString;
	///用户名
	TZQThostFtdcUserNameType	UserName;
	///密码
	TZQThostFtdcPasswordType	Password;
};

///更新证券报盘信息
struct CZQThostFtdcUpdSecurityOfferField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///连接系统
	TZQThostFtdcConnectSystemType	ConnectSystem;
	///连接字符串
	TZQThostFtdcConnectStringType	ConnectString;
	///用户名
	TZQThostFtdcUserNameType	UserName;
	///密码
	TZQThostFtdcPasswordType	Password;
	///认证码
	TZQThostFtdcAuthCodeType	AuthCode;
};

///更新投资者融资融券限制
struct CZQThostFtdcUpdCreditTradingLimitField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///序列号
	TZQThostFtdcSequenceNoType	SequenceNo;
	///是否可融资买入
	TZQThostFtdcBoolType	IsMarginBuy;
	///是否可融券卖出
	TZQThostFtdcBoolType	IsShortSell;
	///是否可担保品买入
	TZQThostFtdcBoolType	IsBuy;
};

///查询转托管报单
struct CZQThostFtdcQryCustodyTransferField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///报单编号
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///开始时间
	TZQThostFtdcTimeType	InsertTimeStart;
	///结束时间
	TZQThostFtdcTimeType	InsertTimeEnd;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///查询转托管操作
struct CZQThostFtdcQryCustodyTransferActionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
};

///行权输入
struct CZQThostFtdcInputExecOrderField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///行权引用
	TZQThostFtdcOrderRefType	ExecOrderRef;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///行权数量
	TZQThostFtdcVolumeType	Volume;
	///请求编号
	TZQThostFtdcRequestIDType	RequestID;
	///业务单元
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///开平标志
	TZQThostFtdcOffsetFlagType	OffsetFlag;
	///投机套保标志
	TZQThostFtdcHedgeFlagType	HedgeFlag;
	///执行类型
	TZQThostFtdcExecOrderActionTypeType	ActionType;
	///保留寸头申请的持仓方向
	TZQThostFtdcPosiDirectionType	PosiDirection;
	///期权行权后是否保留期货头寸的标记
	TZQThostFtdcReservePositionFlagType	ReservePositionFlag;
	///期权行权后生成的头寸是否自动平仓
	TZQThostFtdcCloseFlagType	CloseFlag;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///资金账户
	TZQThostFtdcAccountIDType	AccountID;
	///IP地址
	TZQThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TZQThostFtdcMacAddressType	MacAddress;
};

///行权
struct CZQThostFtdcExecOrderField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///行权引用
	TZQThostFtdcOrderRefType	ExecOrderRef;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///行权数量
	TZQThostFtdcVolumeType	Volume;
	///请求编号
	TZQThostFtdcRequestIDType	RequestID;
	///业务单元
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///开平标志
	TZQThostFtdcOffsetFlagType	OffsetFlag;
	///投机套保标志
	TZQThostFtdcHedgeFlagType	HedgeFlag;
	///执行类型
	TZQThostFtdcExecOrderActionTypeType	ActionType;
	///保留寸头申请的持仓方向
	TZQThostFtdcPosiDirectionType	PosiDirection;
	///期权行权后是否保留期货头寸的标记
	TZQThostFtdcReservePositionFlagType	ReservePositionFlag;
	///期权行权后生成的头寸是否自动平仓
	TZQThostFtdcCloseFlagType	CloseFlag;
	///本地行权编号
	TZQThostFtdcOrderLocalIDType	ExecOrderLocalID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///会员代码
	TZQThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///交易所交易员代码
	TZQThostFtdcTraderIDType	TraderID;
	///安装编号
	TZQThostFtdcInstallIDType	InstallID;
	///报单提交状态
	TZQThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///报单提示序号
	TZQThostFtdcSequenceNoType	NotifySequence;
	///交易日
	TZQThostFtdcDateType	TradingDay;
	///结算编号
	TZQThostFtdcSettlementIDType	SettlementID;
	///系统行权编号
	TZQThostFtdcOrderSysIDType	ExecOrderSysID;
	///申报日期
	TZQThostFtdcDateType	InsertDate;
	///申报时间
	TZQThostFtdcTimeType	InsertTime;
	///撤销时间
	TZQThostFtdcTimeType	CancelTime;
	///执行结果
	TZQThostFtdcExecResultType	ExecResult;
	///结算会员编号
	TZQThostFtdcParticipantIDType	ClearingPartID;
	///序号
	TZQThostFtdcSequenceNoType	SequenceNo;
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///用户端产品信息
	TZQThostFtdcProductInfoType	UserProductInfo;
	///状态信息
	TZQThostFtdcErrorMsgType	StatusMsg;
	///操作用户代码
	TZQThostFtdcUserIDType	ActiveUserID;
	///经纪公司行权编号
	TZQThostFtdcSequenceNoType	BrokerExecOrderSeq;
	///交易所营业部编码
	TZQThostFtdcBranchIDType	BranchID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///资金账户
	TZQThostFtdcAccountIDType	AccountID;
	///IP地址
	TZQThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TZQThostFtdcMacAddressType	MacAddress;
};

///行权操作输入
struct CZQThostFtdcInputExecOrderActionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///行权操作引用
	TZQThostFtdcOrderActionRefType	ExecOrderActionRef;
	///行权引用
	TZQThostFtdcOrderRefType	ExecOrderRef;
	///请求编号
	TZQThostFtdcRequestIDType	RequestID;
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///系统行权编号
	TZQThostFtdcOrderSysIDType	ExecOrderSysID;
	///操作标志
	TZQThostFtdcActionFlagType	ActionFlag;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///IP地址
	TZQThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TZQThostFtdcMacAddressType	MacAddress;
};

///锁定输入
struct CZQThostFtdcInputLockField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///锁定引用
	TZQThostFtdcOrderRefType	LockRef;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///锁定数量
	TZQThostFtdcVolumeType	Volume;
	///请求编号
	TZQThostFtdcRequestIDType	RequestID;
	///业务单元
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///锁定类型
	TZQThostFtdcLockTypeType	LockType;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///IP地址
	TZQThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TZQThostFtdcMacAddressType	MacAddress;
};

///锁定
struct CZQThostFtdcLockField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///锁定引用
	TZQThostFtdcOrderRefType	LockRef;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///锁定数量
	TZQThostFtdcVolumeType	Volume;
	///请求编号
	TZQThostFtdcRequestIDType	RequestID;
	///业务单元
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///锁定类型
	TZQThostFtdcLockTypeType	LockType;
	///本地锁定编号
	TZQThostFtdcOrderLocalIDType	LockLocalID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///会员代码
	TZQThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///交易所交易员代码
	TZQThostFtdcTraderIDType	TraderID;
	///安装编号
	TZQThostFtdcInstallIDType	InstallID;
	///报单提交状态
	TZQThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///报单提示序号
	TZQThostFtdcSequenceNoType	NotifySequence;
	///交易日
	TZQThostFtdcDateType	TradingDay;
	///结算编号
	TZQThostFtdcSettlementIDType	SettlementID;
	///系统锁定编号
	TZQThostFtdcOrderSysIDType	LockSysID;
	///申报日期
	TZQThostFtdcDateType	InsertDate;
	///申报时间
	TZQThostFtdcTimeType	InsertTime;
	///撤销时间
	TZQThostFtdcTimeType	CancelTime;
	///报盘状态
	TZQThostFtdcOrderStatusType	OrderStatus;
	///结算会员编号
	TZQThostFtdcParticipantIDType	ClearingPartID;
	///序号
	TZQThostFtdcSequenceNoType	SequenceNo;
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///用户端产品信息
	TZQThostFtdcProductInfoType	UserProductInfo;
	///状态信息
	TZQThostFtdcErrorMsgType	StatusMsg;
	///操作用户代码
	TZQThostFtdcUserIDType	ActiveUserID;
	///经纪公司锁定编号
	TZQThostFtdcSequenceNoType	BrokerLockSeq;
	///交易所营业部编码
	TZQThostFtdcBranchIDType	BranchID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///IP地址
	TZQThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TZQThostFtdcMacAddressType	MacAddress;
};

///锁定操作输入
struct CZQThostFtdcInputLockActionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///锁定操作引用
	TZQThostFtdcOrderActionRefType	LockActionRef;
	///锁定引用
	TZQThostFtdcOrderRefType	LockRef;
	///请求编号
	TZQThostFtdcRequestIDType	RequestID;
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///系统行权编号
	TZQThostFtdcOrderSysIDType	LockSysID;
	///操作标志
	TZQThostFtdcActionFlagType	ActionFlag;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///IP地址
	TZQThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TZQThostFtdcMacAddressType	MacAddress;
};

///行权操作
struct CZQThostFtdcExecOrderActionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///行权操作引用
	TZQThostFtdcOrderActionRefType	ExecOrderActionRef;
	///行权引用
	TZQThostFtdcOrderRefType	ExecOrderRef;
	///请求编号
	TZQThostFtdcRequestIDType	RequestID;
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///系统行权编号
	TZQThostFtdcOrderSysIDType	ExecOrderSysID;
	///操作标志
	TZQThostFtdcActionFlagType	ActionFlag;
	///操作日期
	TZQThostFtdcDateType	ActionDate;
	///操作时间
	TZQThostFtdcTimeType	ActionTime;
	///交易所交易员代码
	TZQThostFtdcTraderIDType	TraderID;
	///安装编号
	TZQThostFtdcInstallIDType	InstallID;
	///本地行权编号
	TZQThostFtdcOrderLocalIDType	ExecOrderLocalID;
	///本地操作编号
	TZQThostFtdcOrderLocalIDType	ActionLocalID;
	///会员代码
	TZQThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///业务单元
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///报单操作状态
	TZQThostFtdcOrderActionStatusType	OrderActionStatus;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///执行类型
	TZQThostFtdcExecOrderActionTypeType	ActionType;
	///状态信息
	TZQThostFtdcErrorMsgType	StatusMsg;
	///交易所营业部编码
	TZQThostFtdcBranchIDType	BranchID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///IP地址
	TZQThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TZQThostFtdcMacAddressType	MacAddress;
};

///锁定操作
struct CZQThostFtdcLockActionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///锁定操作引用
	TZQThostFtdcOrderActionRefType	LockActionRef;
	///锁定引用
	TZQThostFtdcOrderRefType	LockRef;
	///请求编号
	TZQThostFtdcRequestIDType	RequestID;
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///系统锁定编号
	TZQThostFtdcOrderSysIDType	LockSysID;
	///操作标志
	TZQThostFtdcActionFlagType	ActionFlag;
	///操作日期
	TZQThostFtdcDateType	ActionDate;
	///操作时间
	TZQThostFtdcTimeType	ActionTime;
	///交易所交易员代码
	TZQThostFtdcTraderIDType	TraderID;
	///安装编号
	TZQThostFtdcInstallIDType	InstallID;
	///本地锁定编号
	TZQThostFtdcOrderLocalIDType	LockLocalID;
	///本地操作编号
	TZQThostFtdcOrderLocalIDType	ActionLocalID;
	///会员代码
	TZQThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///业务单元
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///报单操作状态
	TZQThostFtdcOrderActionStatusType	OrderActionStatus;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///状态信息
	TZQThostFtdcErrorMsgType	StatusMsg;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///IP地址
	TZQThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TZQThostFtdcMacAddressType	MacAddress;
};

///现券转移输入
struct CZQThostFtdcInputSecurityTransferField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///现券系统投资者代码
	TZQThostFtdcInvestorIDType	SecurityInvestorID;
	///现券系统投资单元代码
	TZQThostFtdcInvestUnitIDType	SecurityInvestUnitID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///申请流水号
	TZQThostFtdcExternalSerialType	ApplySerial;
	///现券转移方向
	TZQThostFtdcSecurityTransferDirectionType	SecurityTransferDirection;
	///数量
	TZQThostFtdcVolumeType	Volume;
	///转移持仓类型
	TZQThostFtdcTransferPositionTypeType	TransferPositionType;
};

///现券转移
struct CZQThostFtdcSecurityTransferField
{
	///现券转移流水号
	TZQThostFtdcSerialType	SecurityTransferSerial;
	///申请流水号
	TZQThostFtdcExternalSerialType	ApplySerial;
	///证券系统仓位转移流水号
	TZQThostFtdcSerialType	SecurityPositionSerial;
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///现券系统投资者代码
	TZQThostFtdcInvestorIDType	SecurityInvestorID;
	///现券系统投资单元代码
	TZQThostFtdcInvestUnitIDType	SecurityInvestUnitID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///转移方向
	TZQThostFtdcSecurityTransferDirectionType	SecurityTransferDirection;
	///转移持仓类型
	TZQThostFtdcTransferPositionTypeType	TransferPositionType;
	///昨日仓位转移数量
	TZQThostFtdcVolumeType	HistoryVolume;
	///今日买卖仓位转移数量
	TZQThostFtdcVolumeType	TodayBSVolume;
	///今日申赎仓位转移数量
	TZQThostFtdcVolumeType	TodayPRVolume;
	///转移状态
	TZQThostFtdcSecurityTransferStatusType	SecurityTransferStatus;
	///状态信息
	TZQThostFtdcErrorMsgType	StatusMsg;
	///操作人员
	TZQThostFtdcUserIDType	OperatorID;
	///操作日期
	TZQThostFtdcDateType	OperateDate;
	///操作时间
	TZQThostFtdcTimeType	OperateTime;
};

///组合策略输入
struct CZQThostFtdcInputCombOrderField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///组合合约代码
	TZQThostFtdcInstrumentIDType	CombInstrumentID;
	///成分1合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID1;
	///成分2合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID2;
	///成分3合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID3;
	///成分4合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID4;
	///组合策略引用
	TZQThostFtdcOrderRefType	CombOrderRef;
	///数量
	TZQThostFtdcVolumeType	VolumeTotalOriginal;
	///组合指令方向类型
	TZQThostFtdcCombDirectionType	CombDirection;
	///组合编号
	TZQThostFtdcTradeIDType	CombTradeID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///资金帐号代码
	TZQThostFtdcAccountIDType	AccountID;
	///请求编号
	TZQThostFtdcRequestIDType	RequestID;
	///IP地址
	TZQThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TZQThostFtdcMacAddressType	MacAddress;
};

///组合策略
struct CZQThostFtdcCombOrderField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///组合合约代码
	TZQThostFtdcInstrumentIDType	CombInstrumentID;
	///成分1合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID1;
	///成分1持仓方向
	TZQThostFtdcPosiDirectionType	PosiDirection1;
	///成分2合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID2;
	///成分2持仓方向
	TZQThostFtdcPosiDirectionType	PosiDirection2;
	///成分3合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID3;
	///成分3持仓方向
	TZQThostFtdcPosiDirectionType	PosiDirection3;
	///成分4合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID4;
	///成分4持仓方向
	TZQThostFtdcPosiDirectionType	PosiDirection4;
	///组合策略引用
	TZQThostFtdcOrderRefType	CombOrderRef;
	///数量
	TZQThostFtdcVolumeType	VolumeTotalOriginal;
	///成交数量
	TZQThostFtdcVolumeType	VolumeTraded;
	///剩余数量
	TZQThostFtdcVolumeType	VolumeTotal;
	///组合指令方向类型
	TZQThostFtdcCombDirectionType	CombDirection;
	///组合编号
	TZQThostFtdcTradeIDType	CombTradeID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///资金帐号代码
	TZQThostFtdcAccountIDType	AccountID;
	///请求编号
	TZQThostFtdcRequestIDType	RequestID;
	///交易日
	TZQThostFtdcDateType	TradingDay;
	///组合策略本地报单编号
	TZQThostFtdcOrderLocalIDType	CombOrderLocalID;
	///交易所交易员代码
	TZQThostFtdcTraderIDType	TraderID;
	///组合策略报单编号
	TZQThostFtdcOrderSysIDType	CombOrderSysID;
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///保证金差额
	TZQThostFtdcMoneyType	MarginComponent;
	///保证金
	TZQThostFtdcMoneyType	Margin;
	///报单状态
	TZQThostFtdcOrderStatusType	OrderStatus;
	///报单提交状态
	TZQThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///营业部编码
	TZQThostFtdcBranchIDType	BranchID;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///操作用户代码
	TZQThostFtdcUserIDType	ActiveUserID;
	///申报日期
	TZQThostFtdcDateType	InsertDate;
	///申报时间
	TZQThostFtdcTimeType	InsertTime;
	///撤销时间
	TZQThostFtdcTimeType	CancelTime;
	///用户端产品信息
	TZQThostFtdcProductInfoType	UserProductInfo;
	///状态信息
	TZQThostFtdcErrorMsgType	StatusMsg;
	///IP地址
	TZQThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TZQThostFtdcMacAddressType	MacAddress;
};

///组合策略撤单输入
struct CZQThostFtdcInputCombOrderActionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///组合策略操作引用
	TZQThostFtdcOrderActionRefType	CombOrderActionRef;
	///组合策略引用
	TZQThostFtdcOrderRefType	CombOrderRef;
	///请求编号
	TZQThostFtdcRequestIDType	RequestID;
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///组合策略报单编号
	TZQThostFtdcOrderSysIDType	CombOrderSysID;
	///操作标志
	TZQThostFtdcActionFlagType	ActionFlag;
	///IP地址
	TZQThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TZQThostFtdcMacAddressType	MacAddress;
};

///组合策略撤单
struct CZQThostFtdcCombOrderActionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///组合策略操作引用
	TZQThostFtdcOrderActionRefType	CombOrderActionRef;
	///组合策略引用
	TZQThostFtdcOrderRefType	CombOrderRef;
	///请求编号
	TZQThostFtdcRequestIDType	RequestID;
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///组合策略报单编号
	TZQThostFtdcOrderSysIDType	CombOrderSysID;
	///操作标志
	TZQThostFtdcActionFlagType	ActionFlag;
	///操作日期
	TZQThostFtdcDateType	ActionDate;
	///操作时间
	TZQThostFtdcTimeType	ActionTime;
	///交易所交易员代码
	TZQThostFtdcTraderIDType	TraderID;
	///组合策略本地报单编号
	TZQThostFtdcOrderLocalIDType	CombOrderLocalID;
	///操作本地编号
	TZQThostFtdcOrderLocalIDType	ActionLocalID;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///报单操作状态
	TZQThostFtdcCancelOrderStatusType	OrderActionStatus;
	///状态信息
	TZQThostFtdcErrorMsgType	StatusMsg;
	///IP地址
	TZQThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TZQThostFtdcMacAddressType	MacAddress;
};

///个股期权合约查询
struct CZQThostFtdcQryInstrumentField
{
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///合约在交易所的代码
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///产品代码
	TZQThostFtdcProductIDType	ProductID;
};

///个股期权合约查询响应
struct CZQThostFtdcInstrumentField
{
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///合约名称
	TZQThostFtdcInstrumentNameType	InstrumentName;
	///合约交易代码
	TZQThostFtdcInstrumentIDType	ExchangeInstID;
	///产品代码
	TZQThostFtdcProductIDType	ProductID;
	///产品类型
	TZQThostFtdcProductClassType	ProductClass;
	///交割年份
	TZQThostFtdcYearType	DeliveryYear;
	///交割月份
	TZQThostFtdcMonthType	DeliveryMonth;
	///市价单买最大下单量
	TZQThostFtdcVolumeType	MaxMarketOrderBuyVolume;
	///市价单买最小下单量
	TZQThostFtdcVolumeType	MinMarketOrderBuyVolume;
	///限价单买最大下单量
	TZQThostFtdcVolumeType	MaxLimitOrderBuyVolume;
	///限价单买最小下单量
	TZQThostFtdcVolumeType	MinLimitOrderBuyVolume;
	///市价单卖最大下单量
	TZQThostFtdcVolumeType	MaxMarketOrderSellVolume;
	///市价单卖最小下单量
	TZQThostFtdcVolumeType	MinMarketOrderSellVolume;
	///限价单卖最大下单量
	TZQThostFtdcVolumeType	MaxLimitOrderSellVolume;
	///限价单卖最小下单量
	TZQThostFtdcVolumeType	MinLimitOrderSellVolume;
	///合约乘数
	TZQThostFtdcVolumeMultipleType	VolumeMultiple;
	///最小变动价位
	TZQThostFtdcPriceTickType	PriceTick;
	///创建日
	TZQThostFtdcDateType	CreateDate;
	///上市日
	TZQThostFtdcDateType	OpenDate;
	///到期日
	TZQThostFtdcDateType	ExpireDate;
	///开始交割日
	TZQThostFtdcDateType	StartDelivDate;
	///结束交割日
	TZQThostFtdcDateType	EndDelivDate;
	///合约生命周期状态
	TZQThostFtdcInstLifePhaseType	InstLifePhase;
	///当前是否交易
	TZQThostFtdcBoolType	IsTrading;
	///持仓类型
	TZQThostFtdcPositionTypeType	PositionType;
	///持仓日期类型
	TZQThostFtdcPositionDateType	PositionDateType;
	///多头保证金率
	TZQThostFtdcRatioType	LongMarginRatio;
	///空头保证金率
	TZQThostFtdcRatioType	ShortMarginRatio;
	///是否使用大额单边保证金算法
	TZQThostFtdcMaxMarginSideAlgorithmType	MaxMarginSideAlgorithm;
	///基础商品代码
	TZQThostFtdcInstrumentIDType	UnderlyingInstrID;
	///执行价
	TZQThostFtdcPriceType	StrikePrice;
	///期权类型
	TZQThostFtdcOptionsTypeType	OptionsType;
	///合约基础商品乘数
	TZQThostFtdcVolumeMultipleType	UnderlyingMultiple;
	///组合类型
	TZQThostFtdcCombinationTypeType	CombinationType;
	///买入交易单位
	TZQThostFtdcTradingUnitType	BuyTradingUnit;
	///卖出交易单位
	TZQThostFtdcTradingUnitType	SellTradingUnit;
};

///锁定查询
struct CZQThostFtdcQryLockField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///锁定编号
	TZQThostFtdcOrderSysIDType	LockSysID;
	///开始时间
	TZQThostFtdcTimeType	InsertTimeStart;
	///结束时间
	TZQThostFtdcTimeType	InsertTimeEnd;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///锁定撤单查询
struct CZQThostFtdcQryLockActionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///执行宣告查询
struct CZQThostFtdcQryExecOrderField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///执行宣告编号
	TZQThostFtdcOrderSysIDType	ExecOrderSysID;
	///开始时间
	TZQThostFtdcTimeType	InsertTimeStart;
	///结束时间
	TZQThostFtdcTimeType	InsertTimeEnd;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///执行宣告操作查询
struct CZQThostFtdcQryExecOrderActionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///锁定持仓查询
struct CZQThostFtdcQryLockPositionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///锁定持仓查询相应
struct CZQThostFtdcLockPositionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///数量
	TZQThostFtdcVolumeType	Volume;
	///冻结数量
	TZQThostFtdcVolumeType	FrozenVolume;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///投资者保证金率查询
struct CZQThostFtdcQryMarginRateField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///保证金模板代码
	TZQThostFtdcTemplateNoType	MarginTemplateNo;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///投资者保证金率查询响应
struct CZQThostFtdcMarginRateField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///保证金模板代码
	TZQThostFtdcTemplateNoType	MarginTemplateNo;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///多头保证金率
	TZQThostFtdcMoneyType	LongMarginRatioByMoney;
	///多头保证金费
	TZQThostFtdcMoneyType	LongMarginRatioByVolume;
	///空头保证金率
	TZQThostFtdcMoneyType	ShortMarginRatioByMoney;
	///空头保证金费
	TZQThostFtdcMoneyType	ShortMarginRatioByVolume;
};

///投资者买入额度查询
struct CZQThostFtdcQryLimitAmountField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///投资者买入额度查询响应
struct CZQThostFtdcLimitAmountField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///多头金额限额
	TZQThostFtdcMoneyType	LongAmount;
	///多头金额冻结
	TZQThostFtdcMoneyType	LongAmountFrozen;
};

///投资者持仓限制查询
struct CZQThostFtdcQryLimitPositionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///投资者持仓限制查询响应
struct CZQThostFtdcLimitPositionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///总数量限制
	TZQThostFtdcVolumeType	TotalVolume;
	///多头数量限制
	TZQThostFtdcVolumeType	LongVolume;
	///当日开仓数量限制
	TZQThostFtdcVolumeType	OpenVolume;
	///总数量冻结
	TZQThostFtdcVolumeType	TotalVolumeFrozen;
	///多头数量冻结
	TZQThostFtdcVolumeType	LongVolumeFrozen;
	///当日开仓数量冻结
	TZQThostFtdcVolumeType	OpenVolumeFrozen;
};

///行权指派查询
struct CZQThostFtdcQryExerciseAssignmentField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
};

///行权指派查询响应
struct CZQThostFtdcExerciseAssignmentField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///交易账户代码
	TZQThostFtdcClientIDType	ClientID;
	///交易日期
	TZQThostFtdcDateType	TradingDay;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///行权指派数量
	TZQThostFtdcVolumeType	AssignmentVolume;
};

///证券报盘查询
struct CZQThostFtdcQrySecurityOfferField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
};

///证券报盘查询响应
struct CZQThostFtdcSecurityOfferField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///连接系统
	TZQThostFtdcConnectSystemType	ConnectSystem;
	///连接字符串
	TZQThostFtdcConnectStringType	ConnectString;
	///用户名
	TZQThostFtdcUserNameType	UserName;
	///应用名称
	TZQThostFtdcAppNameType	AppName;
	///运行ID
	TZQThostFtdcRunIDType	RunID;
	///前置ID
	TZQThostFtdcFrontIDType	FrontID;
	///会话ID
	TZQThostFtdcSessionIDType	SessionID;
	///证券报盘连接状态
	TZQThostFtdcConnectStatusType	SoConnectStatus;
	///发出连接请求的日期
	TZQThostFtdcDateType	ConnectRequestDate;
	///发出连接请求的时间
	TZQThostFtdcTimeType	ConnectRequestTime;
	///完成连接日期
	TZQThostFtdcDateType	ConnectDate;
	///完成连接时间
	TZQThostFtdcTimeType	ConnectTime;
};

///投资者合约持仓查询
struct CZQThostFtdcQryInvestorPositionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///投资者合约持仓查询响应
struct CZQThostFtdcInvestorPositionField
{
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///持仓多空方向
	TZQThostFtdcPosiDirectionType	PosiDirection;
	///投机套保标志
	TZQThostFtdcHedgeFlagType	HedgeFlag;
	///持仓日期类型
	TZQThostFtdcPositionDateType	PositionDate;
	///昨日持仓
	TZQThostFtdcVolumeType	YdPosition;
	///今日持仓
	TZQThostFtdcVolumeType	Position;
	///多头冻结
	TZQThostFtdcVolumeType	LongFrozen;
	///空头冻结
	TZQThostFtdcVolumeType	ShortFrozen;
	///多头冻结金额
	TZQThostFtdcMoneyType	LongFrozenAmount;
	///空头冻结金额
	TZQThostFtdcMoneyType	ShortFrozenAmount;
	///开仓量
	TZQThostFtdcVolumeType	OpenVolume;
	///平仓量
	TZQThostFtdcVolumeType	CloseVolume;
	///开仓金额
	TZQThostFtdcMoneyType	OpenAmount;
	///平仓金额
	TZQThostFtdcMoneyType	CloseAmount;
	///持仓成本
	TZQThostFtdcMoneyType	PositionCost;
	///上次占用的保证金
	TZQThostFtdcMoneyType	PreMargin;
	///占用的保证金
	TZQThostFtdcMoneyType	UseMargin;
	///冻结的保证金
	TZQThostFtdcMoneyType	FrozenMargin;
	///冻结的资金
	TZQThostFtdcMoneyType	FrozenCash;
	///冻结的手续费
	TZQThostFtdcMoneyType	FrozenCommission;
	///资金差额
	TZQThostFtdcMoneyType	CashIn;
	///手续费
	TZQThostFtdcMoneyType	Commission;
	///平仓盈亏
	TZQThostFtdcMoneyType	CloseProfit;
	///持仓盈亏
	TZQThostFtdcMoneyType	PositionProfit;
	///上次结算价
	TZQThostFtdcPriceType	PreSettlementPrice;
	///本次结算价
	TZQThostFtdcPriceType	SettlementPrice;
	///交易日
	TZQThostFtdcDateType	TradingDay;
	///结算编号
	TZQThostFtdcSettlementIDType	SettlementID;
	///开仓成本
	TZQThostFtdcMoneyType	OpenCost;
	///交易所保证金
	TZQThostFtdcPriceType	ExchangeMargin;
	///组合成交形成的持仓
	TZQThostFtdcVolumeType	CombPosition;
	///组合多头冻结
	TZQThostFtdcVolumeType	CombLongFrozen;
	///组合空头冻结
	TZQThostFtdcVolumeType	CombShortFrozen;
	///逐日盯市平仓盈亏
	TZQThostFtdcMoneyType	CloseProfitByDate;
	///逐笔对冲平仓盈亏
	TZQThostFtdcMoneyType	CloseProfitByTrade;
	///今日持仓
	TZQThostFtdcVolumeType	TodayPosition;
	///保证金率
	TZQThostFtdcRatioType	MarginRateByMoney;
	///保证金率(按手数)
	TZQThostFtdcRatioType	MarginRateByVolume;
	///执行冻结
	TZQThostFtdcVolumeType	StrikeFrozen;
	///执行冻结金额
	TZQThostFtdcMoneyType	StrikeFrozenAmount;
	///放弃执行冻结
	TZQThostFtdcVolumeType	AbandonFrozen;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///现券转移查询
struct CZQThostFtdcQrySecurityTransferField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///现券转移流水号
	TZQThostFtdcSerialType	SecurityTransferSerial;
};

///组合合约信息查询
struct CZQThostFtdcQryCombinationField
{
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///组合合约代码
	TZQThostFtdcInstrumentIDType	CombInstrumentID;
};

///组合合约信息查询响应
struct CZQThostFtdcCombinationField
{
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///组合合约代码
	TZQThostFtdcInstrumentIDType	CombInstrumentID;
	///组合合约名称
	TZQThostFtdcNameType	CombInstrumentName;
	///成分合约数
	TZQThostFtdcNumberType	NoLeges;
	///标的是否相同
	TZQThostFtdcDataCompFlagType	SameUnderlyingFlag;
	///到期日是否相同
	TZQThostFtdcDataCompFlagType	SameExpireDateFlag;
	///合约单位是否相同
	TZQThostFtdcDataCompFlagType	SameUnderlyingMultipleFlag;
	///组合策略自动解除天数
	TZQThostFtdcNumberType	AutoSplitDay;
	///组合类型
	TZQThostFtdcCombinationTypeType	CombinationType;
	///组合保证金算法
	TZQThostFtdcCombMarginAlgoType	CombMarginAlgo;
};

///组合合约分腿信息查询
struct CZQThostFtdcQryCombinationLegField
{
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///组合合约代码
	TZQThostFtdcInstrumentIDType	CombInstrumentID;
	///单腿编号
	TZQThostFtdcLegIDType	LegID;
};

///组合合约分腿信息查询响应
struct CZQThostFtdcCombinationLegField
{
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///组合合约代码
	TZQThostFtdcInstrumentIDType	CombInstrumentID;
	///单腿编号
	TZQThostFtdcLegIDType	LegID;
	///单腿合约类型
	TZQThostFtdcOptionsTypeType	LegOptionsType;
	///单腿持仓方向
	TZQThostFtdcPosiDirectionType	LegPosiDirection;
	///单腿行权价顺序号
	TZQThostFtdcSequenceNoType	LegExecPriceSeq;
	///单腿到期日顺序号
	TZQThostFtdcSequenceNoType	LegExpireDateSeq;
	///单腿乘数
	TZQThostFtdcLegMultipleType	LegMultiple;
};

///组合策略报单查询
struct CZQThostFtdcQryCombOrderField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///组合合约代码
	TZQThostFtdcInstrumentIDType	CombInstrumentID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///组合策略报单编号
	TZQThostFtdcOrderSysIDType	CombOrderSysID;
	///开始时间
	TZQThostFtdcTimeType	InsertTimeStart;
	///结束时间
	TZQThostFtdcTimeType	InsertTimeEnd;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///组合策略报单操作查询
struct CZQThostFtdcQryCombOrderActionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///投资者组合持仓明细查询
struct CZQThostFtdcQryInvestorPositionCombineDetailField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///组合合约代码
	TZQThostFtdcInstrumentIDType	CombInstrumentID;
	///组合编号
	TZQThostFtdcTradeIDType	CombTradeID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///投资者组合持仓明细查询响应
struct CZQThostFtdcInvestorPositionCombineDetailField
{
	///交易日
	TZQThostFtdcDateType	TradingDay;
	///开仓日期
	TZQThostFtdcDateType	OpenDate;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///结算编号
	TZQThostFtdcSettlementIDType	SettlementID;
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///组合编号
	TZQThostFtdcTradeIDType	CombTradeID;
	///撮合编号
	TZQThostFtdcTradeIDType	TradeID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///投机套保标志
	TZQThostFtdcHedgeFlagType	HedgeFlag;
	///买卖方向
	TZQThostFtdcDirectionType	Direction;
	///持仓量
	TZQThostFtdcVolumeType	TotalAmt;
	///投资者保证金
	TZQThostFtdcMoneyType	Margin;
	///交易所保证金
	TZQThostFtdcMoneyType	ExchMargin;
	///保证金率
	TZQThostFtdcRatioType	MarginRateByMoney;
	///保证金率(按手数)
	TZQThostFtdcRatioType	MarginRateByVolume;
	///单腿编号
	TZQThostFtdcLegIDType	LegID;
	///单腿乘数
	TZQThostFtdcLegMultipleType	LegMultiple;
	///组合合约代码
	TZQThostFtdcInstrumentIDType	CombInstrumentID;
	///成交组号
	TZQThostFtdcTradeGroupIDType	TradeGroupID;
	///持仓方向
	TZQThostFtdcPosiDirectionType	PosiDirection;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///上市开放式基金信息查询
struct CZQThostFtdcQryLOFInfoField
{
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///基金代码
	TZQThostFtdcInstrumentIDType	FundID;
};

///上市开放式基金信息查询响应
struct CZQThostFtdcLOFInfoField
{
	///交易日
	TZQThostFtdcDateType	TradingDay;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///基金代码
	TZQThostFtdcInstrumentIDType	FundID;
	///基金类型
	TZQThostFtdcFundTypeType	FundTypeID;
	///拆分合并交易单位
	TZQThostFtdcTradingUnitType	SMTradingUnit;
	///母基金转换系数
	TZQThostFtdcFundRatioType	MasterRatio;
	///拆分申报最小数量
	TZQThostFtdcVolumeType	SplitVolMin;
	///合并申报最小数量
	TZQThostFtdcVolumeType	MergeVolMin;
	///是否允许申购
	TZQThostFtdcBoolType	IsSupportPur;
	///是否允许赎回
	TZQThostFtdcBoolType	IsSupportRed;
	///是否允许拆分
	TZQThostFtdcBoolType	IsSupportSplit;
	///是否允许合并
	TZQThostFtdcBoolType	IsSupportMerge;
};

///上市开放式基金子基金信息查询
struct CZQThostFtdcQryLOFSubInfoField
{
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///母基金代码
	TZQThostFtdcInstrumentIDType	MasterFundID;
	///子基金代码
	TZQThostFtdcInstrumentIDType	SubFundID;
};

///上市开放式基金子基金信息查询响应
struct CZQThostFtdcLOFSubInfoField
{
	///交易日
	TZQThostFtdcDateType	TradingDay;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///母基金代码
	TZQThostFtdcInstrumentIDType	MasterFundID;
	///子基金代码
	TZQThostFtdcInstrumentIDType	SubFundID;
	///子份额转换系数
	TZQThostFtdcFundRatioType	SubRatio;
};

///融资融券直接还款录入
struct CZQThostFtdcInputCashRepayField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///直接还款引用
	TZQThostFtdcOrderRefType	CROrderRef;
	///资金帐号代码
	TZQThostFtdcAccountIDType	AccountID;
	///申报还款金额
	TZQThostFtdcMoneyType	Amount;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///请求编号
	TZQThostFtdcRequestIDType	RequestID;
};

///融资融券直接还款
struct CZQThostFtdcCashRepayField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///直接还款引用
	TZQThostFtdcOrderRefType	CROrderRef;
	///资金帐号代码
	TZQThostFtdcAccountIDType	AccountID;
	///申报还款金额
	TZQThostFtdcMoneyType	Amount;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///请求编号
	TZQThostFtdcRequestIDType	RequestID;
	///实际还款金额
	TZQThostFtdcMoneyType	RepaidAmount;
	///用户代码
	TZQThostFtdcUserIDType	UserID;
	///直接还款报单编号
	TZQThostFtdcOrderSysIDType	CROrderSysID;
	///前置编号
	TZQThostFtdcFrontIDType	FrontID;
	///会话编号
	TZQThostFtdcSessionIDType	SessionID;
	///申报日期
	TZQThostFtdcDateType	InsertDate;
	///申报时间
	TZQThostFtdcTimeType	InsertTime;
	///用户端产品信息
	TZQThostFtdcProductInfoType	UserProductInfo;
};

///直接还款查询
struct CZQThostFtdcQryCashRepayField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///直接还款报单编号
	TZQThostFtdcOrderSysIDType	CROrderSysID;
	///开始时间
	TZQThostFtdcTimeType	InsertTimeStart;
	///结束时间
	TZQThostFtdcTimeType	InsertTimeEnd;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///查询投资者融资融券信息
struct CZQThostFtdcQryCreditInfoField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
};

///查询投资者融资融券信息响应
struct CZQThostFtdcCreditInfoField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///授信总额度
	TZQThostFtdcMoneyType	CreditAmount;
	///融资额度上限
	TZQThostFtdcMoneyType	MarginBuyLimitAmount;
	///融资买入金额
	TZQThostFtdcMoneyType	MarginBuyAmount;
	///融资买入未成交金额
	TZQThostFtdcMoneyType	NoTradeMarginBuyAmount;
	///融资冻结保证金
	TZQThostFtdcMoneyType	MarginBuyFrozenMargin;
	///融资买入利息
	TZQThostFtdcMoneyType	MarginBuyInterest;
	///融券额度上限
	TZQThostFtdcMoneyType	ShortSellLimitAmount;
	///融券卖出金额
	TZQThostFtdcMoneyType	ShortSellAmount;
	///融券卖出未成交金额
	TZQThostFtdcMoneyType	NoTradeShortSellAmount;
	///融券冻结保证金
	TZQThostFtdcMoneyType	ShortSellFrozenMargin;
	///融券卖出利息
	TZQThostFtdcMoneyType	ShortSellInterest;
};

///查询投资者融资融券可用证券头寸
struct CZQThostFtdcQryCreditSecurityPositionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///头寸类型
	TZQThostFtdcCreditPositionTypeType	CreditPositionType;
};

///查询投资者融资融券可用证券头寸响应
struct CZQThostFtdcCreditSecurityPositionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///头寸编号
	TZQThostFtdcPositionGroupIDType	PositionGroupID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///头寸类型
	TZQThostFtdcCreditPositionTypeType	CreditPositionType;
	///可用数量
	TZQThostFtdcVolumeType	Volume;
};

///请求查询投资者信用合约
struct CZQThostFtdcQryCreditContractField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
};

///请求查询投资者信用合约响应
struct CZQThostFtdcCreditContractField
{
	///交易日
	TZQThostFtdcDateType	TradingDay;
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///信用合约代码
	TZQThostFtdcInstrumentIDType	CreditContractID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///开仓日期
	TZQThostFtdcDateType	OpenDate;
	///到期日期
	TZQThostFtdcDateType	ExpireDate;
	///信用合约类型
	TZQThostFtdcCreditContractTypeType	CreditContractType;
	///成交均价
	TZQThostFtdcPriceType	AveragePrice;
	///数量
	TZQThostFtdcPositionVolumeType	Volume;
	///金额
	TZQThostFtdcMoneyType	Amount;
	///未偿还数量
	TZQThostFtdcPositionVolumeType	LeavesVolume;
	///未偿还金额
	TZQThostFtdcMoneyType	LeavesAmount;
	///未结利息
	TZQThostFtdcMoneyType	LeavesInterest;
	///未结交易费用
	TZQThostFtdcMoneyType	LeavesFee;
	///信用合约状态
	TZQThostFtdcCreditContractStatusType	CreditContractStatus;
	///头寸类型
	TZQThostFtdcCreditPositionTypeType	CreditPositionType;
};

///请求查询投资者融资融券偿还明细
struct CZQThostFtdcQryCreditRepaymentField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///信用合约代码
	TZQThostFtdcInstrumentIDType	CreditContractID;
};

///请求查询投资者融资融券偿还明细响应
struct CZQThostFtdcCreditRepaymentField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///信用合约代码
	TZQThostFtdcInstrumentIDType	CreditContractID;
	///偿还流水号
	TZQThostFtdcSerialType	RepaymentID;
	///报单编号
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///偿还金额
	TZQThostFtdcMoneyType	RepaidAmount;
	///偿还数量
	TZQThostFtdcPositionVolumeType	RepaidVolume;
	///偿还交易费用
	TZQThostFtdcMoneyType	RepaidFee;
	///偿还利息
	TZQThostFtdcMoneyType	RepaidInterest;
};

///请求查询投资者融资融券标的证券信息
struct CZQThostFtdcQryCreditUnderlyingField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///请求查询投资者融资融券标的证券信息响应
struct CZQThostFtdcCreditUnderlyingField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///可否融资
	TZQThostFtdcBoolType	IsMarginBuy;
	///可否融券
	TZQThostFtdcBoolType	IsShortSell;
	///融资保证金率
	TZQThostFtdcRatioType	MarginBuyRate;
	///融券保证金率
	TZQThostFtdcRatioType	ShortSellRate;
};

///请求查询投资者融资融券担保证券信息
struct CZQThostFtdcQryCreditCollateralField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///请求查询投资者融资融券担保证券信息响应
struct CZQThostFtdcCreditCollateralField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///是否担保品
	TZQThostFtdcBoolType	IsCollateral;
	///担保品折算率
	TZQThostFtdcRatioType	CollateralConversionRate;
};

///请求查询投资者融资融券可用资金头寸
struct CZQThostFtdcQryCreditFundPositionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///头寸类型
	TZQThostFtdcCreditPositionTypeType	CreditPositionType;
};

///请求查询投资者融资融券可用资金头寸响应
struct CZQThostFtdcCreditFundPositionField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///头寸编号
	TZQThostFtdcPositionGroupIDType	PositionGroupID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///头寸类型
	TZQThostFtdcCreditPositionTypeType	CreditPositionType;
	///可用资金
	TZQThostFtdcMoneyType	Amount;
};

///请求查询经纪公司余券信息
struct CZQThostFtdcQryCreditRemainField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///请求查询经纪公司余券信息响应
struct CZQThostFtdcCreditRemainField
{
	///交易日
	TZQThostFtdcDateType	TradingDay;
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///客户代码
	TZQThostFtdcClientIDType	ClientID;
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///合约代码
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///需返还数量
	TZQThostFtdcVolumeType	Volume;
	///已返还数量
	TZQThostFtdcVolumeType	ReturnedVolume;
};

///交易通知
struct CZQThostFtdcTradingNoticeField
{
	///经纪公司代码
	TZQThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TZQThostFtdcInvestorIDType	InvestorID;
	///发送日期
	TZQThostFtdcDateType	SendDate;
	///发送时间
	TZQThostFtdcTimeType	SendTime;
	///消息正文
	TZQThostFtdcContentType	Content;
	///序列系列号
	TZQThostFtdcSequenceSeriesType	SequenceSeries;
	///序列号
	TZQThostFtdcSequenceNoType	SequenceNo;
	///投资单元代码
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///资金账户
	TZQThostFtdcAccountIDType	AccountID;
};

///交易日
struct CZQThostFtdcTradingDayField
{
	///交易所代码
	TZQThostFtdcExchangeIDType	ExchangeID;
	///交易日
	TZQThostFtdcDateType	TradingDay;
};


#endif
