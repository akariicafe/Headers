@class NSMutableDictionary, NSString, HMMNamedGroup, HMMCoreDataCounterStorage;
@protocol HMMCounterDatePartitionProvider;

@interface HMMNamedCounterGroup : NSObject <HMMCounterGroup> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _coreDataGroupToken;
}

@property (readonly, nonatomic) HMMCoreDataCounterStorage *primaryStorage;
@property (readonly, nonatomic) NSMutableDictionary *observers;
@property (retain, nonatomic) HMMNamedGroup *coreDataGroup;
@property (readonly, nonatomic) NSString *groupName;
@property (readonly, nonatomic) id<HMMCounterDatePartitionProvider> partitionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addObserver:(id)a0 forCounterName:(id)a1;
- (id)coreDataGroupUsingContext:(id)a0;
- (id)countersInDatePartition:(id)a0;
- (id)datePartitions;
- (void)incrementCounter:(id)a0;
- (void)incrementCounter:(id)a0 by:(long long)a1;
- (id)initWithGroupName:(id)a0 partitionProvider:(id)a1 primaryStorage:(id)a2;
- (void)notifyObserversForCounter:(id)a0 previousCount:(long long)a1 newCount:(long long)a2;
- (id)observersForCounter:(id)a0;
- (void)sampleValue:(long long)a0 forCounter:(id)a1;
- (BOOL)statisticsForCounter:(id)a0 inDatePartition:(id)a1 minValue:(long long *)a2 maxValue:(long long *)a3 average:(long long *)a4 updateCount:(long long *)a5;
- (long long)sumOfCountersInDatePartition:(id)a0;
- (long long)valueForCounter:(id)a0 inDatePartition:(id)a1;

@end
