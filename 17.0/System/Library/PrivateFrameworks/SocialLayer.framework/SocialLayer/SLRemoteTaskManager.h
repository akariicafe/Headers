@class NSObject;
@protocol OS_dispatch_queue, SLRemoteTaskManagerDelegate;

@interface SLRemoteTaskManager : NSObject

@property (readonly, weak, nonatomic) id<SLRemoteTaskManagerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetSerialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundConcurrentQueue;
@property (nonatomic) BOOL synchronous;

- (id)_serviceWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 targetSerialQueue:(id)a1 synchronous:(BOOL)a2;
- (void)startTask:(id /* block */)a0 withTimeout:(double)a1 timeoutHandler:(id /* block */)a2 errorHandler:(id /* block */)a3;

@end
