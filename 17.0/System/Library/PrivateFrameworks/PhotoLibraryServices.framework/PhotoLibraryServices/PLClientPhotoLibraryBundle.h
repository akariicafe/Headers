@class PLLazyObject;

@interface PLClientPhotoLibraryBundle : PLPhotoLibraryBundle {
    PLLazyObject *_lazyClientSandboxExtensionCache;
}

- (void)close;
- (void)setSharedAlbumEnabled:(BOOL)a0;
- (BOOL)calculateTotalSizeWithResult:(id /* block */)a0;
- (id)newLibraryServicesManager;
- (id)transferPersons:(id)a0 toBundle:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)setPhotoStreamEnabled:(BOOL)a0;
- (id)newAssetsdClient;
- (id)initWithLibraryURL:(id)a0 bundleController:(id)a1;
- (id)transferAssets:(id)a0 toBundle:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)resetClientSandboxExtensionCache;
- (void)setCloudPhotoLibraryEnabled:(BOOL)a0;
- (void)_invalidateClientSandboxExtensionCache;
- (id)newBoundAssetsdServicesTable;
- (void)_initClientSandboxExtensionCache;
- (void).cxx_destruct;
- (id)newChangePublisher;
- (id)clientSandboxExtensionCache;

@end
