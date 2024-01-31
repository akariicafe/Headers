@class NSMutableDictionary, SFDeviceAssetManager, NSObject;
@protocol OS_dispatch_queue;

@interface MRUAssetManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    SFDeviceAssetManager *_assetManager;
    NSMutableDictionary *_bundles;
    NSMutableDictionary *_completions;
}

@property (class, readonly, nonatomic) MRUAssetManager *sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)_imageForModelIdentifier:(id)a0 color:(id)a1;
- (void)activateAssetManager;
- (id)assetRequestConfigurationForModelIdentifier:(id)a0 color:(id)a1;
- (void)beginRequestForModelIdentifier:(id)a0 color:(id)a1 completion:(id /* block */)a2;
- (void)cacheBundle:(id)a0 forModelIdentifier:(id)a1 color:(id)a2;
- (id)cachedBundleForModelIdentifier:(id)a0 color:(id)a1;
- (id)currentInterfaceStyleImageName;
- (void)endRequestsForModelIdentifier:(id)a0 color:(id)a1 error:(id)a2;
- (void)handleDownloadCompletion:(id)a0 modelIdentifier:(id)a1 color:(id)a2 error:(id)a3;
- (void)handleQueryResult:(id)a0 modelIdentifier:(id)a1 color:(id)a2 productType:(id)a3 isFallback:(BOOL)a4 error:(id)a5;
- (id)imageForEndpointRoute:(id)a0;
- (void)imageForEndpointRoute:(id)a0 completion:(id /* block */)a1;
- (id)imageForModelIdentifier:(id)a0 color:(id)a1;
- (void)imageForModelIdentifier:(id)a0 color:(id)a1 completion:(id /* block */)a2;
- (id)imageForOutputDevice:(id)a0;
- (void)imageForOutputDevice:(id)a0 completion:(id /* block */)a1;
- (void)requestBundleForModelIdentifier:(id)a0 color:(id)a1;
- (id)resizeImage:(id)a0 size:(double)a1;

@end
