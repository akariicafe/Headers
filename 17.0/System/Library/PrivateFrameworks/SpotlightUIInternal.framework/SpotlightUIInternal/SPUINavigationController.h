@class SPUISearchViewController, NSString, SearchUIBackgroundColorView, SPUINavigationBar;
@protocol SPUINavigationControllerDelegate, SPUIUnifiedFieldNavigationDelegate;

@interface SPUINavigationController : UINavigationController <UINavigationControllerDelegate, SPUISearchViewControllerSizingDelegate, SearchUICardViewDelegate, SearchUIBackgroundColorViewProtocol, SearchUIBackgroundColorDelegate>

@property (retain) SPUISearchViewController *searchViewController;
@property (readonly, nonatomic) SPUINavigationBar *navigationBar;
@property (retain, nonatomic) SearchUIBackgroundColorView *backgroundView;
@property (retain, nonatomic) SearchUIBackgroundColorView *transitioningBackgroundView;
@property BOOL isFirstInitialization;
@property (readonly) double contentHeight;
@property (nonatomic) long long navigationMode;
@property (weak, nonatomic) id<SPUINavigationControllerDelegate> sizingDelegate;
@property (weak, nonatomic) id<SPUIUnifiedFieldNavigationDelegate> unifiedFieldDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewControllerWithBackgroundColorForViewController:(id)a0;
+ (id)backgroundColorForViewController:(id)a0;

- (id)initWithRootViewController:(id)a0;
- (void)resetSearchFieldContentWithSearchToken:(id)a0 text:(id)a1 wantsBackButton:(BOOL)a2 transitionCoordinator:(id)a3;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)cardViewController:(id)a0 preferredContentSizeDidChange:(struct CGSize { double x0; double x1; })a1 animated:(BOOL)a2;
- (id)init;
- (void)didInvalidateSizeAnimated:(BOOL)a0;
- (void)updateFooterViewForViewController:(id)a0;
- (id)viewContainingContent;
- (void)updateBackgroundColorWithViewControllerToBeShown:(id)a0;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)setContentHeight:(double)a0 animated:(BOOL)a1;
- (id)initWithSearchViewController:(id)a0;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (double)contentHeightIncludingSearchView;
- (void)updateFooterViewsIfNecessary;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (double)heightOfNavigationBar;
- (double)contentHeightIncludingCardViewController;
- (void)didUpdateBackgroundColorForViewController:(id)a0;
- (void)updateSearchFieldForViewController:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)generateFooterViewIfNeeded;
- (void)applyCardHeightAnimated:(BOOL)a0;
- (void)tapToRadarPressed;
- (void)updateBackButton:(BOOL)a0;

@end
