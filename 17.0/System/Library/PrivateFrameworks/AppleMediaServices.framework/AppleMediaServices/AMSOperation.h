@class NSLock, NSMutableSet, AMSBinaryPromise, NSError;

@interface AMSOperation : NSOperation {
    NSLock *_lock;
    NSMutableSet *_subOperations;
    BOOL _cancelled;
}

@property (weak, nonatomic) AMSOperation *parentOperation;
@property (readonly, nonatomic) AMSBinaryPromise *promise;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;

- (id)init;
- (BOOL)isCancelled;
- (void)run;
- (void)main;
- (void)lock;
- (void)unlock;
- (void).cxx_destruct;
- (void)cancel;
- (void)runSubOperation:(id)a0;
- (void)runSubOperation:(id)a0 onQueue:(id)a1;

@end
