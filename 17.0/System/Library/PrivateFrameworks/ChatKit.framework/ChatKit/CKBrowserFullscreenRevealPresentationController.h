@class UIStatusBarWindow, CKBrowserFullscreenRevealDimmingView, UIView, UIStatusBar;

@interface CKBrowserFullscreenRevealPresentationController : UIPresentationController

@property (retain, nonatomic) CKBrowserFullscreenRevealDimmingView *dimmingView;
@property (nonatomic, getter=isPresenting) BOOL presenting;
@property (nonatomic, getter=isDismissing) BOOL dismissing;
@property (retain, nonatomic) UIStatusBar *statusBar;
@property (retain, nonatomic) UIStatusBarWindow *statusBarWindow;
@property (nonatomic) unsigned long long statusBarResizeMask;
@property (retain, nonatomic) UIView *presentingSnapshotView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } presentingSnapshotFrame;
@property (copy, nonatomic) id /* block */ dismissHandler;

- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)dealloc;
- (void)containerViewWillLayoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)presentationTransitionWillBegin;
- (void).cxx_destruct;
- (void)_cleanupPresentation;
- (BOOL)_shouldGrabPresentersView;
- (void)containerViewDidLayoutSubviews;
- (BOOL)shouldRemovePresentersView;
- (void)_willChangeStatusBarFrame:(id)a0;
- (void)_configureViewsForDismissedState;
- (void)_configureViewsForPresentedState;
- (void)_prepareViewHierarchyForPresentation;
- (id)_viewsToApplyCornerRadius;
- (id)_viewsToApplyTransform;
- (void)dimmingViewTapped:(id)a0;

@end
