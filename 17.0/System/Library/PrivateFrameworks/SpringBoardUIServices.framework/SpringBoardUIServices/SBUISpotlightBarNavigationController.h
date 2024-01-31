@class _UILegibilitySettings, NSString, SBSearchBar, UIViewController;
@protocol SBUISearchBarControlling;

@interface SBUISpotlightBarNavigationController : UINavigationController <UINavigationControllerDelegate>

@property (readonly) SBSearchBar *navigationBar;
@property (retain, nonatomic) UIViewController<SBUISearchBarControlling> *searchBarViewController;
@property (nonatomic, getter=isPullingToSearch) BOOL pullingToSearch;
@property (getter=isNavigationBarBottomTrailingCornerRounded) BOOL navigationBarBottomTrailingCornerRounded;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithRootViewController:(id)a0 searchBarViewController:(id)a1;
- (void)setNavigationBarBlurProgress:(double)a0 animated:(BOOL)a1;

@end
