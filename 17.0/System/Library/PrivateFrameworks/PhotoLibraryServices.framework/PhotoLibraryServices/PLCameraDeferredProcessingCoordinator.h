@class PLAssetsdClient, PLAssetsdResourceInternalClient;

@interface PLCameraDeferredProcessingCoordinator : NSObject {
    PLAssetsdClient *_assetsdClient;
}

@property (readonly) PLAssetsdResourceInternalClient *resourceInternalClient;

- (id)init;
- (void).cxx_destruct;
- (BOOL)prewarmWithPhotoSettings:(id)a0 error:(id *)a1;
- (BOOL)cancelAllPrewarming:(id *)a0;
- (void)cancelAllPrewarmingWithCompletionHandler:(id /* block */)a0;
- (id)initWithAssetdClient:(id)a0;
- (void)prewarmWithPhotoSettings:(id)a0 completionHandler:(id /* block */)a1;

@end
