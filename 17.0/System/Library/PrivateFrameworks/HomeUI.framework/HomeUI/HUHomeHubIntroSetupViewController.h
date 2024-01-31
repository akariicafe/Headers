@class OBBoldTrayButton, OBLinkTrayButton, HFHomeKitDispatcher, NSString;
@protocol HUConfigurationViewControllerDelegate;

@interface HUHomeHubIntroSetupViewController : HUImageOBWelcomeController <HUConfigurationViewControllerFlow, HUConfigurationViewController>

@property (retain, nonatomic) OBBoldTrayButton *commitButton;
@property (retain, nonatomic) OBLinkTrayButton *cancelButton;
@property (nonatomic) BOOL moreThanOneHome;
@property (nonatomic) BOOL needsToPresentUpgradeFailedAlert;
@property (nonatomic) BOOL isViewVisible;
@property (retain, nonatomic) HFHomeKitDispatcher *homeKitDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_cancelFlow;
- (void)_commitOrContinue;
- (id)_commitOrContinueButtonTitle;
- (BOOL)_limitToNonScrollingContentHeight;
- (void)_presentUpgradeFailedAlert:(id)a0 message:(id)a1 retryTitle:(id)a2 retryBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (id)initWithHomes:(id)a0;
- (Class)onboardingFlowClass;

@end
