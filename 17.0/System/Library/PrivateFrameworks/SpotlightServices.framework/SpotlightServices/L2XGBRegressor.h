@class MLModel;

@interface L2XGBRegressor : NSObject

@property (readonly, nonatomic) MLModel *model;

+ (void)loadContentsOfURL:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (id)URLOfModelInThisBundle;
+ (void)loadWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

- (id)init;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (void)predictionFromFeatures:(id)a0 completionHandler:(id /* block */)a1;
- (void)predictionFromFeatures:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)initWithMLModel:(id)a0;
- (id)predictionsFromInputs:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromL1Score:(double)a0 freshness:(double)a1 photosFavorited:(double)a2 aestheticScore:(double)a3 curationScore:(double)a4 matchedFieldsCount:(double)a5 matchedPeopleRatio:(double)a6 matchedLocationRatio:(double)a7 matchedSceneLabelRatio:(double)a8 matchedSceneSynonymRatio:(double)a9 matchedOCRCharacterMatchRatio:(double)a10 matchedSceneConfidence:(double)a11 matchedSceneBoundingBox:(double)a12 matchedOCRImportance:(double)a13 error:(id *)a14;

@end
