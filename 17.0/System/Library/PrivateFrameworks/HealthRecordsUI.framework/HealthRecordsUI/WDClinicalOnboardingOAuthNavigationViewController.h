@class HRProfile, WDClinicalGatewayProxy, HKNavigationController, WDClinicalAccountOnboardingSession, HKClinicalProvider, HKClinicalAccount;
@protocol ClinicalSharingOnboardingDelegate;

@interface WDClinicalOnboardingOAuthNavigationViewController : HKNavigationController <HRClinicalSharingOnboardingDelegate>

@property (readonly, nonatomic) HRProfile *profile;
@property (readonly, nonatomic) WDClinicalAccountOnboardingSession *onboardingSession;
@property (readonly, copy, nonatomic) HKClinicalAccount *onboardingAccount;
@property (weak, nonatomic) id<ClinicalSharingOnboardingDelegate> onboardingDelegate;
@property (retain, nonatomic) HKClinicalProvider *providerToPresent;
@property (retain, nonatomic) WDClinicalGatewayProxy *gatewayProxyToTry;
@property (nonatomic) BOOL showProviderNotFound;
@property (nonatomic) BOOL onboardingSourceIsDeepLink;
@property (nonatomic) HKNavigationController *onboardingTileNavigationViewController;

- (id)init;
- (void)viewDidLoad;
- (id)keyCommands;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_dismissViewController;
- (void)_clearLoginBusyIndicator;
- (id)_createInitialRootViewController;
- (void)_mainQueue_completionNotificationHandler:(id)a0;
- (void)beginListeningToNotification;
- (void)completionNotificationHandler:(id)a0;
- (void)createRootViewController;
- (void)didCompleteOnboardingFor:(id)a0;
- (void)didLoginToAccount:(id)a0;
- (void)dismissWithAccount:(id)a0 error:(id)a1 animated:(BOOL)a2;
- (id)initWithContext:(long long)a0 onboardingOptions:(unsigned long long)a1 profile:(id)a2 existingAccount:(id)a3;
- (id)initWithSession:(id)a0 existingAccount:(id)a1;
- (void)stopListeningToNotification;

@end
