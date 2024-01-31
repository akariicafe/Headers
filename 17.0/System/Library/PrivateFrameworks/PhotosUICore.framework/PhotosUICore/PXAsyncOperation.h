@interface PXAsyncOperation : NSOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    int _operationState;
}

@property (readonly, nonatomic) BOOL px_shouldWaitForCancel;

- (BOOL)isExecuting;
- (id)init;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)cancel;
- (void)px_finishIfPossible;
- (void)px_start;

@end
