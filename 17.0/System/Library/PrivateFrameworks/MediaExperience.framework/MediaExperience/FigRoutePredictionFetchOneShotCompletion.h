@interface FigRoutePredictionFetchOneShotCompletion : NSObject {
    id /* block */ _completionHandler;
}

- (id)init;
- (void)dealloc;
- (void)invokeWithRoutePredictions:(id)a0 predictionContext:(id)a1;
- (id)initWithCompletionHandler:(id /* block */)a0;

@end
