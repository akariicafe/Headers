@interface PUPhotoKitReviewActionPerformer : PUPhotoKitActionPerformer

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void)performUserInteractionTask;
- (void)_enterReviewMode;

@end
