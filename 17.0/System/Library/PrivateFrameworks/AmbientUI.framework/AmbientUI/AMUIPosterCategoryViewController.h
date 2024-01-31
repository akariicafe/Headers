@class UIView, NSString, NSArray, PRSPosterConfiguration, AMUISwitcherViewController, AMUIInlineAuthenticationViewController, NSDictionary, AMUIDataLayerViewController, NSMutableArray, AMUIPosterSwitcherSettings, AMUIPosterAppearanceTransitionCoordinator, AMUICountingSentinel;
@protocol AMUIDateProviding, BSInvalidatable, AMUIPosterCategoryViewControllerDelegate;

@interface AMUIPosterCategoryViewController : UIViewController <AMUIInlineAuthenticationViewControllerDelegate, AMUISwitcherDataSource, AMUISwitcherDelegate, AMUISwitcherLayout, AMUIPosterCategorySwitcherItemDelegate, AMUIDataLayerViewControllerDelegate, AMUIAmbientViewControlling> {
    AMUIInlineAuthenticationViewController *_inlineAuthenticationViewController;
    AMUISwitcherViewController *_posterSwitcherViewController;
    AMUIDataLayerViewController *_dataLayerViewController;
    NSArray *_items;
    UIView *_contentWrapperView;
    NSMutableArray *_availableInstanceIdentifiers;
    AMUIPosterSwitcherSettings *_settings;
    AMUIPosterAppearanceTransitionCoordinator *_photosCoordinator;
    AMUICountingSentinel *_lazy_unsettledSentinel;
    id<BSInvalidatable> _unsettledAssertion;
}

@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIView *backgroundView;
@property (copy, nonatomic) NSArray *configurations;
@property (weak, nonatomic) id<AMUIPosterCategoryViewControllerDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *visibleConfigurations;
@property (readonly, nonatomic) PRSPosterConfiguration *mostVisibleConfiguration;
@property (retain, nonatomic) id<AMUIDateProviding> dateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long switcherAxis;
@property (readonly, nonatomic, getter=isCircular) BOOL circular;
@property (readonly, nonatomic) double spacing;
@property (readonly, nonatomic) NSDictionary *activeConfigurationMetadata;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (id)cancelTouchesForCurrentEventInHostedContent;
- (void)viewDidLoad;
- (void)invalidate;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)handleDismiss;
- (id)createUnlockRequestForViewController:(id)a0;
- (void)requestUnlockForViewController:(id)a0 withRequest:(id)a1 completion:(id /* block */)a2;
- (id)posterCategorySwitcherItemRequestInstanceIdentifier:(id)a0 preferring:(id)a1;
- (void)_addInlineAuthenticationViewWithUnlockDestination:(id)a0;
- (id)_currentAppearanceTransitionCoordinator;
- (void)_dismissInlineAuthenticationViewAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)_unsettledSentinel;
- (void)_updateInlineAuthenticationViewLayout;
- (id)ambientDefaultsForViewController:(id)a0;
- (void)authenticationViewController:(id)a0 didAuthenticateWithSuccess:(BOOL)a1;
- (void)authenticationViewController:(id)a0 setDidSetPasscodeVisible:(BOOL)a1;
- (id)defaultWidgetDescriptorStacksForViewController:(id)a0;
- (void)noteAmbientViewControllingDelegateDidUpdate;
- (void)posterCategorySwitcherItem:(id)a0 didRequestInlineAuthenticationWithUnlockDestination:(id)a1;
- (void)posterCategorySwitcherItem:(id)a0 relinquishInstanceIdentifier:(id)a1;
- (void)posterCategorySwitcherItem:(id)a0 setChromeVisibility:(BOOL)a1 withAnimationSettings:(id)a2 animationFence:(id)a3;
- (BOOL)posterCategorySwitcherItemHasInlineAuthenticated:(id)a0;
- (BOOL)posterCategorySwitcherItemIsAuthenticated:(id)a0;
- (id)posterCategorySwitcherItemPrototypeSettings:(id)a0;
- (void)switcher:(id)a0 didSettleOnItem:(id)a1 interactive:(BOOL)a2;
- (id)switcher:(id)a0 itemAtIndex:(long long)a1;
- (void)switcher:(id)a0 transitionDidBegin:(id)a1;
- (void)switcher:(id)a0 transitionDidEnd:(id)a1;
- (void)switcher:(id)a0 transitionDidUpdate:(id)a1 withProgress:(double)a2;
- (void)switcher:(id)a0 transitioningFromItem:(id)a1 toItem:(id)a2 progress:(double)a3;
- (void)switcher:(id)a0 updateItem:(id)a1 view:(id)a2 forPresentationProgress:(double)a3;
- (long long)switcherNumberOfItems:(id)a0;
- (BOOL)updatePosterConfiguration:(id)a0 withAnimationSettings:(id)a1;
- (void)viewController:(id)a0 didUpdateActiveConfigurationMetadata:(id)a1;
- (void)viewControllerWillBeginConfiguration:(id)a0;
- (void)viewControllerWillBeginShowingTemporaryOverlay:(id)a0;
- (void)viewControllerWillEndConfiguration:(id)a0;
- (void)viewControllerWillEndShowingTemporaryOverlay:(id)a0;
- (id)widgetHostManagerForViewController:(id)a0;

@end
