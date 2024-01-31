@class NSArray, MAFloatVector;

@interface PGFingerprint : NSObject

@property (copy, nonatomic) MAFloatVector *floatArray;
@property (copy, nonatomic) NSArray *featureNames;

+ (id)_assetFingerprintWithFeatureExtractor:(id)a0 forAsset:(id)a1 withTransformers:(id)a2 error:(id *)a3;
+ (BOOL)_generateError:(id *)a0 errorCode:(long long)a1 errorMessage:(id)a2 underlyingError:(id)a3;
+ (id)assetCollectionFingerprintWithVersion:(long long)a0 forAssetCollection:(id)a1 withGraph:(id)a2 withTransformers:(id)a3 error:(id *)a4;
+ (id)assetCollectionFingerprintsDataframeWithVersion:(long long)a0 forAssetCollections:(id)a1 withGraph:(id)a2 withTransformers:(id)a3 progressReporter:(id)a4 error:(id *)a5;
+ (id)assetCollectionFingerprintsWithVersion:(long long)a0 forAssetCollections:(id)a1 withGraph:(id)a2 withTransformers:(id)a3 error:(id *)a4;
+ (id)assetFingerprintWithVersion:(long long)a0 forAsset:(id)a1 withGraph:(id)a2 withTransformers:(id)a3 error:(id *)a4;
+ (id)assetFingerprintsDataframeWithVersion:(long long)a0 forAssets:(id)a1 withGraph:(id)a2 withTransformers:(id)a3 progressReporter:(id)a4 error:(id *)a5;
+ (id)assetFingerprintsWithVersion:(long long)a0 forAssets:(id)a1 withGraph:(id)a2 withTransformers:(id)a3 error:(id *)a4;
+ (id)memoryFeatureNodesFingerprintsDataFrameWithVersion:(long long)a0 forFeatureNodes:(id)a1 uniqueMemoryIdentifiers:(id)a2 withGraph:(id)a3 progressReporter:(id)a4 error:(id *)a5;
+ (id)momentNodeFingerprintsDataFrameWithVersion:(long long)a0 forMomentNodes:(id)a1 withGraph:(id)a2 progressReporter:(id)a3 error:(id *)a4;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToFingerprint:(id)a0;
- (id)initWithFloatArray:(id)a0 withFeatureNames:(id)a1;

@end
