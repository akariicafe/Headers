@class NSMutableArray;

@interface _DKSyncBlockOperation : _DKSyncOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSMutableArray *blocks;
@property (getter=isAsynchronous) BOOL asynchronous;

+ (id)blockOperationWithBlock:(id /* block */)a0;

- (id)initWithBlock:(id /* block */)a0;
- (id)init;
- (void)main;
- (void)addExecutionBlock:(id /* block */)a0;
- (id)executionBlocks;
- (void).cxx_destruct;

@end
