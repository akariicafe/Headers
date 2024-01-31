@interface DYFutureOperation : DYFuture {
    id /* block */ _block;
}

+ (id)operationWithBlock:(id /* block */)a0;

- (BOOL)isExecuting;
- (void)dealloc;
- (void)start;
- (BOOL)isFinished;
- (id)dependencies;
- (void)addDependency:(id)a0;
- (void)_start_NOLOCK;

@end
