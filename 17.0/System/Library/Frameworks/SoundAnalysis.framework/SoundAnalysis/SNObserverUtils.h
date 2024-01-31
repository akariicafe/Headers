@interface SNObserverUtils : NSObject

+ (id /* block */)appendToCompletionHandler:(id /* block */)a0 other:(id /* block */)a1;
+ (id /* block */)appendToObserverCompletionHandler:(id /* block */)a0 other:(id /* block */)a1;
+ (id /* block */)appendToObserverResultsHandler:(id /* block */)a0 other:(id /* block */)a1;
+ (id /* block */)appendToResultsHandler:(id /* block */)a0 other:(id /* block */)a1;
+ (id /* block */)completionHandlerForRequest:(id)a0 observer:(id)a1 retainObserverWeakly:(BOOL)a2;
+ (id /* block */)completionHandlerForRequest:(id)a0 stronglyRetainedObserver:(id)a1;
+ (id /* block */)completionHandlerForRequest:(id)a0 weaklyRetainedObserver:(id)a1;
+ (id /* block */)ignoredCompletionHandler;
+ (id /* block */)ignoredObserverCompletionHandler;
+ (id /* block */)ignoredObserverResultsHandler;
+ (id /* block */)ignoredResultsHandler;
+ (id /* block */)observerCompletionHandlerForObserver:(id)a0 retainObserverWeakly:(BOOL)a1;
+ (id /* block */)observerCompletionHandlerForStronglyRetainedObserver:(id)a0;
+ (id /* block */)observerCompletionHandlerForWeaklyRetainedObserver:(id)a0;
+ (id /* block */)observerResultsHandlerForObserver:(id)a0 retainObserverWeakly:(BOOL)a1;
+ (id /* block */)observerResultsHandlerForStronglyRetainedObserver:(id)a0;
+ (id /* block */)observerResultsHandlerForWeaklyRetainedObserver:(id)a0;
+ (id)prependHandlersToObserver:(id)a0 retainObserverWeakly:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (id)prependHandlersToObserver:(id)a0 retainObserverWeakly:(BOOL)a1 resultsHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
+ (id /* block */)resultsHandlerForRequest:(id)a0 observer:(id)a1 retainObserverWeakly:(BOOL)a2;
+ (id /* block */)resultsHandlerForRequest:(id)a0 stronglyRetainedObserver:(id)a1;
+ (id /* block */)resultsHandlerForRequest:(id)a0 weaklyRetainedObserver:(id)a1;
+ (void)sendCompletionForRequest:(id)a0 toObserver:(id)a1;
+ (void)sendError:(id)a0 forRequest:(id)a1 toObserver:(id)a2;
+ (void)sendError:(id)a0 toObservers:(id)a1;
+ (void)sendTerminationWithOptionalError:(id)a0 forRequest:(id)a1 toObserver:(id)a2;

- (id)init;

@end
