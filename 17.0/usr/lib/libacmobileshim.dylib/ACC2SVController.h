@class NSString, ACFMessage, ACC2SVTrustedDeviceObject;
@protocol ACC2SVControllerDelegate, ACCTicketManagerProtocol, ACC2SVTransportControllerProtocol, ACC2SVAuthenticationUIControllerProtocol;

@interface ACC2SVController : NSObject <ACC2SVControllerProtocol, ACC2SVAuthenticationUIControllerDelegate>

@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly, nonatomic) id<ACCTicketManagerProtocol> ticketManager;
@property (retain, nonatomic) ACFMessage *authRequest;
@property (retain, nonatomic) ACC2SVTrustedDeviceObject *currentDevice;
@property (readonly, nonatomic) Class deviceObjectClass;
@property (nonatomic) id<ACC2SVControllerDelegate> delegate;
@property (retain, nonatomic) id<ACC2SVAuthenticationUIControllerProtocol> secondFactorAuthUIController;
@property (retain, nonatomic) id<ACC2SVTransportControllerProtocol> transportController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)cancelWithCompletion:(id /* block */)a0;
- (void)handleErrorOnGetTrustedDevices:(id)a0;
- (void)cancel2SVAuthentication;
- (id)createCancelError;
- (id)createTrustedDeviceWithDictionary:(id)a0;
- (void)enterAndVerifySecureCodeOfLength:(unsigned long long)a0;
- (void)enterCredentials;
- (void)generateAndSendSecCodeToDevice:(id)a0 withCompletion:(id /* block */)a1;
- (void)goBackToTrustedDevices;
- (void)handleErrorOnResendSecurityCode:(id)a0 alertCancelled:(BOOL)a1;
- (void)handleErrorOnSendSecurityCode:(id)a0 alertCancelled:(BOOL)a1;
- (void)hideUIAndReturnError:(id)a0;
- (void)hideUIWithCompletion:(id /* block */)a0;
- (unsigned long long)passcodeLengthFromEncryptedContent:(id)a0 withHmac:(id)a1 context:(id)a2;
- (void)perform2StepVerificationWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)refreshTrustedDevicesList;
- (void)reportError:(id)a0 completionBlock:(id /* block */)a1;
- (void)sendVerificationCodeToDevice:(id)a0;
- (id)ssoTokenWithResponse:(id)a0 context:(id)a1;
- (void)start2StepVerificationWithRequest:(id)a0;
- (id)trustedDevicesFromResponse:(id)a0 withContext:(id)a1;
- (void)uiController:(id)a0 getImageWithURL:(id)a1 completion:(id /* block */)a2;
- (void)uiController:(id)a0 resendVerificationCodeWithCompletion:(id /* block */)a1;
- (void)uiControllerCancelGettingImages:(id)a0;
- (void)uiControllerHideViewAnimated:(id)a0;
- (id)uiControllerRealm:(id)a0;
- (void)uiControllerRefreshDeviceList:(id)a0;
- (id)uiControllerSelectedDevice:(id)a0;
- (void)uiControllerSetup:(id)a0;
- (id)uiControllerTitle:(id)a0;
- (void)uiControllerUserIsUnableToReceiveVerificationCode:(id)a0;
- (void)updateSSOToken:(id)a0 withServiceTicket:(id)a1 request:(id)a2;
- (void)verifySecureCode:(id)a0 withCompletion:(id /* block */)a1;
- (void)verifySecurityCodeDidFailWithError:(id)a0;
- (void)verifySecurityCodeDidFinishWithToken:(id)a0;

@end
