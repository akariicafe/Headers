@class NSObject;
@protocol OS_dispatch_queue, FPCancellable;

@interface FPOperation : NSOperation <FPOperationClient> {
    unsigned char _uuid[16];
    id _executionTransaction;
}

@property (readonly, getter=isExecuting) BOOL executing;
@property (readonly, getter=isFinished) BOOL finished;
@property (retain, nonatomic) id<FPCancellable> remoteOperation;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy) id /* block */ finishedBlock;

- (id)init;
- (void)dealloc;
- (void)start;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)invalidate;
- (id)operationDescription;
- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (void)setCancellationHandler:(id)a0;
- (BOOL)_finishIfCancelled;
- (void)_setExecuting:(BOOL)a0;
- (void)_setFinished:(BOOL)a0;
- (void)completedWithResult:(id)a0 error:(id)a1;
- (BOOL)finishIfCancelled;
- (void)_setRemoteCancellationHandler:(id)a0;
- (void)operationDidProgressWithInfo:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (id)proxifiedDescription;
- (void)resetRemoteOperation;

@end
