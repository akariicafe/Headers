@class AAAbsintheContext, AAAbsintheSignerContextCache, AAURLSession, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AAAbsintheSigner : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _contextLock;
    NSObject<OS_dispatch_queue> *_contextQueue;
    NSObject<OS_dispatch_source> *_contextTimerSource;
    AAAbsintheSignerContextCache *_contextCache;
}

@property (class, copy, nonatomic, setter=_setContextCreationBlock:) id /* block */ _contextCreationBlock;
@property (class, readonly, nonatomic) AAAbsintheSigner *sharedSigner;

@property (retain, nonatomic) AAURLSession *session;
@property (readonly, nonatomic) AAAbsintheContext *context;
@property (readonly, nonatomic) double cacheTimeout;

- (id)init;
- (void)dealloc;
- (void)setContext:(id)a0;
- (void).cxx_destruct;
- (id)_contextLock_contextInvalidatingIfNecessary;
- (void)_contextLock_dequeueContextCleanup;
- (void)_contextLock_enqueueContextCleanup;
- (void)_contextQueue_contextWithCompletion:(id /* block */)a0;
- (void)_contextWithCompletion:(id /* block */)a0;
- (void)_fetchCertificateDataWithCompletion:(id /* block */)a0;
- (void)_fetchSessionInfoWithRequestInfo:(id)a0 completion:(id /* block */)a1;
- (id)initWithCacheTimeout:(double)a0;
- (void)signatureForData:(id)a0 completion:(id /* block */)a1;

@end
