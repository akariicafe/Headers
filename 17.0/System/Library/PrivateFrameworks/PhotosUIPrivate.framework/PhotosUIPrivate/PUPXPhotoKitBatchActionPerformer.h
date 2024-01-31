@interface PUPXPhotoKitBatchActionPerformer : PXPhotoKitAssetActionPerformer

+ (id)createPreviewActionWithTitle:(id)a0 image:(id)a1 handler:(id /* block */)a2;
+ (BOOL)canPerformBatchOnAsset:(id)a0;
+ (id)newActivityProgressAlertForAction:(id)a0 assets:(id)a1;
+ (id)newEditActionForPerformer:(id)a0 class:(Class)a1 assets:(id)a2;
+ (id)newProgressToastForAction:(id)a0 assets:(id)a1;

@end
