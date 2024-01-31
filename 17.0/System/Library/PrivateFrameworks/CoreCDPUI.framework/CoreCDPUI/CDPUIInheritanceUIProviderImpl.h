@class NSString, OBNavigationController, AKInheritanceAccessKey, UIViewController;

@interface CDPUIInheritanceUIProviderImpl : NSObject <CDPUIManualAccessCodeEntryViewControllerDelegate, CDPUIInheritanceAccessCodeScannerViewDelegate, CDPUIBeneficiaryWelcomeViewControllerDelegate, CDPUIInheritanceUIProvider>

@property (retain, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) OBNavigationController *navigationController;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) AKInheritanceAccessKey *accessKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPresentingViewController:(id)a0;
- (void).cxx_destruct;
- (id)_contentStackView;
- (id)_cameraView;
- (void)manualAccessCodeEntryDidCancel:(id)a0;
- (id)_buildViewController;
- (id)_cameraLabel;
- (void)_dismissViewControllerWithAccessKey:(id)a0 error:(id)a1;
- (void)_keyOptionsTapped:(id)a0;
- (void)_presentWelcomePage;
- (void)_showEnterCodeLaterAlert;
- (void)_showManualCodeEntryPage;
- (void)_skipTapped:(id)a0;
- (void)accessCodeScanner:(id)a0 didFailToStarCapture:(id)a1;
- (BOOL)accessCodeScanner:(id)a0 didScanCode:(id)a1;
- (BOOL)manualAccessCodeEntry:(id)a0 shouldFinishWithAccessCode:(id)a1;
- (void)promptForAccessCodeForAccessKey:(id)a0 completion:(id /* block */)a1;
- (void)welcomeViewController:(id)a0 didCompleteWithError:(id)a1;

@end
