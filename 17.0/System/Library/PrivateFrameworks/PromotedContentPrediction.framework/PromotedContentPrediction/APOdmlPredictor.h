@class NSArray, MLModel, APOdmlFeatureHandler, APOdmlAssetManager;

@interface APOdmlPredictor : NSObject

@property (readonly, nonatomic) MLModel *predictionModel;
@property (readonly, nonatomic) APOdmlAssetManager *assetManager;
@property (readonly, nonatomic) APOdmlFeatureHandler *featureHandler;
@property (readonly, nonatomic) NSArray *adamIDs;

- (void).cxx_destruct;
- (id)initWithResponses:(id)a0 assetManager:(id)a1 model:(id)a2;
- (void)localOutputLog:(id)a0 adamID:(id)a1;
- (id)predictTapThroughRate;
- (void)validateOutput:(id)a0 adamID:(id)a1;

@end
