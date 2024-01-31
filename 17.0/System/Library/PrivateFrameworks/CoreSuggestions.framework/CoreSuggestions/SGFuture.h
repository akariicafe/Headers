@class NSError, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SGFuture : NSObject {
    NSObject *_result;
    NSError *_error;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSObject<OS_dispatch_queue> *_callbacks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    BOOL _alwaysUseCallbacksQueue;
    BOOL _yoDontLeaveMeHangingBro;
    NSObject *_parentObject;
    void *_parentObjectKey;
}

@property (readonly, nonatomic) BOOL isComplete;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

+ (id)createWithImmediateResult:(id)a0;
+ (void)waitForFuturesToComplete:(id)a0 withCallback:(id /* block */)a1;
+ (id)futureForObject:(id)a0 withKey:(void *)a1 onCreate:(id /* block */)a2;
+ (id)createWithImmediateError:(id)a0;
+ (id)createWithImmediateResult:(id)a0 error:(id)a1;
+ (id)createAfter:(id)a0 onCreate:(id /* block */)a1;

- (void)wait:(id /* block */)a0;
- (id)wait;
- (id)init;
- (id)waitWithTimeout:(double)a0;
- (void)dealloc;
- (id /* block */)completer;
- (void)setTimeout:(double)a0;
- (BOOL)completeWithResult:(id)a0 error:(id)a1;
- (id)result;
- (void)setTargetQueue:(id)a0 useAfterCompletion:(BOOL)a1;
- (BOOL)fail:(id)a0;
- (void)_wait:(id /* block */)a0 forSyncAPI:(BOOL)a1;
- (BOOL)_finishWithResult:(id)a0 orError:(id)a1;
- (void)clearTimeout;
- (void).cxx_destruct;
- (void)disassociateFromParentObject;
- (BOOL)succeed:(id)a0;
- (void)_clearTimeoutNonThreadSafe;
- (id)error;

@end
