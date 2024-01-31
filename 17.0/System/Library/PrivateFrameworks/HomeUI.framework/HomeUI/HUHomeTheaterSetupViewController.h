@class HMHome, NSString, OBLinkTrayButton, OBTrayButton, HMAccessory, UIImageView, HUSimpleItemModuleTableViewController, HUHomeTheaterAudioItemModule, NSLayoutConstraint;
@protocol HUConfigurationViewControllerDelegate;

@interface HUHomeTheaterSetupViewController : OBWelcomeController <HFItemManagerDelegate, HUItemModuleControllerHosting, HUHomeTheaterAudioItemModuleOnboardingDelegate, HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController>

@property (retain, nonatomic) HMAccessory *accessory;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) OBTrayButton *useHomeTheaterButton;
@property (retain, nonatomic) OBLinkTrayButton *notNowButton;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) HUSimpleItemModuleTableViewController *tableViewController;
@property (weak, nonatomic) HUHomeTheaterAudioItemModule *tableViewControllerModule;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (retain, nonatomic) NSLayoutConstraint *tableViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewHeightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;

- (void)updateViewConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)_updateHeightConstraints;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (void)_activateHomeTheater:(id)a0;
- (void)_doNotActivateHomeTheater:(id)a0;
- (void)homeTheaterItemModuleDidChangeSelectedDestination:(id)a0;
- (id)hu_preloadContent;
- (id)initWithAppleTVAccessory:(id)a0 inHome:(id)a1;
- (id)moduleController:(id)a0 dismissViewControllerForRequest:(id)a1;
- (id)moduleController:(id)a0 presentViewControllerForRequest:(id)a1;
- (id)moduleController:(id)a0 textFieldForVisibleItem:(id)a1;
- (Class)onboardingFlowClass;

@end
