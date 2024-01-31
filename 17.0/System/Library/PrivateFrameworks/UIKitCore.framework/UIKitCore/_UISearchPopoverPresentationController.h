@class NSString, UIPresentationController, _UISearchPresentationAssistant, UIView;
@protocol _UISearchControllerPresenting;

@interface _UISearchPopoverPresentationController : UIPopoverPresentationController <_UISearchControllerPresenting> {
    _UISearchPresentationAssistant *_assistant;
}

@property (readonly, retain, nonatomic) UIView *searchBarContainerView;
@property (readonly, nonatomic) BOOL shouldAccountForStatusBar;
@property (readonly, nonatomic) double statusBarAdjustment;
@property (readonly, nonatomic) BOOL searchBarToBecomeTopAttached;
@property (readonly, nonatomic) BOOL resultsUnderlapsSearchBar;
@property (readonly, nonatomic) BOOL searchBarCanContainScopeBar;
@property (readonly, nonatomic) BOOL searchBarShouldClipToBounds;
@property (readonly, nonatomic) double resultsControllerContentOffset;
@property (readonly, nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } finalFrameForContainerView;
@property (readonly, nonatomic) BOOL animatorShouldLayoutPresentationViews;
@property (readonly, nonatomic) BOOL forceObeyNavigationBarInsets;
@property (readonly, nonatomic) unsigned long long edgeForHidingNavigationBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (long long)adaptivePresentationStyle;
- (void)_transitionToDidEnd;
- (void)_transitionToWillBegin;
- (void)setContentVisible:(BOOL)a0;
- (void)_transitionFromDidEnd;
- (id)_popoverHostingWindow;
- (id)_presentationControllerForTraitCollection:(id)a0;
- (id)_presentedViewControllerForSizeClassPair:(struct { long long x0; long long x1; })a0;
- (void)_transitionFromWillBegin;
- (void)presentationTransitionWillBegin;
- (void).cxx_destruct;
- (BOOL)_forcePresentationInPresenterScene;

@end
