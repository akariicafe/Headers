@class NSString, STHeroWelcomeController, OBWelcomeController, NSObject, _TtC20ScreenTimeSettingsUI19STEyeReliefMicaView;
@protocol STRootViewModelCoordinator;

@interface STEyeReliefOnboardingController : OBNavigationController <STRestrictionsPINControllerDelegate>

@property (retain, nonatomic) STHeroWelcomeController *primaryWelcomeViewController;
@property (retain, nonatomic) OBWelcomeController *secondaryWelcomeViewController;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly) NSObject<STRootViewModelCoordinator> *coordinator;
@property (readonly, nonatomic) _TtC20ScreenTimeSettingsUI19STEyeReliefMicaView *micaView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)play;
- (void)viewDidLayoutSubviews;
- (id)initWithCoordinator:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)didCancelEnteringPIN;
- (void)_presentationControllerDidDismiss:(id)a0;
- (void)_continueButtonPressed;
- (void)didAcceptEnteredPIN;
- (void)presentOverViewController:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleResponse:(long long)a0;
- (void)_cancelOnboarding;
- (id)_createEyeReliefEDUController;
- (id)_createInitialViewControllerWithCoordinator:(id)a0;
- (id)_createPINController;
- (id)_createSecondaryWelcomeController;
- (void)_dismissOnboardingAndEnable;
- (BOOL)validatePIN:(id)a0 forPINController:(id)a1;

@end
