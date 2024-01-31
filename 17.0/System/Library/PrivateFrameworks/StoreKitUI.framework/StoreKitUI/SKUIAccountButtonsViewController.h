@class SKUILink, SKUIClientContext, NSString, SKUIAccountButtonsView;
@protocol SKUIAccountButtonsDelegate;

@interface SKUIAccountButtonsViewController : UIViewController <UINavigationControllerDelegate> {
    SKUIAccountButtonsView *_buttonsView;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id<SKUIAccountButtonsDelegate> delegate;
@property (retain, nonatomic) SKUILink *ECommerceLink;
@property (nonatomic, getter=isGiftingHidden) BOOL giftingHidden;
@property (nonatomic, getter=isTermsAndConditionsHidden) BOOL termsAndConditionsHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_accountStoreChangedNotification:(id)a0;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (id)_buttonsView;
- (void)_ecommerceLinkAction:(id)a0;
- (void)_giftAction:(id)a0;
- (void)_openIForgot;
- (void)_redeemButtonAction:(id)a0;
- (void)_reloadAccountsButton;
- (void)_reloadRestrictions;
- (void)_restrictionsChangedNotification:(id)a0;
- (void)_sendDidSignIn;
- (void)_signInButtonAction:(id)a0;
- (void)_signOut;
- (void)_termsAndConditionsButtonAction:(id)a0;
- (void)_usernameButtonAction:(id)a0;
- (void)_viewAppleID;

@end
