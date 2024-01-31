@class ACAccountStore, NSString, NSURLSession, NSSet, NSMutableDictionary, NSOperationQueue, NSMutableArray, NSObject, NSURLSessionConfiguration;
@protocol OS_dispatch_queue, PKTapToRadarDelegate;

@interface PKWebService : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {
    ACAccountStore *_accountStore;
    unsigned long long _taskIDCounter;
    NSString *_webServiceSessionMarker;
    NSOperationQueue *_delegateOperationQueue;
    NSMutableDictionary *_webServiceTasks;
    NSMutableDictionary *_diagnosticReasonsByTaskID;
    NSMutableDictionary *_tasksMetadata;
    NSMutableArray *_diagnosticReasons;
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_diagnosticReasonsQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSSet *_sensitiveKeys;
}

@property (readonly) NSURLSessionConfiguration *sessionConfiguration;
@property (readonly, nonatomic) NSString *webServiceSessionMarker;
@property (weak, nonatomic) id<PKTapToRadarDelegate> tapToRadarDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedCookieStorage;

- (void)refreshSessionWithConfiguration:(id)a0;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)addDiagnosticReason:(id)a0;
- (void)URLSession:(id)a0 taskIsWaitingForConnectivity:(id)a1;
- (void)_cleanUpDiagnosticReasonsForTaskID:(unsigned long long)a0;
- (long long)logFacilityType;
- (void)performRequest:(id)a0 taskIdentifier:(unsigned long long)a1 retries:(unsigned long long)a2 authHandling:(BOOL)a3 completionHandler:(id /* block */)a4;
- (BOOL)canBypassTrustValidation;
- (void)handleWillPerformHTTPRedirectionWithResponse:(id)a0 originalRequest:(id)a1 redirectHandler:(id /* block */)a2;
- (void)setUrlSession:(id)a0;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (id)_redactLogsWithData:(id)a0;
- (id)dataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)performRequest:(id)a0 taskIdentifier:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)handleAuthenticationFailureWithCompletionHandler:(id /* block */)a0;
- (void)diagnosticSessionWithReason:(id)a0 sessionHandler:(id /* block */)a1;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)_associateDiagnosticReasonsWithTaskID:(unsigned long long)a0;
- (BOOL)_evaluateTrust:(struct __SecTrust { } *)a0;
- (id)urlRequestTaggedWithUniqueRequestIdentifier:(id)a0;
- (void)removeDiagnosticReason:(id)a0;
- (id)_urlRequestWithCustomHeaders:(id)a0;
- (id)forbiddenErrorWithResponse:(id)a0;
- (id)urlSession;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)_redactLogsFromJSONObject:(id)a0;
- (id)_urlRequestTaggedWithDiagnosticReasonHeader:(id)a0 forTaskID:(unsigned long long)a1;
- (void)logRequest:(id)a0;
- (void)logResponse:(id)a0 withData:(id)a1;
- (void)performRequest:(id)a0 taskIdentifier:(unsigned long long)a1 retries:(unsigned long long)a2 authHandling:(BOOL)a3 cacheResponse:(BOOL)a4 completionHandler:(id /* block */)a5;
- (unsigned long long)webServiceTaskIdentifierForTaskIdentifier:(long long)a0;
- (unsigned long long)nextTaskID;
- (void)URLSession:(id)a0 dataTask:(id)a1 willCacheResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleResponse:(id)a0 withError:(id)a1 data:(id)a2 task:(id)a3 completionHandler:(id /* block */)a4;
- (void)resetWebServiceSessionMarker;
- (id)initWithTapToRadarDelegate:(id)a0;
- (void)processRetryRequest:(id)a0 responseData:(id)a1 orginalRequest:(id)a2 completion:(id /* block */)a3;
- (void)performRequest:(id)a0 taskIdentifier:(unsigned long long)a1 cacheResponse:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)_urlRequestTaggedWithWebServiceSessionMarkerHeader:(id)a0;
- (id)_accountStore;
- (void)invalidate;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;

@end
