@class UIViewController, AMSProcessInfo;

@interface AMSUIDelegateTokenTask : AMSDelegateTokenTask

@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) AMSProcessInfo *processInfo;

- (id)perform;
- (void).cxx_destruct;
- (id)authenticateTaskWithRequest:(id)a0;
- (id)initWithDelegateAuthenticateRequest:(id)a0 account:(id)a1 presentingViewController:(id)a2;
- (id)initWithDelegateAuthenticateRequest:(id)a0 account:(id)a1 processInfo:(id)a2 presentingViewController:(id)a3;

@end
