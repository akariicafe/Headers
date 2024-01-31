@interface NUCrossFadeViewAnimator : NSObject

@property (nonatomic) double duration;

- (id)init;
- (void)animateView:(id)a0 toValue:(id)a1 completion:(id /* block */)a2;
- (void)animateView:(id)a0 toEmptyStateWithCompletion:(id /* block */)a1;
- (void)crossFadeFromView:(id)a0 toView:(id)a1 value:(id)a2 completion:(id /* block */)a3;
- (void)resetView:(id)a0;

@end
