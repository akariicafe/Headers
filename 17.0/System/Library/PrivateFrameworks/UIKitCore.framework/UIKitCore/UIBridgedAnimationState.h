@protocol UIBridgedAnimationContext;

@interface UIBridgedAnimationState : UIViewAnimationState

@property (retain, nonatomic) id<UIBridgedAnimationContext> bridgingContext;

- (id)init;
- (id)actionForLayer:(id)a0 forKey:(id)a1 forView:(id)a2;
- (BOOL)shouldAnimatePropertyWithKey:(id)a0;
- (void).cxx_destruct;
- (void)setupWithDuration:(double)a0 delay:(double)a1 view:(id)a2 options:(unsigned long long)a3 factory:(id)a4 parentState:(id)a5 start:(id /* block */)a6 completion:(id /* block */)a7;
- (void)_runActionForLayer:(id)a0 key:(id)a1 view:(id)a2 currentValue:(id)a3 targetValue:(id)a4;

@end
