@class NSMutableArray, HKSampleType, NSHashTable;

@interface HKThrottledUpdateData : NSObject

@property (readonly, nonatomic) HKSampleType *throttledSampleType;
@property (readonly, nonatomic) long long incomingUpdateCountSinceLastDrain;
@property (readonly, nonatomic) NSHashTable *throttledObservers;
@property (readonly, nonatomic) NSMutableArray *throttledSamplesAdded;
@property (readonly, nonatomic) NSMutableArray *throttledDeletedObjects;
@property (readonly, nonatomic) double lastDrainTime;

- (void).cxx_destruct;
- (void)updateDrainTime;
- (void)addThrottledObservers:(id)a0 samplesAdded:(id)a1 objectsRemoved:(id)a2;
- (void)clearThrottlingData;
- (id)initWithSampleType:(id)a0;

@end
