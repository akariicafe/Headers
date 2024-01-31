@class NSDictionary, NSMutableDictionary;
@protocol HMDEventCounterContext;

@interface HMDEventCounterGroup : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableDictionary *mutableEventCounters;
@property (readonly, weak, nonatomic) id<HMDEventCounterContext> context;
@property (readonly, nonatomic) NSDictionary *eventCounters;
@property (readonly, nonatomic) unsigned long long summedEventCounters;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (BOOL)_resetEventCounterForEventName:(id)a0;
- (unsigned long long)maxCounterName:(id *)a0;
- (id)_getOrCreateEventCounterForEventName:(id)a0;
- (void)addObserver:(id)a0 forEventName:(id)a1;
- (unsigned long long)fetchEventCounterForEventName:(id)a0;
- (void)forceSave;
- (void)incrementEventCounterForEventName:(id)a0;
- (void)incrementEventCounterForEventName:(id)a0 withValue:(unsigned long long)a1;
- (id)initWithContext:(id)a0 serializedEventCounters:(id)a1;
- (void)resetEventCounterForEventName:(id)a0;
- (void)resetEventCounters;

@end
