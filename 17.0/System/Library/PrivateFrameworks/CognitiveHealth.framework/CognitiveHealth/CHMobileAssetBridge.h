@interface CHMobileAssetBridge : NSObject

- (void)autoAssetAvailableForUseForAssetType:(id)a0 assetSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)autoAssetEndAllLocksForAssetType:(id)a0 assetSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)autoAssetEndLockContentForAssetType:(id)a0 assetSpecifier:(id)a1 endLockReason:(id)a2 completion:(id /* block */)a3;
- (void)autoAssetInterestInContentForAssetType:(id)a0 assetSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)autoAssetLockContentForAssetType:(id)a0 assetSpecifier:(id)a1 lockReason:(id)a2 completion:(id /* block */)a3;

@end
