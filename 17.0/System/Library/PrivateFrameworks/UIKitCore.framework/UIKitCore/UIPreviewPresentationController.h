@class NSHashTable, UIView, NSArray, UITapGestureRecognizer, NSString, UIWindow, UIResponder, UIVisualEffectView;
@protocol UIPreviewPresentationControllerDelegate;

@interface UIPreviewPresentationController : UIPresentationController <UIGestureRecognizerDelegate>

@property (weak, nonatomic) id<UIPreviewPresentationControllerDelegate> previewPresentationDelegate;
@property (retain, nonatomic) UITapGestureRecognizer *dismissGestureRecognizer;
@property (nonatomic) BOOL appliesVisualEffectsToPresentingView;
@property (retain, nonatomic) UIVisualEffectView *presentationContainerEffectView;
@property (retain, nonatomic) UIView *localStatusBar;
@property (copy, nonatomic) NSArray *keyboardSnapshotters;
@property (copy, nonatomic) NSHashTable *keyboardWindows;
@property (weak, nonatomic) UIResponder *currentPinnedResponder;
@property (weak, nonatomic) UIWindow *presentationWindow;
@property (copy, nonatomic) id /* block */ containerViewConfigurationBlock;
@property (copy, nonatomic) id /* block */ dismissalTransitionDidEndBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_backgroundEffectForTraitCollection:(id)a0 interactive:(BOOL)a1;
+ (BOOL)_shouldApplyVisualEffectsToPresentingView;
+ (BOOL)_shouldInterdictServiceViewTouches;

- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (BOOL)_presentationPotentiallyUnderlapsStatusBar;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (long long)presentationStyle;
- (void)presentationTransitionWillBegin;
- (void).cxx_destruct;
- (BOOL)_allowsAutorotation;
- (void)_animatePreviewTransitionIfNeeded:(id)a0;
- (void)_applyVisualEffectsForPresentationPhase:(unsigned long long)a0;
- (void)_cancelTransitionDidEnd:(BOOL)a0;
- (void)_finalizeAfterDismissalTransition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForTransitionViewInPresentationSuperview:(id)a0;
- (void)_handleDismissGestureRecognizer:(id)a0;
- (void)_interactiveHighlightTransitionDidEnd:(BOOL)a0;
- (BOOL)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
- (void)_layoutForCancel;
- (void)_layoutForInteractiveHighlight;
- (void)_layoutForPreview;
- (void)_prepareContainerViewForPresentationTransition;
- (void)_prepareDismissAnimationsForTransitionCoordinator:(id)a0;
- (void)_prepareDismissGestureRecognizersIfNeeded;
- (void)_prepareKeyboardForPresentationTransition;
- (void)_preparePresentationAnimationsForTransitionCoordinator:(id)a0;
- (void)_prepareStatusBarForPresentationTransition;
- (id)_presentationContainerView;
- (void)_presentationTransitionWillBeginForContainerEffectView:(id)a0;
- (void)_previewTransitionDidEnd:(BOOL)a0;
- (BOOL)_shouldSavePresentedViewControllerForStateRestoration;

@end
