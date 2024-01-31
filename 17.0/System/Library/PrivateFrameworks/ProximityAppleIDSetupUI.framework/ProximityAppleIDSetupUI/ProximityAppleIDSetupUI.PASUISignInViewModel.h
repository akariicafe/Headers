@class UIImage, NSAttributedString;

@interface ProximityAppleIDSetupUI.PASUISignInViewModel : NSObject <AAUISignInViewControllerDelegate> {
    void /* unknown type, empty encoding */ step;
    void /* unknown type, empty encoding */ contextProvider;
    void /* unknown type, empty encoding */ _viewControllerProvider;
    void /* unknown type, empty encoding */ continueSignInAction;
}

@property (nonatomic, readonly) NSAttributedString *attributedTitle;
@property (nonatomic, readonly) NSAttributedString *attributedMessage;
@property (nonatomic, readonly) UIImage *headerImage;

- (id)authenticationContext;
- (void)signInViewController:(id)a0 didCompleteWithAuthenticationResults:(id)a1;
- (void)signInViewControllerDidCancel:(id)a0;
- (void)willAuthenticateWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
