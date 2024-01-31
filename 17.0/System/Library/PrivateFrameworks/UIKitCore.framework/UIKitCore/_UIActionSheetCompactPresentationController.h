@class UITapGestureRecognizer, NSString, _UIAnimationCoordinator, UIView, _UIDimmingKnockoutBackdropView, UILongPressGestureRecognizer;
@protocol UIActionSheetPresentationControllerVisualStyle, _UIActionSheetCompactPresentationControllerDelegate, UIActionSheetPresentationControllerDismissActionView;

@interface _UIActionSheetCompactPresentationController : UIPresentationController

@property (nonatomic) BOOL shouldAdoptPresentedAppearance;
@property (retain, nonatomic) UIView<UIActionSheetPresentationControllerDismissActionView> *dismissActionView;
@property (retain, nonatomic) UILongPressGestureRecognizer *dismissActionViewGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *dimmingViewDismissTapGestureRecognizer;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) _UIDimmingKnockoutBackdropView *backdropView;
@property (retain, nonatomic) _UIAnimationCoordinator *animationCoordinator;
@property (retain, nonatomic) id<UIActionSheetPresentationControllerVisualStyle> visualStyle;
@property (nonatomic) double pseudoAlertPreferredTop;
@property (nonatomic) BOOL hasPendingAnimatedLayout;
@property (copy, nonatomic) NSString *dismissActionTitle;
@property (nonatomic) BOOL avoidsKeyboardDisabled;
@property (nonatomic) BOOL dismissActionUsesShorterHeightWhenCompactVertically;
@property (weak, nonatomic) id<_UIActionSheetCompactPresentationControllerDelegate> actionSheetDelegate;

- (void)dismissalTransitionWillBegin;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_baseContentInsetsWithLeftMargin:(double *)a0 rightMargin:(double *)a1;
- (BOOL)shouldPresentInFullscreen;
- (void)dealloc;
- (BOOL)_shouldOccludeDuringPresentation;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)presentationTransitionWillBegin;
- (void)beginPseudoAlertPresentationMode;
- (void)endPseudoAlertPresentationMode;
- (void).cxx_destruct;
- (void)_transitionToPresentationController:(id)a0 withTransitionCoordinator:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_dismiss;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)_handleDismiss:(id)a0;
- (void)_applyVisualAffordancesToViews;
- (struct { BOOL x0; double x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGSize { double x0; double x1; } x3; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x4; double x5; BOOL x6; BOOL x7; struct CGSize { double x0; double x1; } x8; })_currentLayoutGeometry;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameOfPresentedViewControllerViewInSuperview;
- (void)_keyboardChanged:(id)a0;
- (void)_layoutViews;
- (struct CGSize { double x0; double x1; })_minimumSizeForDismissButton;
- (double)_resizeAnimationDuration;
- (BOOL)_shouldDisableAvoidsKeyboard;
- (void)_subscribeToKeyboardNotifications;
- (void)_unsubscribeFromKeyboardNotifications;
- (void)_updateForKeyboardStartFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 duration:(double)a2 curve:(long long)a3;
- (void)_willRunTransitionForCurrentStateDeferred:(BOOL)a0;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1 visualStyle:(id)a2;

@end
