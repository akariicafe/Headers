@class NSArray, NSString, NSDate;

@interface LCFShadowEvaluationParameters : NSObject

@property (readonly, nonatomic) NSArray *modelNames;
@property (readonly, nonatomic) NSArray *featureNames;
@property (readonly, nonatomic) NSString *srcLabelName;
@property (readonly, nonatomic) NSString *destLabelName;
@property (readonly, nonatomic) NSString *vectorFeatureName;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) id /* block */ preprocessHandler;
@property (readonly, nonatomic) id /* block */ inferenceHandler;
@property (readonly, nonatomic) id /* block */ metricsHandler;
@property (readonly, nonatomic) NSString *groundTruthLabelFeatureName;
@property (readonly, nonatomic) NSString *predictedLabelFeatureName;

- (void).cxx_destruct;
- (id)init:(id)a0 featureNames:(id)a1 vectorFeatureName:(id)a2 srcLabelName:(id)a3 destLabelName:(id)a4 startDate:(id)a5 endDate:(id)a6;
- (id)init:(id)a0 featureNames:(id)a1 vectorFeatureName:(id)a2 srcLabelName:(id)a3 destLabelName:(id)a4 startDate:(id)a5 endDate:(id)a6 preprocessHandler:(id /* block */)a7 inferenceHandler:(id /* block */)a8 metricsHandler:(id /* block */)a9 groundTruthLabelFeatureName:(id)a10 predictedLabelFeatureName:(id)a11;

@end
