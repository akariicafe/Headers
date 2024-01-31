@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUCoalescer : NSObject {
    BOOL _invalidateCalled;
    double _startTime;
    NSObject<OS_dispatch_source> *_timer;
    int _triggered;
}

@property (copy, nonatomic) id /* block */ actionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) double leeway;
@property (nonatomic) double maxDelay;
@property (nonatomic) double minDelay;

- (void)_cancel;
- (void)_timerFired;
- (id)init;
- (void)trigger;
- (void)dealloc;
- (void)_invalidate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_trigger;
- (void)cancel;

@end
