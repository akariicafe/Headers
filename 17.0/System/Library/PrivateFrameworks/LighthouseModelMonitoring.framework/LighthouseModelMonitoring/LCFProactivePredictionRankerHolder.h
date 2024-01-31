@class LCFFeatureSet;
@protocol MLFeatureProvider;

@interface LCFProactivePredictionRankerHolder : NSObject

@property (readonly, nonatomic) LCFFeatureSet *featureSet;
@property (readonly, nonatomic) id<MLFeatureProvider> prediction;

- (void).cxx_destruct;
- (id)init:(id)a0 prediction:(id)a1;

@end
