@class PXAssetActionManager;

@interface PUPXAssetActionManager : PUAssetActionManager

@property (readonly, nonatomic) PXAssetActionManager *underlyingActionManager;

- (id)init;
- (id)barButtonItemForActionType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)localizedTitleForActionType:(unsigned long long)a0;
- (id)_selectionSnapshotForAssetReferences:(id)a0;
- (id)actionPerformerForSettingFavoriteTo:(BOOL)a0 onAssetReferences:(id)a1;
- (id)actionPerformerForSimpleActionType:(unsigned long long)a0 onAssetReferences:(id)a1;
- (id)actionPerformerForSimpleActionType:(unsigned long long)a0 onAssetsByAssetCollection:(id)a1;
- (BOOL)canPerformActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;
- (id)initWithUnderlyingActionManager:(id)a0;
- (id)px_selectionManager;
- (BOOL)shouldEnableActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;

@end
