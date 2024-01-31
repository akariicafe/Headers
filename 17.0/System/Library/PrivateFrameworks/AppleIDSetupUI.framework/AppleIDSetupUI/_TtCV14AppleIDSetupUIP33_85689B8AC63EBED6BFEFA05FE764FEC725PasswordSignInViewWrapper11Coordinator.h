@interface _TtCV14AppleIDSetupUIP33_85689B8AC63EBED6BFEFA05FE764FEC725PasswordSignInViewWrapper11Coordinator : NSObject <AAUISignInControllerDelegate, AAUICDPSignInDelegate> {
    void /* unknown type, empty encoding */ _navigationPath;
    void /* unknown type, empty encoding */ settings;
    void /* unknown type, empty encoding */ childSetupController;
}

- (id)init;
- (void).cxx_destruct;
- (void)signInController:(id)a0 didCompleteWithOperationsResults:(id)a1;
- (void)signInControllerDidCancel:(id)a0;
- (void)signInControllerDidSelectChildSignIn:(id)a0;
- (void)signInControllerDidSkip:(id)a0;

@end
