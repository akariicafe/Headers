@interface CNObserver : NSObject

+ (void)sendObserver:(id)a0 resultsOfBlock:(id /* block */)a1;
+ (id)observerWithWeakTarget:(id)a0 resultSelector:(SEL)a1;
+ (id)observerWithResultBlock:(id /* block */)a0 completionBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
+ (id)observerWithCompletionHandler:(id /* block */)a0;
+ (void)sendArray:(id)a0 error:(id)a1 toObserver:(id)a2;
+ (id)blockObserverOfClass:(Class)a0 withResultBlock:(id /* block */)a1 completionBlock:(id /* block */)a2 failureBlock:(id /* block */)a3;
+ (void)sendResult:(id)a0 error:(id)a1 toObserver:(id)a2;
+ (id)observerWithResultBlock:(id /* block */)a0;
+ (void)sendArray:(id)a0 error:(id)a1 toObserver:(id)a2 untilCanceled:(id)a3;

@end
