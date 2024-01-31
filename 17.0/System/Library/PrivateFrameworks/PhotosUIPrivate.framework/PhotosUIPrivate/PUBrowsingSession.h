@class PUContentTileProvider, PXLoadingStatusManager, PXContentPrivacyController, PXPhotosDetailsContext, PUBrowsingViewModel, PXAssetEditOperationManager, PUAssetActionManager, NSString, PUOneUpMergedVideoProvider, PUAssetsDataSourceManager, PUMediaProvider, PUTileAnimator;
@protocol PXAssetImportStatusManager;

@interface PUBrowsingSession : NSObject <PUAssetsDataSourceManagerDelegate, PUAssetActionManagerDelegate, PXLoadingStatusManagerObserver, PXAssetEditOperationManagerObserver>

@property (readonly, nonatomic) PXAssetEditOperationManager *editOperationManager;
@property (retain, nonatomic) PUMediaProvider *mediaProvider;
@property (retain, nonatomic) PUBrowsingViewModel *viewModel;
@property (retain, nonatomic) PUTileAnimator *tileAnimator;
@property (retain, nonatomic) PUContentTileProvider *contentTileProvider;
@property (readonly, nonatomic) PUAssetsDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PUAssetActionManager *actionManager;
@property (readonly, nonatomic) PXLoadingStatusManager *loadingStatusManager;
@property (readonly, nonatomic) id<PXAssetImportStatusManager> importStatusManager;
@property (readonly, nonatomic) PXContentPrivacyController *privacyController;
@property (readonly, nonatomic) PXPhotosDetailsContext *photosDetailsContext;
@property (readonly, nonatomic) PUOneUpMergedVideoProvider *mergedVideoProvider;
@property (readonly, nonatomic) NSString *emptyPlaceholderTitle;
@property (readonly, nonatomic) NSString *emptyPlaceholderSubtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)importBrowsingSessionWithDeviceUUID:(id)a0;

- (id)init;
- (void)loadingStatusManager:(id)a0 didUpdateLoadingStatus:(id)a1 forItemIdentifier:(id)a2;
- (void).cxx_destruct;
- (void)assetEditOperationManager:(id)a0 didChangeEditOperationStatusForAsset:(id)a1 context:(void *)a2;
- (void)assetEditOperationManager:(id)a0 didChangeEditOperationsPerformedOnAsset:(id)a1 context:(void *)a2;
- (id)initWithDataSourceManager:(id)a0 actionManager:(id)a1 mediaProvider:(id)a2 photosDetailsContext:(id)a3 lowMemoryMode:(BOOL)a4 importStatusManager:(id)a5 privacyController:(id)a6;
- (id)assetActionManagerCurrentAssetsDataSource:(id)a0;
- (void)assetsDataSourceManager:(id)a0 didChangeAssetsDataSource:(id)a1;
- (id)assetsDataSourceManagerInterestingAssetReferences:(id)a0;
- (void)configureTilingView:(id)a0;
- (id)imageWellThumbnailProvider;
- (id)initWithDataSourceManager:(id)a0 actionManager:(id)a1 mediaProvider:(id)a2;
- (id)initWithDataSourceManager:(id)a0 actionManager:(id)a1 mediaProvider:(id)a2 photosDetailsContext:(id)a3 lowMemoryMode:(BOOL)a4;
- (id)initWithDataSourceManager:(id)a0 actionManager:(id)a1 mediaProvider:(id)a2 photosDetailsContext:(id)a3 lowMemoryMode:(BOOL)a4 importStatusManager:(id)a5;

@end
