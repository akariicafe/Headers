@class UIViewController, NSString, SSAuthenticationContext, SSLogConfig;
@protocol SSAuthenticateRequestDelegate;

@interface SSAuthenticateRequest : SSRequest <SSXPCCoding> {
    SSAuthenticationContext *_authenticationContext;
}

@property (retain, nonatomic) SSLogConfig *logConfig;
@property (readonly, nonatomic) NSString *logUUID;
@property (weak, nonatomic) UIViewController *_parentViewController;
@property (nonatomic) id<SSAuthenticateRequestDelegate> delegate;
@property (readonly) SSAuthenticationContext *authenticationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isAuthkitEntitled;
+ (BOOL)localAuthenticationAvailable;
+ (id)_accountToAuthenticateWithAuthenticationContext:(id)a0;

- (id)init;
- (id)initWithAccount:(id)a0;
- (id)run;
- (BOOL)start;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (void)_handleDialogFromError:(id)a0;
- (id)initWithAuthenticationContext:(id)a0;
- (id)_verifyCredentialsOptionsFromUpdateAccountResponse:(id)a0 skipAuthKit:(BOOL)a1;
- (void)_performRemoteAuthenticationWithCompletion:(id /* block */)a0;
- (long long)_responseTypeForError:(id)a0;
- (BOOL)_shouldRunAuthenticationForAccount:(id)a0;
- (void)startWithAuthenticateResponseBlock:(id /* block */)a0;

@end
