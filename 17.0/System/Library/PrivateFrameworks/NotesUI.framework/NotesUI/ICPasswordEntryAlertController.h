@class NSString, UIWindow;

@interface ICPasswordEntryAlertController : NSObject

@property (nonatomic, getter=isAuthenticating) BOOL authenticating;
@property (nonatomic) unsigned long long numberOfFailedAttempts;
@property (nonatomic, getter=isPasswordDiverged) BOOL passwordDiverged;
@property (copy, nonatomic) NSString *wrongAccountName;
@property (copy, nonatomic) NSString *divergedAccountPassword;
@property (readonly, nonatomic) UIWindow *displayWindow;

- (void).cxx_destruct;
- (void)authenticateWithPrompt:(id)a0 completionHandler:(id /* block */)a1;
- (void)didAuthenticateWithPassword:(id)a0 prompt:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithDisplayWindow:(id)a0;
- (id)passwordAlertControllerWithPrompt:(id)a0 passwordHandler:(id /* block */)a1 forgotHandler:(id /* block */)a2 cancelHandler:(id /* block */)a3;

@end
