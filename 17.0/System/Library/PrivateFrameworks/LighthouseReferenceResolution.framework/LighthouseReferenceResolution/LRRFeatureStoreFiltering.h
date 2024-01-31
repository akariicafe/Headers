@class NSString, NSNumber;

@interface LRRFeatureStoreFiltering : NSObject

@property (readonly, nonatomic) NSString *experimentID;
@property (readonly, nonatomic) NSNumber *deploymentID;
@property (readonly, nonatomic) NSString *treatmentID;
@property (nonatomic) BOOL filterEnabled;

- (void).cxx_destruct;
- (id)readUserDefaultAndFilterSamples;
- (id)filterSamplesAndComputeTimestamps:(id)a0 assetInfo:(id)a1;
- (id)getTrialAssetInfo;
- (id)init:(id)a0 deploymentID:(long long)a1 treatmentID:(id)a2 filterEnabled:(BOOL)a3;
- (BOOL)isKeyInUserDefaults:(id)a0;
- (void)manageDeploymentInfoForEvaluation;

@end
