@class NSString, UIPresentationController, UIView, UIDimmingView;
@protocol UIViewControllerTransitionCoordinator, _UISearchControllerPresenting;

@interface _UISearchPresentationAssistant : NSObject <UIDimmingViewDelegate> {
    UIPresentationController *_searchPresentationController;
    UIView *_searchBarContainerView;
    UIDimmingView *_dimmingView;
    BOOL _isFormSheetPresentation;
}

@property (nonatomic) BOOL presentationWasAnimated;
@property (nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property (retain, nonatomic) id<UIViewControllerTransitionCoordinator> transitioningToSizeCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)searchBarContainerView;
- (void)removeContainerViewFromSuperview;
- (BOOL)shouldAccountForStatusBar;
- (BOOL)_statusBarPreferredHidden;
- (void)dealloc;
- (id)dimmingView;
- (BOOL)searchBarToBecomeTopAttached;
- (double)resultsControllerContentOffset;
- (void)ensureAppropriatelySizedSearchBar:(id)a0;
- (double)statusBarAdjustment;
- (BOOL)_statusBarPreferredHiddenForInterfaceOrientation:(long long)a0;
- (struct CGSize { double x0; double x1; })updateSearchBarContainerFrame;
- (double)_statusBarHeightChangeDueToRotation;
- (id)_searchControllerPresenting;
- (BOOL)searchBarWillResizeForScopeBar;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })optimalFrameForSearchBar:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_containerFrame;
- (void)dimmingViewWasTapped:(id)a0;
- (id)_searchBarContainerSuperview;
- (BOOL)presentationIsPopoverToOverFullScreenAdaptation;
- (BOOL)_currentTransitionIsRotating;
- (id)locateNavigationController;
- (id)initWithSearchPresentationController:(id)a0;

@end
