@class NSString, NSMutableDictionary, NSArray, NSMutableArray, NSNumber;

@interface PLBBMav16BHwRfLTELogMsg : PLBBMsgRoot

@property (retain) NSString *groupEntryKey;
@property (retain) NSString *groupID;
@property (retain) NSMutableArray *groupArrEntries;
@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableDictionary *commonInfo;
@property (retain, nonatomic) NSMutableDictionary *kvPairs;
@property (retain) NSString *error;
@property (retain) NSArray *dlTBSzCnt;
@property (retain) NSNumber *logDuration;
@property (retain) NSNumber *dupMode;
@property (retain) NSNumber *PCCFreq;
@property (retain) NSNumber *PCCBw;
@property (retain) NSNumber *SCC1Freq;
@property (retain) NSNumber *SCC1Bw;
@property (retain) NSNumber *SCC2Freq;
@property (retain) NSNumber *SCC2Bw;
@property (retain) NSNumber *SCC3Freq;
@property (retain) NSNumber *SCC3Bw;
@property (retain) NSArray *txPwrCnt;
@property (retain) NSArray *caSCCCnt;
@property (retain) NSArray *ulCaSCCCnt;
@property (retain) NSArray *actRxTxCnt;
@property (retain) NSArray *sleepStateIdleCnt;
@property (retain) NSArray *sleepStateConnCnt;
@property (retain) NSArray *rsrpIdleCnt;
@property (retain) NSArray *rsrpConnCnt;
@property (retain) NSArray *sinrIdleCnt;
@property (retain) NSArray *sinrConnCnt;
@property (retain) NSArray *arxStateCnt;
@property (retain) NSArray *nlicStateCnt;
@property (retain) NSArray *bpeStats;
@property (retain) NSNumber *ardRxDOff;
@property (retain) NSNumber *uSleepPCCCnt;
@property (retain) NSNumber *uSleepSCC1Cnt;
@property (retain) NSNumber *uSleepSCC2Cnt;
@property (retain) NSNumber *uSleepSCC3Cnt;
@property (retain) NSArray *hsicPCC;
@property (retain) NSArray *hsicSCC1;
@property (retain) NSArray *hsicSCC2;
@property (retain) NSArray *hsicSCC3;
@property (retain) NSNumber *arxOffPCC;
@property (retain) NSNumber *arxOffSCC1;
@property (retain) NSNumber *arxOffSCC2;
@property (retain) NSNumber *arxOffSCC3;
@property (retain) NSNumber *arxBaselinePCC;
@property (retain) NSNumber *arxBaselineSCC1;
@property (retain) NSNumber *arxBaselineSCC2;
@property (retain) NSNumber *arxBaselineSCC3;
@property (retain) NSNumber *arxQicePCC;
@property (retain) NSNumber *arxQiceSCC1;
@property (retain) NSNumber *arxQiceSCC2;
@property (retain) NSNumber *arxQiceSCC3;

+ (id)entryEventBackwardDefinitionBBMav16BHwRfLTE;

- (void)sendAndLogPLEntry:(id)a0 withName:(id)a1 withType:(id)a2;
- (id)init;
- (void)addPairWithKey:(id)a0 andWithVal:(id)a1;
- (void)setHeaderWithSeqNum:(id)a0 andDate:(id)a1 andTimeCal:(double)a2;
- (void).cxx_destruct;
- (id)logEventBackwardBBMav16BHwRfLTE;
- (void)populateMav16BEntry:(id)a0;
- (void)refreshMav16BBBRfLTE;

@end
