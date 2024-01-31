@class NSMutableDictionary, NSString, NSArray, NSDate, NSNumber;

@interface PLBBMavHwRf1xLogMsg : PLBasebandMessage

@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableDictionary *commonInfo;
@property (retain, nonatomic) NSMutableDictionary *kvPairs;
@property (retain) NSDate *bbDate;
@property double *bbTimeCal;
@property (retain) NSNumber *bbSeqnum;
@property (retain) NSString *error;
@property (retain) NSNumber *logDuration;
@property (retain) NSNumber *dtxOn;
@property (retain) NSNumber *dtxOff;
@property (retain) NSArray *callTypeDur;

+ (id)entryEventBackwardDefinitionBBMavHwRf1x;

- (void)sendAndLogPLEntry:(id)a0 withName:(id)a1 withType:(id)a2;
- (void)populateEntry:(id)a0;
- (id)init;
- (void)addPairWithKey:(id)a0 andWithVal:(id)a1;
- (void)refreshRequest;
- (void)setHeaderWithSeqNum:(id)a0 andDate:(id)a1 andTimeCal:(double)a2;
- (void).cxx_destruct;
- (id)logEventBackwardBBMavHwRf1x;

@end
