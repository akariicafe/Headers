@class PHPhotoLibrary, NSArray, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface PGRevGeocodeProcessor : NSObject

@property (weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (retain, nonatomic) NSArray *homeLocations;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *applicationDataQueue;
@property (readonly, nonatomic) double sumNumberOfAssetClustersPerMoment;
@property (readonly, nonatomic) double sumSquareNumberOfAssetClustersPerMoment;
@property (readonly, nonatomic) double sumNumberOfAssetsPerCluster;
@property (readonly, nonatomic) double sumSquareNumberOfAssetsPerCluster;
@property (readonly, nonatomic) double numberOfAssetClustersWithin10mOfCenter;
@property (readonly, nonatomic) double numberOfAssetClustersWithin20mOfCenter;
@property (readonly, nonatomic) double numberOfAssetClustersWithin50mOfCenter;
@property (readonly, nonatomic) double numberOfAssetClustersWithin100mOfCenter;
@property (readonly, nonatomic) double numberOfAssetClusters100mPlusFromCenter;
@property (readonly, nonatomic) unsigned long long numberOfMomentsRevGeocoded;
@property (readonly, nonatomic) unsigned long long numberOfAssetClustersRevGeocoded;

+ (id)homeLocationsWithManager:(id)a0;
+ (id)momentsRequiringRevGeocodingWithUUIDs:(id)a0 inPhotoLibrary:(id)a1 defaultToAllAssets:(BOOL)a2 loggingConnection:(id)a3;
+ (id)reverseGeoFetchOptionsForPhotoLibrary:(id)a0;

- (void).cxx_destruct;
- (BOOL)revGeocodeAssets:(id)a0 progressBlock:(id /* block */)a1;
- (id)_clusterAssets:(id)a0 assetsWithInvalidLocationInMoment:(id *)a1;
- (id)_clusterAssetsInMoment:(id)a0 assetsWithInvalidLocationInMoment:(id *)a1;
- (BOOL)_populateCacheWithRegions:(id)a0 withProgressBlock:(id /* block */)a1;
- (void)_processMetricsOfAssetClustersInMoment:(id)a0;
- (BOOL)_regionIsHome:(id)a0;
- (void)_resetMetrics;
- (id)_revGeoLocationDataForRegion:(id)a0;
- (BOOL)_revGeocodeAssetClusters:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)_setRevGeoLocationData:(id)a0 onAssets:(id)a1;
- (void)_updateGeoInfoForAssetClusters:(id)a0 progressBlock:(id /* block */)a1;
- (id)initWithPhotoLibrary:(id)a0 homeLocations:(id)a1 loggingConnection:(id)a2;
- (BOOL)revGeocodeMoments:(id)a0 progressBlock:(id /* block */)a1;

@end
