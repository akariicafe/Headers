@class AMSUIWebClientContext, NSString, AMSAuthenticateRequest;

@interface AMSUIWebAuthenticateAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (nonatomic) BOOL pauseTimeouts;
@property (nonatomic) BOOL isAuthenticatingCloud;
@property (nonatomic) BOOL makeCurrentAccount;
@property (retain, nonatomic) AMSAuthenticateRequest *request;
@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
