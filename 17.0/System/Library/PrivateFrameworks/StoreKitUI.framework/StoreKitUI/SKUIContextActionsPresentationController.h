@class UIVisualEffectView;

@interface SKUIContextActionsPresentationController : UIPresentationController

@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (copy, nonatomic) id /* block */ dismissalAnimations;

- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (void).cxx_destruct;
- (BOOL)shouldRemovePresentersView;

@end
