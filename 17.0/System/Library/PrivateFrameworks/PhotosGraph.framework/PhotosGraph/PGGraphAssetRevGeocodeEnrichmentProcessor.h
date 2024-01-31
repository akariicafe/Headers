@class NSArray, NSString;

@interface PGGraphAssetRevGeocodeEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>

@property (retain, nonatomic) NSArray *homeLocations;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_allowReverseGeocodingWithUpdateType:(long long)a0;
- (BOOL)_populateCacheWithRegions:(id)a0 manager:(id)a1 withProgressBlock:(id /* block */)a2;
- (void)_processMetricsOfAssetClustersInMoment:(id)a0;
- (void)enrichDataModelWithManager:(id)a0 curationContext:(id)a1 graphUpdateInventory:(id)a2 progressBlock:(id /* block */)a3;
- (void)invalidateReverseLocationDataForRevGeoProviderChangeUsingManager:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)revGeoProviderDidChangeForGraphApplicationDataURL:(id)a0;
- (void)sendMetricsForGeocodeProcesssor:(id)a0 toAnalytics:(id)a1 progressBlock:(id /* block */)a2;
- (void)setCurrentGeoProviderInGraphApplicationDataURL:(id)a0;

@end
