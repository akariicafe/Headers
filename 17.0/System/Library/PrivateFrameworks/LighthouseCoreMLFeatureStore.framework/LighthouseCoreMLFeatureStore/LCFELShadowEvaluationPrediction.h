@class NSNumber, NSDate;

@interface LCFELShadowEvaluationPrediction : NSObject

@property (readonly, nonatomic) NSDate *timestampOfInputFeatureSet;
@property (readonly, nonatomic) NSNumber *predictedClass;
@property (readonly, nonatomic) NSNumber *probablity;

- (void).cxx_destruct;
- (id)init:(id)a0 predictedFeatureSet:(id)a1 outputLabelFeaturName:(id)a2;

@end
