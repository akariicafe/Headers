@class NSArray;

@interface _UITextInputSessionDynamicAccumulator : _UITextInputSessionAccumulator

@property (copy, nonatomic) id /* block */ dynamicAccumulatorIncreaseBlock;
@property (readonly, nonatomic) NSArray *lastResults;

+ (id)accumulatorWithName:(id)a0 depthRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 block:(id /* block */)a2;

- (void)enumerateAnalytics:(id /* block */)a0;
- (void).cxx_destruct;
- (void)increaseWithActions:(id)a0;

@end
