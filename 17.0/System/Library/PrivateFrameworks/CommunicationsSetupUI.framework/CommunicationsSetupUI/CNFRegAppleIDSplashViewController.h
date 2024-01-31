@class CNFRegController;

@interface CNFRegAppleIDSplashViewController : PSAppleIDSplashViewController

@property (retain) CNFRegController *regController;
@property long long serviceType;
@property BOOL showBusyUIOnAppearance;

+ (id)_inProgressRegisteringNonPhoneAccountForService:(id)a0;
+ (BOOL)shouldShowSplashViewForService:(id)a0 inProgressRegisteringNonPhoneAccount:(id *)a1;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (id)serviceDescription;
- (void)viewDidLoad;
- (id)serviceName;
- (void)_applicationDidResume:(id)a0;
- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)navigationItem;
- (void)handleAuthCompletionWithResults:(id)a0;
- (id)serviceFooter;
- (id)serviceIcon;
- (void)willBeginAuthWithContext:(id)a0;
- (id)_imService;
- (id)_iCloudUserName;
- (void)_cnfSignInWithUsername:(id)a0 password:(id)a1;
- (void)_completeIfAccountIsAlreadyRegistered;
- (void)_handleRegistarResults:(BOOL)a0 alertController:(id)a1;
- (void)_showSettingsController;
- (void)continueRegisteringAccount:(id)a0;

@end
