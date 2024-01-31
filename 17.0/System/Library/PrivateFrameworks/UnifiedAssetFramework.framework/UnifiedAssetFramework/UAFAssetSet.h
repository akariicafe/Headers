@class NSUUID, NSString, NSDictionary, UAFAssetSetConfiguration, TRIClient, MAAutoAssetSet, NSObject;
@protocol OS_dispatch_queue;

@interface UAFAssetSet : NSObject {
    MAAutoAssetSet *_autoAssetSet;
    NSString *_autoAssetAtomicInstance;
    NSDictionary *_assetNameToAutoAsset;
    TRIClient *_client;
    UAFAssetSetConfiguration *_cfg;
    NSDictionary *_assetNameToTrial;
    NSDictionary *_assets;
    NSObject<OS_dispatch_queue> *_assetQueue;
    BOOL _rootsPresent;
    BOOL _factoryAssetsPresent;
    NSString *_autoAssetSetID;
    NSUUID *_uuid;
}

@property (readonly, nonatomic) NSDictionary *usages;
@property (readonly, copy) NSString *assetSetId;
@property (readonly, copy) NSString *name;

+ (id)getAutoAssetClientName;
+ (id)getAutoAssetLockReason:(id)a0;
+ (id)getEntitledTrialAssets:(id)a0 usages:(id)a1;
+ (BOOL)getLockedAutoAssets:(id)a0 usages:(id)a1 autoAssetSet:(id *)a2 atomicInstance:(id *)a3 assetNameToAutoAsset:(id *)a4;
+ (id)getMAAssetSetID:(id)a0;
+ (id)getTrialPurgeabilityLevel:(unsigned long long)a0;
+ (BOOL)isAssetValid:(id)a0 context:(id)a1;

- (void)dealloc;
- (void)refresh;
- (void).cxx_destruct;
- (id)getAsset:(id)a0;
- (id)getAsset:(id)a0 withUsage:(id)a1;
- (id)getAssets;
- (id)initWithAssetSet:(id)a0 usages:(id)a1;
- (BOOL)setAssetsPromoted:(id)a0 error:(id *)a1;
- (BOOL)setAssetsPromoted:(id)a0 purgabilityLevel:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setAssetsProvisional:(id)a0 error:(id *)a1;
- (id)_createAssetFromTrialInfo:(id)a0 assetName:(id)a1 fallback:(BOOL)a2 validPathOnly:(BOOL)a3;
- (id)_getAssetQueue;
- (BOOL)_shouldUseTrial:(id)a0 orFactory:(id)a1;
- (id)_targetingLanguageUsageToMetadata:(id)a0;
- (id)createAssetFromAutoAsset:(id)a0 assetName:(id)a1;
- (id)createAssetFromMAAsset:(id)a0 assetName:(id)a1;
- (id)createAssetFromPreinstalledWithTrialInfo:(id)a0 assetName:(id)a1 fromRoot:(BOOL)a2 withUsages:(id)a3;
- (id)createAssetFromTrialInfo:(id)a0 assetName:(id)a1;
- (id)createAssets;
- (id)getAutoAssets;
- (id)getMAAutoAssetDownloadErrorsSync;
- (id)getTrialAssets;
- (id)getTrialPreinstalledMAAssetsForRoots:(BOOL)a0;
- (id)initWithAssetSet:(id)a0 usages:(id)a1 configurationDirURLs:(id)a2;
- (id)namespacesOfAssetNames:(id)a0 error:(id *)a1;
- (id)overlayRoots:(id)a0;
- (BOOL)setAssetsProvisional:(id)a0 purgabilityLevel:(unsigned long long)a1 error:(id *)a2;

@end
