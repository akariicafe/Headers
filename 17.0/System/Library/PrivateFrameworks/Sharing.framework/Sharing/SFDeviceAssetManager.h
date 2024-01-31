@class NSMutableDictionary, NSString, MAAsset, NSDictionary, CUReachabilityMonitor, NSObject, NSURL;
@protocol OS_dispatch_queue;

@interface SFDeviceAssetManager : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    MAAsset *_deviceAssetManagement;
    CUReachabilityMonitor *_reachabilityMonitor;
    NSDictionary *_productTypesMappingTable;
    NSDictionary *_cachedProductMappingsTable;
    NSURL *_cacheDirectory;
    NSMutableDictionary *_cachedQueryPaths;
}

@property (retain, nonatomic) NSString *networkStatus;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) BOOL useProcessLocalCache;

- (id)cacheDirectory;
- (void)onqueue_invalidate;
- (void)onqueue_activate;
- (void)onqueue_getCachedAssetBundleForTask:(id)a0;
- (id)init;
- (void)onqueue_variantsMatchingQuery:(id)a0 completionHandler:(id /* block */)a1;
- (void)onqueue_getAssetBundleForDeviceQuery:(id)a0 withRequestConfiguration:(id)a1;
- (void)onqueue_validateProductTypeInQuery:(id)a0;
- (void)onqueue_purgeAssetsMatchingQuery:(id)a0;
- (void)onqueue_downloadAsset:(id)a0 ucat:(struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *)a1 queryLogString:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)purgeAssetsMatchingQuery:(id)a0;
- (id)onqueue_sharingManagementAsset;
- (void)invalidate;
- (void)clearQueryResultFromLocalCache:(id)a0;
- (void)activate;
- (void)onqueue_updateSharingManagementAssetIfNecessary;
- (BOOL)pathInLocalCache:(id)a0;
- (void)onqueue_findAssetBundleForAssetQuery:(id)a0 ucat:(struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *)a1 queryType:(id)a2 fallback:(BOOL)a3 retryAttempt:(BOOL)a4 withCompletionHandler:(id /* block */)a5;
- (id)onqueue_mappedProductTypeForProductType:(id)a0;
- (id)localCacheWithFileName:(id)a0;
- (id)locallyCachedProductMappings;
- (void)getAssetBundleForDeviceQuery:(id)a0 withRequestConfiguration:(id)a1;
- (void)onqueue_executeNextMAQueryForTask:(id)a0;
- (void)mappedProductTypeForProductType:(id)a0 completionHandler:(id /* block */)a1;
- (id)locallyCachedQueryResults;
- (void)storeEntries:(id)a0 inLocalCacheWithFileName:(id)a1;
- (void)addQueryResultToLocalCache:(id)a0 url:(id)a1 isFallback:(BOOL)a2;
- (void).cxx_destruct;
- (void)logNetworkStatus;
- (id)onqueue_assetMappedProductTypeForProductType:(id)a0;
- (void)onqueue_updateMetaDataWithCompletionHandler:(id /* block */)a0;
- (void)storeProductMappingsInLocalCache:(id)a0;
- (void)onqueue_manuallyFindFallbackAssetBundleMatchingQuery:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)hardcodedMappedProducts;
- (BOOL)canUseMobileAssetSPI;
- (void)variantsMatchingQuery:(id)a0 completionHandler:(id /* block */)a1;

@end
