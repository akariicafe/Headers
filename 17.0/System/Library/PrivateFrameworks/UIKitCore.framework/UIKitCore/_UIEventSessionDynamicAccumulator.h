@protocol _UIEventSessionDynamicAccumulatorDelegate;

@interface _UIEventSessionDynamicAccumulator : _UIEventSessionAccumulator

@property (weak, nonatomic) id<_UIEventSessionDynamicAccumulatorDelegate> delegate;

+ (id)accumulatorWithName:(id)a0 depth:(unsigned long long)a1 block:(id /* block */)a2 delegate:(id)a3 allowedActionSourceTypes:(id)a4;

- (void)enumerateAnalytics:(id /* block */)a0;
- (void).cxx_destruct;
- (void)performIncreaseWithActions:(id)a0;

@end
