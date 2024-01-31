@class _UIPreviewPresentationPlatterView, UIViewPropertyAnimator;
@protocol UIViewControllerPreviewing_Internal, _UIPreviewInteractionHighlighting;

@interface _UIPreviewPresentationController2 : UIPreviewPresentationController

@property (retain, nonatomic) _UIPreviewPresentationPlatterView *revealPlatterView;
@property (nonatomic) BOOL hasPerformedInitialLayout;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } preferredContentPlatterTransform;
@property (weak, nonatomic) id<UIViewControllerPreviewing_Internal> previewingContext;
@property (weak, nonatomic) id<_UIPreviewInteractionHighlighting> currentHighlighter;
@property (weak, nonatomic) UIViewPropertyAnimator *currentTransitionAnimator;
@property (nonatomic) double interactiveTransitionFraction;
@property (retain, nonatomic) _UIPreviewPresentationPlatterView *contentPlatterView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _computedPlatterFrame;
@property (nonatomic) BOOL shouldScaleContentViewToAspectFitPlatter;
@property (nonatomic) BOOL shouldEnableUserInteractionOnPlatter;

- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (void)presentationTransitionWillBegin;
- (void).cxx_destruct;
- (void)_layoutContentViews;
- (void)_performDismissAnimationsWithTransitionContext:(id)a0;
- (void)_performPresentationAnimationsWithTransitionContext:(id)a0;
- (void)_performReducedMotionDismissAnimationsWithTransitionContext:(id)a0;
- (void)_performReducedMotionPresentationAnimationsWithTransitionContext:(id)a0;
- (void)_performTransitionAnimations:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_preferredContentPlatterRectForContainerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_prepareContentPlatterViewForPresentationTransitionIfNeeded:(id)a0;
- (void)_prepareContentViewsForPresentationAnimationsIfNeeded;
- (void)_preparePresentationAnimationsForTransitionCoordinator:(id)a0;
- (void)_prepareRevealPlatterViewForPresentationTransitionIfNeeded:(id)a0;
- (void)_presentationTransitionWillBeginForContainerEffectView:(id)a0;
- (BOOL)_shouldReduceMotion;
- (void)_updateFromInteractionEffect:(id)a0;
- (void)containerViewDidLayoutSubviews;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1 previewingContext:(id)a2;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)a0;

@end
