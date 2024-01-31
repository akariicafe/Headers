@class NSOperationQueue, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface CLDispatchSilo : CLSilo {
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    BOOL _useCLPermissiveTimer;
    BOOL _isQueueSuspended;
    NSNumber *_cohortId;
}

- (void)async:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0;
- (void)suspend;
- (void)assertInside;
- (id)operationQueue;
- (void)_setLatchedAbsoluteTimestamp:(double)a0;
- (double)currentLatchedAbsoluteTimestamp;
- (id)initWithUnderlyingQueue:(id)a0 bePermissive:(BOOL)a1;
- (void)resume;
- (id)getTimeCoercibleVariantInstance;
- (id)initWithUnderlyingQueue:(id)a0;
- (void)heartBeat:(id)a0;
- (id)initMain;
- (void).cxx_destruct;
- (void)intendToSync;
- (id)debugDescription;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (id)newTimer;
- (BOOL)inPermissiveMode;
- (BOOL)isSuspended;
- (id)queue;
- (void)sync:(id /* block */)a0;
- (void)assertOutside;

@end
