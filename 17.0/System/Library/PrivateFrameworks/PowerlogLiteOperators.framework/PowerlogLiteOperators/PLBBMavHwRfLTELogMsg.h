@class NSString, NSMutableDictionary, NSArray, NSMutableArray, NSNumber;

@interface PLBBMavHwRfLTELogMsg : PLBBMsgRoot

@property (retain) NSString *groupEntryKey;
@property (retain) NSString *groupID;
@property (retain) NSMutableArray *groupArrEntries;
@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableDictionary *commonInfo;
@property (retain, nonatomic) NSMutableDictionary *kvPairs;
@property (retain) NSString *error;
@property (retain) NSArray *dlC0TBSzCnt;
@property (retain) NSArray *dlC1TBSzCnt;
@property (retain) NSNumber *logDuration;
@property (retain) NSNumber *dupMode;
@property (retain) NSArray *caFreqInfo;
@property (retain) NSArray *txPwrCnt;
@property (retain) NSArray *caSCCCnt;
@property (retain) NSArray *actRxTxCnt;
@property (retain) NSArray *sleepStateCnt;
@property (retain) NSArray *caPriCCCnt;
@property (retain) NSArray *caSecCCCnt;
@property (retain) NSArray *caPriSecCCCnt;
@property (retain) NSArray *actRxTxPriCCCnt;
@property (retain) NSArray *actRxTxSecCCCnt;
@property (retain) NSArray *actRxTxPriSecCCCnt;
@property (retain) NSArray *sleepStateIdleCnt;
@property (retain) NSArray *sleepStateConnCnt;
@property (retain) NSArray *rsrpIdleCnt;
@property (retain) NSArray *rsrpConnCnt;
@property (retain) NSArray *sinrIdleCnt;
@property (retain) NSArray *sinrConnCnt;
@property (retain) NSArray *arxStateCnt;
@property (retain) NSArray *nlicStateCnt;
@property (retain) NSArray *bpeStats;

+ (id)entryEventBackwardDefinitionBBMav10HwRfLTE;
+ (id)entryEventBackwardDefinitionBBMav13HwRfLTE;

- (void)sendAndLogPLEntry:(id)a0 withName:(id)a1 withType:(id)a2;
- (void)populateEntry:(id)a0;
- (id)init;
- (void)addPairWithKey:(id)a0 andWithVal:(id)a1;
- (void)setHeaderWithSeqNum:(id)a0 andDate:(id)a1 andTimeCal:(double)a2;
- (void).cxx_destruct;
- (id)logEventBackwardBBMav10HwRfLTE;
- (id)logEventBackwardBBMav13HwRfLTE;
- (void)populateMav13Entry:(id)a0;
- (void)refreshMav10BBRfAllRats;
- (void)refreshMav13BBRfLTE;

@end
