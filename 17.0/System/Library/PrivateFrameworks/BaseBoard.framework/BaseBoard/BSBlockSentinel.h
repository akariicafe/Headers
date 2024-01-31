@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BSBlockSentinel : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _lock_handler;
    unsigned long long _lock_signalCount;
    unsigned long long _lock_expectedSignals;
    NSString *_lock_identifier;
    NSObject<OS_dispatch_queue> *_explicitQueue;
}

+ (id)sentinelWithSignalCount:(unsigned long long)a0 signalHandler:(id /* block */)a1;
+ (id)sentinelWithQueue:(id)a0 signalCount:(unsigned long long)a1 completion:(id /* block */)a2;
+ (id)sentinelWithCompletion:(id /* block */)a0;
+ (id)sentinelWithQueue:(id)a0 signalCount:(unsigned long long)a1 signalHandler:(id /* block */)a2;
+ (id)sentinelWithSignalCount:(unsigned long long)a0 exceptionReason:(id)a1;
+ (id)sentinelWithQueue:(id)a0 completion:(id /* block */)a1;
+ (id)sentinelWithQueue:(id)a0 signalHandler:(id /* block */)a1;
+ (id)sentinelWithExceptionReason:(id)a0;

- (BOOL)signal;
- (void)dealloc;
- (void)setIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)signalWithContext:(id)a0;

@end
