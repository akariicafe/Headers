@interface SCKAsyncBlockOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

@property (readonly, copy, nonatomic) id /* block */ block;

- (id)initWithBlock:(id /* block */)a0;
- (BOOL)isExecuting;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;

@end
