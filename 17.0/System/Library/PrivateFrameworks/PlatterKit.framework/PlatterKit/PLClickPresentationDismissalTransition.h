@class PLClickPresentationPresentationTransition;

@interface PLClickPresentationDismissalTransition : PLClickPresentationTransition

@property (weak, nonatomic) PLClickPresentationPresentationTransition *presentationTransition;

- (void).cxx_destruct;
- (void)_configureTransitionContextWithFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (id)_newAnimator;
- (id)initWithTransitionDelegate:(id)a0 presentingViewController:(id)a1 presentedViewController:(id)a2 completion:(id /* block */)a3;
- (void)updateBackgroundViewForTransition;

@end
