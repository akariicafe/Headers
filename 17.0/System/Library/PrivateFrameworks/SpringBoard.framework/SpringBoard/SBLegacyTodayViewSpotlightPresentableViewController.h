@class UIScrollView, NSString, NSArray, SBHHomePullToSearchSettings, SPUISearchBarController, _UIPortalView, SBSpotlightMultiplexingViewController, NSLayoutConstraint, NSMutableSet, MTMaterialView, SBFFeatherBlurView;
@protocol SBLegacyTodayViewSpotlightPresentableViewControllerDelegate;

@interface SBLegacyTodayViewSpotlightPresentableViewController : UIViewController <SPUIRemoteSearchViewDelegate, SBSearchPresentable>

@property (retain, nonatomic) SBFFeatherBlurView *featherBlurView;
@property (retain, nonatomic) NSLayoutConstraint *featherBlurHeightConstraint;
@property (retain, nonatomic) NSArray *searchBarGradientMaskLayers;
@property (retain, nonatomic) MTMaterialView *searchBackdropView;
@property (retain, nonatomic) _UIPortalView *searchBarPortalView;
@property (retain, nonatomic) NSLayoutConstraint *searchBarViewTopConstraint;
@property (retain, nonatomic) NSMutableSet *searchBarPortalRequirementReasons;
@property (weak, nonatomic) id<SBLegacyTodayViewSpotlightPresentableViewControllerDelegate> delegate;
@property (readonly, nonatomic) SBSpotlightMultiplexingViewController *spotlightMultiplexingViewController;
@property (readonly, nonatomic) SPUISearchBarController *searchBarViewController;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double topOffset;
@property (nonatomic) double maxPresentationOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SBHHomePullToSearchSettings *searchTransitionSettings;

- (void)dismissSearchView;
- (id /* block */)willBeginModifyingPresentationProgressForState:(long long)a0 animated:(BOOL)a1 needsInitialLayout:(BOOL *)a2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)_sharedRemoteSearchViewController;
- (void)_beginRequiringSearchBarPortalViewForReason:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_endRequiringSearchBarPortalViewForReason:(id)a0;
- (void)updatePresentationProgress:(double)a0 withOffset:(double)a1 velocity:(double)a2 presentationState:(long long)a3;
- (void)_setUpSearchBar;
- (void)_setUpFeatherBackgroundMatchMoveAnimations;
- (void)_setUpSearchBackdrop;
- (void)_setUpSearchBackdropMatchMoveAnimation;
- (void)_updateMaskLayers;
- (id)initWithSpotlightMultiplexingViewController:(id)a0 searchBarViewController:(id)a1 scrollView:(id)a2;

@end
