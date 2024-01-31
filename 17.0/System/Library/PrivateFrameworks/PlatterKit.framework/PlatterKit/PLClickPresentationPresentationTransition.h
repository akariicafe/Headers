@interface PLClickPresentationPresentationTransition : PLClickPresentationTransition

@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } targetTransform;

- (void)_configureTransitionContextWithFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (id)_newAnimator;
- (id)initWithTransitionDelegate:(id)a0 presentingViewController:(id)a1 presentedViewController:(id)a2 completion:(id /* block */)a3;
- (void)updateBackgroundViewForTransition;

@end
