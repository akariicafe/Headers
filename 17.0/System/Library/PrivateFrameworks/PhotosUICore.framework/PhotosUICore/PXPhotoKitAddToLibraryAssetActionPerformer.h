@interface PXPhotoKitAddToLibraryAssetActionPerformer : PXPhotoKitAssetActionPerformer

+ (id)createBarButtonItemWithTarget:(id)a0 action:(SEL)a1 actionManager:(id)a2;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (BOOL)canPerformOnSubsetOfSelection;
+ (id)createPreviewActionWithTitle:(id)a0 image:(id)a1 handler:(id /* block */)a2;

- (void)performUserInteractionTask;
- (void)_simulateImportForAssetReference:(id)a0 assetImportStatusManager:(id)a1;
- (void)importAssets:(id)a0;

@end
