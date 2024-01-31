@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface INWatchdogTimer : NSObject {
    double _interval;
    NSObject<OS_dispatch_source> *_timerSource;
    BOOL _isStopped;
    double _remainingInterval;
    double _startTime;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (void)_cancel;
- (void)_start;
- (BOOL)isCanceled;
- (void)dealloc;
- (void)_reset;
- (void)start;
- (void)stop;
- (id)initWithTimeoutInterval:(double)a0 timeoutHandler:(id /* block */)a1;
- (BOOL)cancelIfNotAlreadyCanceled;
- (id)initWithTimeoutInterval:(double)a0 onQueue:(id)a1 timeoutHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_stop;
- (BOOL)_cancelIfNotAlreadyCanceled;
- (void)cancel;
- (BOOL)_isCanceled;

@end
