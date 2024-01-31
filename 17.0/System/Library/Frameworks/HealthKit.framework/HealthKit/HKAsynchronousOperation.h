@interface HKAsynchronousOperation : NSOperation {
    id /* block */ _operationBlock;
    BOOL _executing;
    BOOL _finished;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    double _startedTime;
}

@property (getter=isExecuting) BOOL executing;
@property (getter=isFinished) BOOL finished;

- (id)init;
- (void)dealloc;
- (void)start;
- (BOOL)isAsynchronous;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 operationBlock:(id /* block */)a1;

@end
