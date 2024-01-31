@class NSArray, NSOperationQueue;

@interface CATBatchRemoteTaskOperation : CATOperation {
    NSArray *mRemoteTasks;
    NSOperationQueue *mQueue;
}

@property (readonly, copy, nonatomic) NSArray *remoteTaskOperations;

- (id)init;
- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (void)cancel;
- (void)cancelSubOperations;
- (id)initWithRemoteTaskOperations:(id)a0;
- (id)initWithTaskClient:(id)a0 requests:(id)a1;
- (void)remoteTaskDidFinish:(id)a0;

@end
