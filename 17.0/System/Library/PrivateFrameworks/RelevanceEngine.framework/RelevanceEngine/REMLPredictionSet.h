@class REMLPrediction, NSDictionary;

@interface REMLPredictionSet : NSObject {
    NSDictionary *_predictionsByKey;
}

@property (readonly, nonatomic) REMLPrediction *prediction;

- (void).cxx_destruct;
- (id)initWithPrediction:(id)a0;
- (id)initWithPrediction:(id)a0 predictionMap:(id)a1;
- (id)predictionForKey:(id)a0;

@end
