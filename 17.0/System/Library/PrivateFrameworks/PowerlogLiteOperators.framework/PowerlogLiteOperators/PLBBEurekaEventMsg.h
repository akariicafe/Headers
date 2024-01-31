@class NSMutableString, NSMutableDictionary;

@interface PLBBEurekaEventMsg : PLBasebandMessage

@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableString *sdEvent;
@property (retain, nonatomic) NSMutableString *sdAct;
@property (retain, nonatomic) NSMutableString *sdState;
@property (retain, nonatomic) NSMutableDictionary *commonInfo;
@property (retain, nonatomic) NSMutableDictionary *kvPairs;

+ (id)bbEuEvMsgNameCMCDMAExit;
+ (id)bbEuEvMsgNameCMCallEventIncom;
+ (id)bbEuEvMsgNameCMCallEventOrig;
+ (id)bbEuEvMsgEventNotProcessed;
+ (id)bbEuEvMsgNameBBEurekaMsgLite;
+ (id)bbEuEvMsgNameWCDMARRCState;
+ (id)bbEuEvMsgNameCMCallEventOrigV2;
+ (id)bbEuEvMsgNameGSML1State;
+ (id)bbEuEvMsgNameCMCallEventConnV2;
+ (id)bbEuEvMsgUTRANRRCState;
+ (id)bbEuEvMsgNameCMCallEventEnd;
+ (id)bbEuEvMsgNameSDEventActionCode;
+ (id)bbEuEvMsgNameCMCallEventEndV2;
+ (id)bbEuEvMsgNameLTERRCState;
+ (id)bbEuEvMsgNameCMCallEventConn;

- (void)setPayload:(id)a0;
- (void)refreshWCDMARRCState;
- (void)appendToError:(id)a0;
- (id)init;
- (void)sendAndLogPLEntry:(id)a0;
- (void)logEventPointCMExitCodeWithState:(id)a0;
- (void)logEventCMCallEventEndWithId:(id)a0 andNumCalls:(id)a1;
- (void)logEventCMCallEventConnWithId:(id)a0 andCallType:(id)a1 andSysMode:(id)a2 andClientId:(id)a3;
- (void)setEventCode:(unsigned int)a0;
- (void)setSDEventActionCodeWith:(id)a0 andSDAction:(id)a1 andSDState:(id)a2;
- (void)addPairWithKey:(id)a0 andWithVal:(id)a1;
- (void)logEventForwardUTRANRRCNextStateAs:(id)a0 andCurrStateAs:(id)a1 andRateAs:(id)a2;
- (void)logEventCMCallEventEndWithId:(id)a0 andNumCalls:(id)a1 andClientId:(id)a2;
- (void)refreshEventNotProcessed;
- (void)logEventForwardSDEventActionCode;
- (void)logEventCMCallEventOrigWithId:(id)a0 andCallType:(id)a1 andSrvType:(id)a2 andClientId:(id)a3;
- (void)logEventForwardBBEurekaEventMsgLite;
- (void)logEventForwardGSML1StateWith:(id)a0;
- (void)logEventForwardWCDMARRCPrevStateAs:(id)a0 andCurrState:(id)a1 andRate:(id)a2;
- (void)setHeaderWithSeqNum:(id)a0 andDate:(id)a1 andTimeCal:(double)a2;
- (void)refreshLTERRCState;
- (void).cxx_destruct;
- (void)refreshSDEventActionCode;
- (void)setError:(id)a0;
- (void)logEventCMCallEventConnWithId:(id)a0 andCallType:(id)a1 andSysMode:(id)a2;
- (void)logEventNoneEventNotProcessed;
- (void)logEventForwardLTERRCStateAs:(id)a0;
- (void)refreshBBEurekaEventMsgLite;
- (void)logEventCMCallEventOrigWithId:(id)a0 andCallType:(id)a1 andSrvType:(id)a2;
- (void)refreshUTRANRRCState;

@end
