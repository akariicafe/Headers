@class NSDictionary;

@interface AppleIDSetupUI.SignInOptionChildSetupController : NSObject <AISChildSetupPresenterDelegate> {
    void /* unknown type, empty encoding */ signInSettings;
    void /* unknown type, empty encoding */ childFlowPresenter;
    void /* unknown type, empty encoding */ aidaOwnersManager;
    void /* unknown type, empty encoding */ aidaSignInController;
    void /* unknown type, empty encoding */ cdpUIController;
    void /* unknown type, empty encoding */ navController;
}

- (void)setupPerformAIDASignInWith:(NSDictionary *)a0 completion:(void (^)(BOOL))a1;
- (void)childSetupPresenter:(id)a0 didCompleteWithResult:(id)a1;
- (void)childSetupPresenter:(id)a0 didFail:(id)a1;
- (void)setupLocationServicesWithCompletion:(void (^)(BOOL))a0;
- (void)setupPasscodeWithCompletion:(void (^)(BOOL))a0;
- (id)init;
- (void).cxx_destruct;

@end
