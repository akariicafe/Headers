@class NSError, NSOperationQueue;

@interface ICAsyncOperation : NSOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _asyncOperationLock;
    NSOperationQueue *_childOperationQueue;
    long long _qualityOfServiceForChildOperationQueue;
    BOOL _isExecuting;
    BOOL _isFinished;
}

@property (readonly, copy, nonatomic) NSError *error;

- (BOOL)isExecuting;
- (id)init;
- (void)finish;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)execute;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (BOOL)isConcurrent;
- (void)_execute;
- (void)enqueueChildOperation:(id)a0;

@end
