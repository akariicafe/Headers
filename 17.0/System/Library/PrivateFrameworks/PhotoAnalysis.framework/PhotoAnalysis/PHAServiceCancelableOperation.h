@class NSInvocation, NSObject;
@protocol OS_dispatch_group, PHAServiceOperationListener;

@interface PHAServiceCancelableOperation : NSObject {
    long long _operationId;
    BOOL _cancelRequested;
    id /* block */ _cancellationBlock;
    NSObject<OS_dispatch_group> *_completionGroup;
}

@property (readonly) NSInvocation *invocation;
@property (readonly) long long operationId;
@property (readonly) BOOL isCancelled;
@property (weak) id<PHAServiceOperationListener> delegate;
@property (copy) id /* block */ progressBlock;

+ (id)operationNotFoundError:(long long)a0;

- (void)runOperation;
- (void)waitForCompletion;
- (void)_startWork;
- (void)addCompletionBlock:(id /* block */)a0;
- (id)initWithOperationId:(long long)a0 invocation:(id)a1;
- (id)description;
- (void)enqueueOnQueue:(id)a0;
- (void).cxx_destruct;
- (void)setCancellationBlock:(id /* block */)a0;
- (id)operationCanceledError:(BOOL)a0;
- (BOOL)cancel;

@end
