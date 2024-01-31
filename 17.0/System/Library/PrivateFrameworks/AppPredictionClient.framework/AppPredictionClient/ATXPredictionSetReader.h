@class NSData;

@interface ATXPredictionSetReader : NSObject {
    NSData *_data;
    Class _predictedItemClass;
    const char *_perPredictionDataStart;
    int _predictionCount;
}

+ (id)actionReader:(id)a0;
+ (id)bundleIdReader:(id)a0;

- (id)readScoredPredictionsWithLimit:(int)a0;
- (id)init;
- (id)_scoredPredictionFromData:(id)a0 score:(float)a1;
- (void).cxx_destruct;
- (id)readScoredPredictionsWithLimit:(int)a0 filterPredicate:(id)a1;
- (id)initWithData:(id)a0 predictedItemClass:(Class)a1;

@end
