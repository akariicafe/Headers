@class MSVTimer, NSObject;
@protocol OS_dispatch_queue;

@interface MSVBlockGuard : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _disarmed;
    BOOL _didTimeout;
    MSVTimer *_timeoutTimer;
    id /* block */ _interruptionHandler;
}

- (id)init;
- (void)dealloc;
- (BOOL)disarm;
- (id)initWithTimeout:(double)a0 interruptionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_interruptWithReason:(long long)a0;
- (id)initWithDeallocHandler:(id /* block */)a0;
- (id)initWithTimeout:(double)a0;

@end
