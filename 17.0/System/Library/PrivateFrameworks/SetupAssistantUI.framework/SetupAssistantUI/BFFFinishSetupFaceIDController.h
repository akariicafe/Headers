@class BFFFinishSetupFaceIDViewController;

@interface BFFFinishSetupFaceIDController : BFFFinishSetupBiometricAndPasscodeController {
    BFFFinishSetupFaceIDViewController *_viewController;
}

+ (id)finishSetupFaceIDController;

- (id)init;
- (void).cxx_destruct;
- (id)createViewControllerWithPasscode:(id)a0 completion:(id /* block */)a1;
- (void)performExtendedInitializationWithCompletion:(id /* block */)a0;

@end
