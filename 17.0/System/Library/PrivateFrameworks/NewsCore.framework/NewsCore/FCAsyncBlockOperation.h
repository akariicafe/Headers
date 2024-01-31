@interface FCAsyncBlockOperation : NSOperation {
    _Atomic BOOL _executing;
    _Atomic BOOL _finished;
}

@property (readonly, copy, nonatomic) id /* block */ block;

+ (id)asyncBlockOperationWithBlock:(id /* block */)a0;
+ (id)asyncBlockOperationWithMainThreadBlock:(id /* block */)a0;

- (id)initWithBlock:(id /* block */)a0;
- (BOOL)isExecuting;
- (id)init;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;

@end
