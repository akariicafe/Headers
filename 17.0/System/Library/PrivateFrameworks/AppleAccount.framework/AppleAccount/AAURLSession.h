@class NSURLSession, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AAURLSession : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate> {
    BOOL _requiresSigning;
    BOOL _requiresICSSPinning;
    BOOL _requiresUrlCache;
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSMutableDictionary *_pendingSessionOperations;
}

@property (class, readonly, nonatomic) AAURLSession *sharedSigningSession;
@property (class, readonly, nonatomic) AAURLSession *sharedPinningSession;
@property (class, readonly, nonatomic) AAURLSession *sharedPinningOnlySession;
@property (class, readonly, nonatomic) AAURLSession *sharedSession;
@property (class, readonly, nonatomic) AAURLSession *sharedSessionWithNoUrlCache;

@property (readonly, nonatomic) NSURLSession *urlSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (id)init;
- (id)dataTaskWithURL:(id)a0 completion:(id /* block */)a1;
- (id)_enqueueRequest:(id)a0 completion:(id /* block */)a1;
- (id)bodyTaskWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (id)bodyTaskWithURL:(id)a0 completion:(id /* block */)a1;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)_initRequiringSigning:(BOOL)a0 requiresPinning:(BOOL)a1 requiresUrlCache:(BOOL)a2;
- (id)_initRequiringSigning:(BOOL)a0 requiresPinning:(BOOL)a1;
- (id)_initRequiringSigning:(BOOL)a0;
- (id)dataTaskWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)resetSessionCache;
- (void).cxx_destruct;
- (void)_sessionQueue_dequeueTask:(id)a0 withResponse:(id)a1 error:(id)a2;
- (id)initForProxiedDevice:(id)a0 anisetteDataProvider:(id)a1;
- (id)initForProxiedDevice:(id)a0;
- (void)_sessionQueue_enqueueTask:(id)a0 completion:(id /* block */)a1;
- (void)_sessionQueue_updateTask:(id)a0 withData:(id)a1;

@end
