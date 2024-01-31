@class GKAuthenticateHostViewController, NSError, NSString;

@interface GKHostedAuthenticateViewController : UIViewController <GKExtensionParentViewControllerProtocol, GKAuthenticateViewController>

@property (retain, nonatomic) GKAuthenticateHostViewController *extensionHostViewController;
@property (nonatomic) long long mode;
@property (copy, nonatomic) id /* block */ dismissCompletionHandler;
@property (nonatomic, getter=isRotationLocked) BOOL rotationLocked;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ remoteViewReadyHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL disablesSignIn;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (BOOL)shouldAutorotate;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setModalPresentationStyle:(long long)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)showPasswordChangeAlertWithURL:(id)a0;
- (void)_setupChildViewController;
- (void)_setupExtensionHostViewController;
- (void)continueWithMode:(long long)a0;
- (void)extensionDidFinishWithError:(id)a0;
- (void)finishAuthenticationWithError:(id)a0;
- (void)onboardingFlowDidSignOut;

@end
