@protocol MLPredictionRequest;

@interface MLPendingPrediction : NSObject

@property (readonly, nonatomic) id<MLPredictionRequest> predictionRequest;
@property (readonly, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithPredictionRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
