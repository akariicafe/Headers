@class AMSURLResult, AMSProcessInfo, AMSURLTaskInfo;

@interface AMSDelegateTokenTask : AMSDelegateAuthenticateTask

@property (retain, nonatomic) AMSURLTaskInfo *taskInfo;
@property (retain, nonatomic) AMSURLResult *urlResult;
@property (retain, nonatomic) AMSProcessInfo *processInfo;

- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)_parseBiometricsSignatureRequestFromTask:(id)a0;
- (id)_performFallbackAuthentication;
- (id)authenticateTaskWithRequest:(id)a0;
- (id)delegateAuthenticateUrl;
- (id)initWithDelegateAuthenticateRequest:(id)a0 bag:(id)a1 processInfo:(id)a2 account:(id)a3;
- (id)performRetrieveDelegateToken;

@end
