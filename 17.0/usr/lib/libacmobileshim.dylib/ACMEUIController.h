@class UIColor, NSString, NSMutableSet, UIImage, ACMAppleConnectImplComponents, UIView;
@protocol ACMUIControllerDelegate, ACMBaseAuthenticationRequest, ACMSignInDialogProtocol;

@interface ACMEUIController : NSObject <ACMSignInDialogDelegate, ACMExternalUIControllerProtocol>

@property (retain, nonatomic) id<ACMSignInDialogProtocol> signInDialog;
@property (retain, nonatomic) NSMutableSet *shownAlerts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long signInStyle;
@property (retain, nonatomic) UIImage *logoImage;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSString *accountNameFieldPlaceholder;
@property (nonatomic) struct CGPoint { double x; double y; } widgetPosition;
@property (retain, nonatomic) NSString *widgetAccountLabel;
@property (retain, nonatomic) id signInButton;
@property (retain, nonatomic) id cancelButton;
@property (nonatomic) long long widgetPasswordReturnKeyType;
@property (nonatomic) BOOL shouldAuthenticateOnUserInput;
@property (nonatomic) NSString *password;
@property (readonly) ACMAppleConnectImplComponents *components;
@property (nonatomic) id<ACMUIControllerDelegate> delegate;
@property (nonatomic, getter=isWidgetEnabled) BOOL widgetEnabled;
@property (readonly, nonatomic) BOOL isWidgetShown;
@property (retain, nonatomic) id<ACMBaseAuthenticationRequest> request;
@property (readonly) unsigned long long signInDialogContentStyle;
@property (readonly) UIView *managerApprovalDialogSummaryView;

- (id)init;
- (void)dealloc;
- (void)alertView:(id)a0 didDismissWithButtonIndex:(long long)a1;
- (void)onSignInCancel:(id)a0;
- (BOOL)useCustomWidget;
- (void)cancelSignInWidget;
- (id)createAlertDialog;
- (id)createCustomWidget;
- (id)createStandardWidget;
- (Class)customSignInClass;
- (void)hideSignInWidgetWithParentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (Class)iTunesSignInClass;
- (BOOL)isWidgetShown;
- (void)onIForgot:(id)a0;
- (void)onManageAppleID:(id)a0;
- (void)onSignIn:(id)a0;
- (void)showAlertWithAlertMessage:(id)a0 buttonTitle:(id)a1 cancelButtonTitle:(id)a2 errorTag:(long long)a3;
- (void)showSignInWidgetWithParentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)signInDialogDidBecomeDisabled;
- (void)signInDialogDidBecomeEnabled;
- (void)signInDialogWillBecomeDisabled;
- (void)signInDialogWillBecomeEnabled;
- (Class)signInWidgetClass;
- (Class)standardSignInClass;
- (BOOL)useAlertView;

@end
