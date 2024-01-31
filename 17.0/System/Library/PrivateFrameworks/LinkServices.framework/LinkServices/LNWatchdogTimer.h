@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface LNWatchdogTimer : NSObject

@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timerSource;
@property (nonatomic, getter=_isStopped) BOOL stopped;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) double remainingInterval;
@property (nonatomic) double startTime;

- (void)_cancel;
- (void)_start;
- (BOOL)isCanceled;
- (void)reset;
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
- (BOOL)isStopped;
- (id)initWithTimeoutInterval:(double)a0 onQueue:(id)a1 singleUse:(BOOL)a2 timeoutHandler:(id /* block */)a3;
- (id)initWithTimeoutInterval:(double)a0 singleUse:(BOOL)a1 timeoutHandler:(id /* block */)a2;

@end
