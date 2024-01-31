@interface _EFBlockObserver : EFObserver {
    id /* block */ _resultBlock;
    id /* block */ _completionBlock;
    id /* block */ _failureBlock;
}

- (void)observerDidFailWithError:(id)a0;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)a0;
- (void).cxx_destruct;
- (id)initWithResultBlock:(id /* block */)a0 completionBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;

@end
