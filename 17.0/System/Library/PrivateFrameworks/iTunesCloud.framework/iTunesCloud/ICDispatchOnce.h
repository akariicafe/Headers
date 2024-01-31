@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICDispatchOnce : NSObject {
    id /* block */ _booleanHandler;
    struct atomic_flag { _Atomic BOOL _Value; } _didFire;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _objectHandler;
    ICDispatchOnce *_strongSelf;
    double _timeout;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

- (void)_invalidate;
- (void).cxx_destruct;
- (void)failWithError:(id)a0;
- (void)finishWithBooleanResult:(BOOL)a0 error:(id)a1;
- (void)finishWithObjectResult:(id)a0 error:(id)a1;
- (id)initWithBooleanHandler:(id /* block */)a0;
- (id)initWithObjectHandler:(id /* block */)a0;
- (void)startWithTimeout:(double)a0;
- (void)startWithTimeout:(double)a0 queue:(id)a1;

@end
