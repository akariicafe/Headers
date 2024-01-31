@class NSString, MLModelConfiguration, MLModelMetadata, MLModelDescription;

@interface MLRegressor : MLModel <MLRegressor>

@property (readonly, nonatomic) MLModelDescription *modelDescription;
@property (readonly, nonatomic) MLModelConfiguration *configuration;
@property (readonly, nonatomic) BOOL supportsConcurrentSubmissions;
@property (readonly, nonatomic) unsigned long long predictionTypeForKTrace;
@property (readonly, nonatomic) BOOL recordsPredictionEvent;
@property (readonly, nonatomic) unsigned long long signpostID;
@property (readonly) MLModelMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predictionFromFeatures:(id)a0 regressor:(id)a1 options:(id)a2 error:(id *)a3;

- (id)regress:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initDescriptionOnlyWithSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;
- (id)initWithDescription:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)regressorResultFromOutputFeatures:(id)a0 error:(id *)a1;

@end
