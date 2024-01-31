@interface PUPhotoKitTrashNoConfirmActionPerformer : PUPhotoKitDestructiveActionsPerformer

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (long long)destructivePhotosAction;
- (BOOL)shouldConfirmDestructiveAction;

@end
