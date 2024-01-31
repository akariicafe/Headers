@class UIColor, ACM2SVCodeVerificationViewController, NSString, ACM2SVTrustedDevicesViewController, UIViewController;
@protocol ACC2SVAuthenticationUIControllerDelegate;

@interface ACM2SVAuthenticationUIController : NSObject <ACM2SVTrustedDevicesViewControllerDelegate, ACM2SVCodeVerificationViewControllerDelegate, ACC2SVAuthenticationUIControllerProtocol>

@property (retain, nonatomic) ACM2SVTrustedDevicesViewController *trustedDevicesViewController;
@property (retain, nonatomic) ACM2SVCodeVerificationViewController *codeVerificationViewController;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIColor *labelTextColor;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) long long keyboardAppearance;
@property (readonly, nonatomic) long long statusBarStyle;
@property (retain, nonatomic) UIViewController *parentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<ACC2SVAuthenticationUIControllerDelegate> delegate;

- (void)dealloc;
- (id)initWithParentViewController:(id)a0;
- (void)hideEnterVerificationCodeViewControllerAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)cancelInProgressImageDownloads;
- (void)chooseTrustedDeviceWithDeviceList:(id)a0 completion:(id /* block */)a1;
- (void)codeVerificationViewControllerNeedsResendCode:(id)a0;
- (void)downloadImageWithURL:(id)a0 completionBlock:(id /* block */)a1;
- (void)enterVerificationCodeWithLength:(unsigned long long)a0 forDevice:(id)a1 completion:(id /* block */)a2;
- (void)handleFailoverWithCompletion:(id /* block */)a0;
- (void)hideTrustedDevicesViewControllerAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)hideUIAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)resetCodeVerificationViewController;
- (void)resetTrustedDevicesViewControllerWithDeviceList:(id)a0;
- (void)showAlertWithError:(id)a0 completion:(id /* block */)a1;
- (void)trustedDevicesViewControllerDidSelectUnableReceiveMessages:(id)a0;
- (void)trustedDevicesViewControllerNeedsRefresh:(id)a0;

@end
