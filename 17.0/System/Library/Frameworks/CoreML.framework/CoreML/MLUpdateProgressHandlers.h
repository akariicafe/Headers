@interface MLUpdateProgressHandlers : NSObject

@property long long interestedEvents;
@property (copy) id /* block */ progressHandler;
@property (copy) id /* block */ completionHandler;

- (id)description;
- (void).cxx_destruct;
- (void)_dispatchUpdateProgressHandlerForEvent:(long long)a0 metrics:(id)a1 parameters:(id)a2 error:(id)a3 onQueue:(id)a4;
- (void)dispatchEpochEndProgressHandlerWithMetrics:(id)a0 parameters:(id)a1 onQueue:(id)a2;
- (void)dispatchMiniBatchEndProgressHandlerWithMetrics:(id)a0 parameters:(id)a1 onQueue:(id)a2;
- (void)dispatchTrainingBeginProgressHandlerWithMetrics:(id)a0 parameters:(id)a1 onQueue:(id)a2;
- (void)dispatchTrainingCompletionHandlerWithError:(id)a0 onQueue:(id)a1;
- (void)dispatchTrainingCompletionHandlerWithMetrics:(id)a0 parameters:(id)a1 onQueue:(id)a2;
- (id)initForEvents:(long long)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
