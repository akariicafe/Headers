@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PBBridgeAssetsManager : NSObject

@property (copy, nonatomic) id /* block */ assetDownloadCompletion;
@property (copy, nonatomic) id /* block */ allAssetsDownloadCompletion;
@property (retain, nonatomic) NSDictionary *deviceAttributes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;

- (id)init;
- (void)_runAssetQuery:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)_assetQueries:(id)a0 atlas:(id)a1;
- (id)_assetQueryForBridgeLaunchSplash;
- (id)_assetQueryForDeviceAttributes:(unsigned long long)a0 deviceAttributes:(id)a1;
- (id)_assetQueryForFamilySetupImage;
- (id)_assetQueryForZeroDayForcedUpdate;
- (void)_beginAssetDownloads:(id)a0;
- (void)_beginPullingAssetsForDeviceAttributes:(id)a0 completion:(id /* block */)a1;
- (void)_downloadAtlasAsset:(id)a0;
- (void)_linkDownloadedAsset:(id)a0;
- (void)_queryForImageAssets:(id)a0;
- (void)_runNextQuery:(id)a0;
- (void)_runQueries:(id)a0 withCompletion:(id /* block */)a1;
- (void)_startAssetDownload:(id)a0;
- (void)_startAtlasDownloadAndQueryOnSuccess:(id)a0;
- (void)beginPullingAssetsForAdvertisingName:(id)a0 completion:(id /* block */)a1;
- (void)beginPullingAssetsForDevice:(id)a0 completion:(id /* block */)a1;
- (void)beginPullingAssetsForDeviceMaterial:(unsigned long long)a0 size:(unsigned long long)a1 branding:(unsigned long long)a2 completion:(id /* block */)a3;
- (unsigned long long)hardwareGenerationForProductType:(id)a0;
- (void)purgeAllAssetsLocalOnly:(BOOL)a0;

@end
