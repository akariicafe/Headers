@class NSString, MLModel, MLModelConfiguration, MLModelDescription;

@interface CHSingletonMLModel : NSObject {
    long long _modelUseCount;
    MLModel *_model;
}

@property (readonly, nonatomic) MLModelDescription *modelDescription;
@property (readonly, nonatomic) MLModelConfiguration *configuration;
@property (readonly, nonatomic) NSString *modelKey;

+ (id)modelWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (void)releaseModelWithKey:(id)a0;

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)model;
- (void).cxx_destruct;
- (long long)usageCount;

@end
