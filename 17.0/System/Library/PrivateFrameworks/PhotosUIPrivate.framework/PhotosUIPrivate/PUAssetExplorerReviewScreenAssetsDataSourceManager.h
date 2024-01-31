@class NSDictionary, PUAssetsDataSourceManager, NSString;

@interface PUAssetExplorerReviewScreenAssetsDataSourceManager : PUAssetsDataSourceManager <PUAssetsDataSourceManagerDelegate>

@property (copy, nonatomic, setter=_setReplacementAssetsByUUID:) NSDictionary *_replacementAssetsByUUID;
@property (retain, nonatomic, setter=_setOriginalDataSourceManager:) PUAssetsDataSourceManager *_originalDataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateDataSource;
- (void)performChanges:(id /* block */)a0;
- (void).cxx_destruct;
- (void)assetsDataSourceManager:(id)a0 didChangeAssetsDataSource:(id)a1;
- (id)assetsDataSourceManagerInterestingAssetReferences:(id)a0;
- (void)detachFromOriginalDataSourceManager;
- (id)initWithOriginalDataSourceManager:(id)a0;

@end
