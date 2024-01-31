@class NSString, UIPresentationController, _UISearchPresentationAssistant, UIView, NSMapTable;
@protocol _UISearchControllerPresenting;

@interface _UISearchPresentationController : UIPresentationController <_UISearchControllerPresenting> {
    _UISearchPresentationAssistant *_assistant;
    UIView *_placeholderView;
    NSMapTable *_excisedSearchBarConstraitMap;
    NSMapTable *_placeholderConstraitMap;
    struct { unsigned char searchBarWasTableHeaderView : 1; unsigned char excisedSearchBarDuringPresentation : 1; unsigned char searchBarWantedAutolayoutBeforeExcision : 1; } _controllerFlags;
}

@property (readonly, nonatomic) UIView *backgroundObscuringView;
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

+ (BOOL)shouldExciseSearchBar:(id)a0 duringPresentationWithPresenter:(id)a1;

- (void)_layoutPresentationWithSize:(struct CGSize { double x0; double x1; })a0 transitionCoordinator:(id)a1;
- (void)_exciseSearchBarFromCurrentContext;
- (void)hideBackgroundObscuringView;
- (double)_visibleRefreshControlHeightForTableView:(id)a0;
- (BOOL)_inheritsPresentingViewControllerThemeLevel;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (id)_constraintCopyOfConstraint:(id)a0 replaceItem:(id)a1 withItem:(id)a2;
- (void)_presentationTransitionWithSearchBarHostedByNavBarWillBegin;
- (void)_updatePresentingViewControllerContentScrollViewWithOffsets:(struct CGSize { double x0; double x1; })a0 transitionCoordinator:(id)a1;
- (void)_dismissalTransitionWithSearchBarHostedByNavBarWillBegin;
- (void)_presentationTransitionWithSearchBarNotHostedByNavBarWillBegin;
- (BOOL)_requiresDeferralToCoordinateWithNavigationTransitionAnimated:(BOOL)a0;
- (void)_dismissalTransitionWithSearchBarHostedByNavBarDidEnd:(BOOL)a0;
- (void)_presentationTransitionWithSearchBarHostedByNavBarDidEnd:(BOOL)a0;
- (void)_dismissalTransitionWithSearchBarNotHostedByNavBarDidEnd:(BOOL)a0;
- (long long)adaptivePresentationStyle;
- (void)_transitionToDidEnd;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (BOOL)shouldPresentInFullscreen;
- (void)dealloc;
- (void)_updateContainerFinalFrameForNonExcisedSearchBar;
- (void)_transitionToWillBegin;
- (void)setContentVisible:(BOOL)a0;
- (void)_transitionFromDidEnd;
- (void)_dismissalTransitionWithSearchBarNotHostedByNavBarWillBegin;
- (void)containerViewWillLayoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (void)_placeSearchBarBackIntoOriginalContext;
- (id)_presentationControllerForTraitCollection:(id)a0;
- (id)_createVisualStyleForProvider:(id)a0;
- (void)_transitionFromWillBegin;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)presentationTransitionWillBegin;
- (id)_presentedViewControllerForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)_transitionToPresentationController:(id)a0 withTransitionCoordinator:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_presentationTransitionWithSearchBarNotHostedByNavBarDidEnd:(BOOL)a0;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (void)showBackgroundObscuringView;

@end
