@class NSString, NSNumber;

@interface ACMExternalAuthenticationRequestImpl : ACMBaseAuthenticationRequestImpl <ACMExternalAuthenticationRequest>

@property BOOL useAlertView;
@property BOOL userNameFieldEditable;
@property (retain) NSString *alertViewPrompt;
@property BOOL automaticallyCancelWhenSwitchingToBackground;
@property BOOL canUseTouchID;
@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSNumber *appID;
@property (retain, nonatomic) NSString *appIDKey;
@property (retain, nonatomic) NSNumber *serverResponseTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;

@end
