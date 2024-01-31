@class NSDate, NSString, PLAgent, NSData, PBCodable, NSNumber, NSMutableArray;

@interface PLMAVBBHardwareMessage : NSObject

@property (retain) NSNumber *metricId;
@property (retain) NSString *metricData;
@property (retain) NSNumber *triggerId;
@property (retain) NSData *data;
@property (retain) PBCodable *pbc;
@property (retain) NSMutableArray *metricIdArr;
@property (retain) NSMutableArray *metricDataArr;
@property (retain) NSNumber *triggerCnt;
@property (retain) NSNumber *bbtimestamp;
@property (retain) NSDate *bbMonotonic;
@property (retain) PLAgent *logAgent;

+ (id)entryEventBackwardDefinitionBBMavEventMetrics;
+ (id)entryEventBackwardDefinitionBBMavPeriodicMetrics;

- (id)init;
- (void).cxx_destruct;
- (void)addToListMetric:(id)a0 payload:(id)a1;
- (id)decodePayload:(id)a0 forMetricId:(id)a1;
- (id)initEntryWithBBTS:(id)a0 triggerId:(id)a1 seqnum:(id)a2 payload:(id)a3 logAgent:(id)a4;
- (void)logBBMavAperiodicMetrics;
- (void)logBBMavPeriodicMetrics;
- (void)lteComponentCarrierForClass:(id)a0 forEntry:(id)a1;
- (void)nrComponentCarrierForClass:(id)a0 forEntry:(id)a1;
- (void)protocolHistForClass:(id)a0 forEntry:(id)a1;

@end
