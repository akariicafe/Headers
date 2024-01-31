@class AAUICDPHelper, NSString, PSSetupController, AAUIDevicePINController;
@protocol AAUIPasscodeValidationDelegate;

@interface AAUIPasscodeValidateController : NSObject <DevicePINControllerDelegate> {
    AAUICDPHelper *_helper;
    PSSetupController *_navController;
    AAUIDevicePINController *_pinController;
    id /* block */ _passcodeValidationCompletion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _completionLock;
}

@property (weak, nonatomic) id<AAUIPasscodeValidationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stingrayControllerWithPresenter:(id)a0;
+ (id)stingrayControllerWithPresenter:(id)a0 forceInline:(BOOL)a1;

- (void)didAcceptEnteredPIN:(id)a0;
- (void)dealloc;
- (id)_presentingViewController;
- (void).cxx_destruct;
- (void)didCancelEnteringPIN;
- (void)devicePINController:(id)a0 didAcceptSetPIN:(id)a1;
- (void)devicePINController:(id)a0 didFailToSetPinWithError:(id)a1;
- (void)_setupNavController;
- (void)_showPasscodePromptWithMode:(int)a0;
- (id)_specifierForMode:(int)a0;
- (void)createPasscodeStateWithCompletion:(id /* block */)a0;
- (void)devicePINController:(id)a0 canCancelWithCompletion:(id /* block */)a1;
- (void)dismissFlowWithLocalSecret:(id)a0 error:(id)a1;
- (id /* block */)passcodeValidationCompletion;
- (void)setPasscodeValidationCompletion:(id /* block */)a0;
- (void)validatePasscodeStateWithCompletion:(id /* block */)a0;
- (void)validateStingrayPasscodeStateWithCompletion:(id /* block */)a0;

@end
