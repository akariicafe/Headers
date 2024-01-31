@interface PXPhotoKitTrashNoConfirmAssetActionPerformer : PXPhotoKitTrashAssetActionPerformer

+ (id)createBarButtonItemWithTarget:(id)a0 action:(SEL)a1 actionManager:(id)a2;

- (long long)destructivePhotosAction;
- (BOOL)shouldSkipUserConfirmation;

@end
