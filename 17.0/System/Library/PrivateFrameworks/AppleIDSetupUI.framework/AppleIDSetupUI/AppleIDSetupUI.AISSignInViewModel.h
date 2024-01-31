@class UIImage;

@interface AppleIDSetupUI.AISSignInViewModel : NSObject <AAUISignInViewControllerDelegate> {
    void /* unknown type, empty encoding */ contextProvider;
    void /* unknown type, empty encoding */ step;
    void /* unknown type, empty encoding */ selectedMember;
}

@property (nonatomic, readonly) UIImage *headerImage;

- (id)authenticationContext;
- (void)signInViewController:(id)a0 didCompleteWithAuthenticationResults:(id)a1;
- (void)signInViewControllerDidCancel:(id)a0;
- (void)willAuthenticateWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
