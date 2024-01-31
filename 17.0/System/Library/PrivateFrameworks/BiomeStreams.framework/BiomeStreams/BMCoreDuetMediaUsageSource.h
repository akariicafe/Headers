@protocol BMCoreDuetMediaUsageStore;

@interface BMCoreDuetMediaUsageSource : BMSource

@property (retain, nonatomic) id<BMCoreDuetMediaUsageStore> storage;

- (id)initWithIdentifier:(id)a0;
- (void)sendEvent:(id)a0;
- (void).cxx_destruct;

@end
