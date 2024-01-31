@class PUPhotoKitDataSourceManager;

@interface PUPhotoKitAssetActionManager : PUAssetActionManager

@property (retain, nonatomic) PUPhotoKitDataSourceManager *dataSourceManager;
@property (nonatomic) BOOL enableNavigateToPhotos;

+ (Class)actionPerformerClassForActionType:(unsigned long long)a0;

- (id)_photosDataSource;
- (void).cxx_destruct;
- (BOOL)_actionTypeIsSimple:(unsigned long long)a0;
- (id)_photoKitAssetsDataSource;
- (id)actionPerformerForDuplicatingAssetsByAssetCollection:(id)a0 withNewStillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)actionPerformerForEditingWithQuickCropContext:(id)a0 onAsset:(id)a1;
- (id)actionPerformerForPastingAdjustmentsByAssetCollection:(id)a0;
- (id)actionPerformerForRemoveAssetsFromFeaturedPhotosByAssetCollection:(id)a0 assetToSuggestionMap:(id)a1;
- (id)actionPerformerForRevertingAdjustmentsByAssetCollection:(id)a0;
- (id)actionPerformerForSettingFavoriteTo:(BOOL)a0 onAssetsByAssetCollection:(id)a1;
- (id)actionPerformerForSimpleActionType:(unsigned long long)a0 onAssetsByAssetCollection:(id)a1;
- (BOOL)canPerformActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;
- (BOOL)shouldEnableActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;

@end
