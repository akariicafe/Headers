@class SBSearchPresenter, NSString, UIScrollView, SBCoverSheetSpotlightViewController, _UILegibilitySettings;
@protocol SBCoverSheetSpotlightPresenterDelegate;

@interface SBCoverSheetSpotlightPresenter : NSObject <SBCoverSheetSpotlightViewControllerDelegate, SBSearchPresenterDelegate, SBSpotlightPresentableViewControllerDelegate, CSCoverSheetSpotlightPresenting> {
    id<SBCoverSheetSpotlightPresenterDelegate> _delegate;
    UIScrollView *_scrollView;
    SBCoverSheetSpotlightViewController *_spotlightViewController;
    SBSearchPresenter *_searchPresenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double strength;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (id)searchPresentablesForPresenter:(id)a0;
- (void)spotlightPresentableViewControllerShouldDismiss:(id)a0;
- (void)searchPresenterWillPresentSearch:(id)a0 animated:(BOOL)a1;
- (void)searchPresenterWillDismissSearch:(id)a0 animated:(BOOL)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1;
- (double)searchTopOffsetForSearchPresenter:(id)a0;
- (void)dismissSpotlightAnimated:(BOOL)a0;
- (void)presentSpotlightAnimated:(BOOL)a0;
- (BOOL)searchPresenterCanPresent:(id)a0;
- (id)backgroundViewForSpotlightPresentableViewController:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)_setUpStartingScrollOffsetWithScrollView:(id)a0;
- (void)coverSheetSpotlightViewControllerAddContentView:(id)a0;
- (void)coverSheetSpotlightViewControllerRemoveContentView:(id)a0;
- (void)coverSheetSpotlightViewControllerShouldDismiss:(id)a0 animated:(BOOL)a1;
- (BOOL)isSpotlightPresented;

@end
