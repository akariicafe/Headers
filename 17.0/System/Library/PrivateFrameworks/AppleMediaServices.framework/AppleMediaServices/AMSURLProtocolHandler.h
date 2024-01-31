@class NSObject, NSString, AMSURLSession, AMSSigningSecurityService;
@protocol OS_dispatch_queue;

@interface AMSURLProtocolHandler : NSObject <AMSURLHandling>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *responsePingQueue;
@property (readonly, nonatomic) AMSSigningSecurityService *signingService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue;
@property (weak, nonatomic) AMSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)reversePushSamplingPercentageForTask:(id)a0;
+ (BOOL)isBuyURLOverridesForTouchIDEnabled;

- (id)init;
- (void)_enqueueLoadURLEvent:(id)a0 forContext:(id)a1;
- (void)reportMetricsForContext:(id)a0;
- (void)_setResponseCookiesFromResponse:(id)a0 taskInfo:(id)a1;
- (id)_handleResponse:(id)a0 task:(id)a1;
- (BOOL)_URLIsTrustedFromRequest:(id)a0 bag:(id)a1;
- (void)didCreateTask:(id)a0 fromRequest:(id)a1 error:(id *)a2;
- (id)handleCompletionWithTask:(id)a0 metrics:(id)a1 decodedObject:(id)a2;
- (void)handleResponse:(id)a0 task:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)reconfigureNewRequest:(id)a0 originalTask:(id)a1 redirect:(BOOL)a2 error:(id *)a3;
- (void)_pingURL:(id)a0 session:(id)a1 bag:(id)a2;
- (void)handleCompletionWithTask:(id)a0 metrics:(id)a1 decodedObject:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)_shouldEnableReversePushForTask:(id)a0;
- (id)decodeMutableData:(id)a0 task:(id)a1 error:(id *)a2;
- (id)decodeData:(id)a0 task:(id)a1 error:(id *)a2;

@end
