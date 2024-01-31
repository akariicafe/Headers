@class UIView, NSString, NSArray, PRSPosterConfiguration, AMUIPosterSwitcherSettings, AMUISwitcherViewController, NSDictionary, AMUICountingSentinel;
@protocol AMUIPosterSwitcherViewControllerDelegate, BSInvalidatable, AMUIDateProviding;

@interface AMUIPosterSwitcherViewController : UIViewController <AMUISwitcherDataSource, AMUISwitcherDelegate, AMUIPosterCategoryViewControllerDelegate, AMUISwitcherLayout, AMUIAmbientViewControlling> {
    AMUISwitcherViewController *_extensionSwitcherViewController;
    NSArray *_items;
    AMUIPosterSwitcherSettings *_settings;
    AMUICountingSentinel *_lazy_unsettledSentinel;
    id<BSInvalidatable> _unsettledAssertion;
}

@property (copy, nonatomic) NSArray *configurations;
@property (readonly, nonatomic) PRSPosterConfiguration *mostVisibleConfiguration;
@property (nonatomic, getter=isSwitchingEnabled) BOOL switchingEnabled;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) id<AMUIPosterSwitcherViewControllerDelegate> delegate;
@property (retain, nonatomic) id<AMUIDateProviding> dateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long switcherAxis;
@property (readonly, nonatomic, getter=isCircular) BOOL circular;
@property (readonly, nonatomic) double spacing;
@property (readonly, nonatomic) NSDictionary *activeConfigurationMetadata;

- (void)dealloc;
- (void)viewDidLoad;
- (void)invalidate;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (BOOL)handleDismiss;
- (id)createUnlockRequestForViewController:(id)a0;
- (void)requestUnlockForViewController:(id)a0 withRequest:(id)a1 completion:(id /* block */)a2;
- (id)_switcherItemForConfiguration:(id)a0;
- (id)_unsettledSentinel;
- (id)ambientDefaultsForViewController:(id)a0;
- (id)defaultWidgetDescriptorStacksForViewController:(id)a0;
- (void)noteAmbientViewControllingDelegateDidUpdate;
- (void)posterCategoryViewController:(id)a0 didSetInlineAuthenticationViewVisible:(BOOL)a1;
- (void)posterCategoryViewController:(id)a0 didSetPasscodeVisible:(BOOL)a1;
- (void)posterCategoryViewController:(id)a0 didSettleOnConfiguration:(id)a1 interactive:(BOOL)a2;
- (id)posterCategoryViewControllerAuthenticationHandler:(id)a0;
- (void)posterCategoryViewControllerDidSuccessfulyCompleteInlineAuthentication:(id)a0;
- (BOOL)posterCategoryViewControllerHasInlineAuthenticated:(id)a0;
- (BOOL)posterCategoryViewControllerIsAuthenticated:(id)a0;
- (void)switcher:(id)a0 didSettleOnItem:(id)a1 interactive:(BOOL)a2;
- (id)switcher:(id)a0 itemAtIndex:(long long)a1;
- (void)switcher:(id)a0 transitionDidBegin:(id)a1;
- (void)switcher:(id)a0 transitionDidEnd:(id)a1;
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
