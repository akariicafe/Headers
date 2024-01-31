@class UIVisualEffectView;

@interface _UISearchATVPresentationController : _UISearchPresentationController

@property (retain, nonatomic) UIVisualEffectView *blurView;

- (void)hideBackgroundObscuringView;
- (BOOL)animatorShouldLayoutPresentationViews;
- (id)backgroundObscuringView;
- (long long)adaptivePresentationStyle;
- (BOOL)shouldAccountForStatusBar;
- (BOOL)searchBarShouldClipToBounds;
- (void)setContentVisible:(BOOL)a0;
- (void)containerViewWillLayoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)searchBarToBecomeTopAttached;
- (id)adaptivePresentationController;
- (id)_presentationControllerForTraitCollection:(id)a0;
- (BOOL)searchBarCanContainScopeBar;
- (id)_presentedViewControllerForSizeClassPair:(struct { long long x0; long long x1; })a0;
- (BOOL)resultsUnderlapsSearchBar;
- (unsigned long long)edgeForHidingNavigationBar;
- (double)resultsControllerContentOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForContainerView;
- (double)statusBarAdjustment;
- (BOOL)forceObeyNavigationBarInsets;
- (void).cxx_destruct;
- (void)showBackgroundObscuringView;

@end
