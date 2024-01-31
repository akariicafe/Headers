@class MLFeatureValue, MLArrayBatchProvider, APOdmlAssetManager;

@interface APOdmlFeatureHandler : NSObject

@property (readonly, nonatomic) APOdmlAssetManager *assetManager;
@property (readonly, nonatomic) BOOL isTwoDimensional;
@property (retain, nonatomic) MLFeatureValue *appUsageVector;
@property (retain, nonatomic) MLFeatureValue *appDownloadVector;
@property (retain, nonatomic) MLFeatureValue *installedAppVector;
@property (readonly, nonatomic) MLArrayBatchProvider *batchInput;

- (void).cxx_destruct;
- (id)_translateFeaturesToTwoDimensional:(id)a0;
- (id)adSpecificFeatures:(id)a0;
- (void)addOnDeviceFeaturesToDictionary:(id)a0;
- (id)featuresForResponse:(id)a0 adSpecificFeatures:(id)a1;
- (void)fetchOnDeviceFeatures;
- (id)initWithResponses:(id)a0 assetManager:(id)a1 model:(id)a2;
- (BOOL)isTwoDimensional:(id)a0;

@end
