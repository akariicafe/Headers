@class NSDictionary, NSMutableSet;

@interface HRAIrregularRhythmResult : NSObject

@property (nonatomic) BOOL tachogramShouldBeRequested;
@property (nonatomic) BOOL userShouldBeAlerted;
@property (retain, nonatomic) NSMutableSet *uuidsForNextCycle;
@property (retain, nonatomic) NSMutableSet *negativeUUIDs;
@property (retain, nonatomic) NSMutableSet *positiveUUIDs;
@property (retain, nonatomic) NSDictionary *metricsForCoreAnalytics;

- (void).cxx_destruct;

@end
