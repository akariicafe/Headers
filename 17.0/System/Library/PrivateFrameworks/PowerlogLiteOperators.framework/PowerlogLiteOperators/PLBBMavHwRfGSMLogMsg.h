@class NSString, NSMutableDictionary, NSArray, NSMutableArray, NSNumber;

@interface PLBBMavHwRfGSMLogMsg : PLBasebandMessage

@property (retain) NSString *groupEntryKey;
@property (retain) NSString *groupID;
@property (retain) NSMutableArray *groupArrEntries;
@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableDictionary *commonInfo;
@property (retain, nonatomic) NSMutableDictionary *kvPairs;
@property (retain) NSString *error;
@property (retain) NSNumber *logDuration;
@property (retain) NSArray *connState;

+ (id)entryEventBackwardDefinitionBBMavHwRfGSM;

- (void)sendAndLogPLEntry:(id)a0 withName:(id)a1 withType:(id)a2;
- (void)populateEntry:(id)a0;
- (id)init;
- (void)addPairWithKey:(id)a0 andWithVal:(id)a1;
- (void)refreshRequest;
- (void)setHeaderWithSeqNum:(id)a0 andDate:(id)a1 andTimeCal:(double)a2;
- (void).cxx_destruct;
- (id)logEventBackwardBBMavHwRfGSM;
- (void)logEventBackwardGroupEntriesMav10BBHwRfWcdma;

@end
