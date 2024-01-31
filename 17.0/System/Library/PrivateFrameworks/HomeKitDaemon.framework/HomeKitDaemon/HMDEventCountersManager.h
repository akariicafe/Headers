@class NSMutableArray, NSSet, NSArray, HMDPersistentStore, NSMutableDictionary, NSObject, HMMCountersManager;
@protocol OS_dispatch_queue, HMDEventCountersStoring;

@interface HMDEventCountersManager : HMFObject <HMDEventCounterContext> {
    HMDPersistentStore *_persistentStore;
    NSMutableDictionary *_counterGroups;
    NSMutableArray *_saveHooks;
    double _lastSaveTime;
    BOOL _pendingSave;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) NSSet *allowedSpecifierClasses;

@property (readonly, nonatomic) NSArray *saveHooks;
@property (readonly, nonatomic) id<HMDEventCountersStoring> counterStorage;
@property (readonly, nonatomic) double saveInterval;
@property (readonly, nonatomic) id /* block */ timeSourceBlock;
@property (readonly, nonatomic) HMMCountersManager *bridgedCountersManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

- (id)init;
- (void)_save;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)counterGroupForName:(id)a0;
- (id)initWithBridgedCountersManager:(id)a0;
- (void)removeCounterGroupForSpecifier:(id)a0;
- (id)_fetchAllEventCounters;
- (void)_removeCounterGroupForSpecifier:(id)a0;
- (void)addObserver:(id)a0 forEventName:(id)a1 requestGroup:(id)a2;
- (void)addSaveHook:(id /* block */)a0;
- (void)counterChanged;
- (id)counterGroupForSpecifier:(id)a0;
- (id)counterGroupsForPredicate:(id /* block */)a0;
- (unsigned long long)fetchAggregatedEventCountersForRequestGroup:(id)a0;
- (id)fetchAllEventCounters;
- (unsigned long long)fetchEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (id)fetchEventCountersForRequestGroup:(id)a0;
- (void)forceSave;
- (void)incrementEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (void)incrementEventCounterForEventName:(id)a0 requestGroup:(id)a1 withValue:(unsigned long long)a2;
- (id)initWithEventCountersStorage:(id)a0 bridgedCountersManager:(id)a1;
- (id)initWithEventCountersStorage:(id)a0 bridgedCountersManager:(id)a1 saveInterval:(double)a2 timeSourceBlock:(id /* block */)a3;
- (void)removeCounterGroupForName:(id)a0;
- (void)removeCounterGroupsBasedOnPredicate:(id /* block */)a0;
- (void)resetAllEventCounters;
- (void)resetEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (void)resetEventCountersForRequestGroup:(id)a0;
- (id)unarchiveEventCounters;

@end
