@class OBLinkTrayButton, HUPersonalRequestsEditorItemManager, OBTrayButton, NSArray, NSString, HMHome;
@protocol HUConfigurationViewControllerDelegate;

@interface HUHomeAssistantDeviceLanguageSetupViewController : HUImageOBWelcomeController <HUOnboardingWarningPresenter, HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController>

@property (retain, nonatomic) OBTrayButton *continueButton;
@property (retain, nonatomic) OBLinkTrayButton *customizeButton;
@property (retain, nonatomic) HUPersonalRequestsEditorItemManager *prEditorItemManager;
@property (retain, nonatomic) NSArray *supportedVoiceRecognitionLanguages;
@property (retain, nonatomic) NSArray *homeAssistantDevicesHavingLanguageMismatch;
@property (retain, nonatomic) HMHome *home;
@property (nonatomic) BOOL maxNumberOfVoicesReached;
@property (nonatomic) BOOL shouldSetMultiUserIsEnabled;
@property (nonatomic) NSString *titleString;
@property (nonatomic) NSString *detailsString;
@property (nonatomic) NSString *continueButtonString;
@property (nonatomic) SEL continueSelector;
@property (nonatomic) NSString *customizeButtonString;
@property (nonatomic) SEL customizeSelector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (void)_changeLanguage;
- (void)_cancelLanguageSetup;
- (void)_cancelLanguageSetupWithoutWarningUser;
- (void)_checkForiCloudSiriEnabledAndCompleteSetup;
- (void)_completeLanguageSetup;
- (void)_setupPersonalRequestsItemInfrastructure;
- (void)_turnOffPersonalRequests;
- (id)hu_preloadContent;
- (BOOL)needsToWaitForPreload;
- (Class)onboardingFlowClass;
- (void)userTappedCancelFromWarning;
- (void)userTappedContinueFromWarning;

@end
