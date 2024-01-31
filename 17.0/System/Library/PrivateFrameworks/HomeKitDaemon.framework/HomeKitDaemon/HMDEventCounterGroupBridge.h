@protocol HMMCounterGroup;

@interface HMDEventCounterGroupBridge : HMDEventCounterGroup

@property (readonly, nonatomic) id<HMMCounterGroup> bridgedCounterGroup;
@property (readonly, nonatomic) id /* block */ queryDateBlock;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (unsigned long long)maxCounterName:(id *)a0;
- (void)addObserver:(id)a0 forEventName:(id)a1;
- (id)eventCounters;
- (unsigned long long)fetchEventCounterForEventName:(id)a0;
- (void)incrementEventCounterForEventName:(id)a0 withValue:(unsigned long long)a1;
- (id)initWithContext:(id)a0 bridgedCounterGroup:(id)a1 dateProvider:(id)a2;
- (id)initWithContext:(id)a0 bridgedCounterGroup:(id)a1 groupDate:(id)a2;
- (id)initWithContext:(id)a0 bridgedCounterGroup:(id)a1 queryDateBlock:(id /* block */)a2;
- (void)resetEventCounterForEventName:(id)a0;
- (void)resetEventCounters;
- (unsigned long long)summedEventCounters;

@end
