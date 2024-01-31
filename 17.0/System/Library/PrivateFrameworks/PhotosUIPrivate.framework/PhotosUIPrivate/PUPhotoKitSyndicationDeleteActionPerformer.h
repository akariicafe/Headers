@interface PUPhotoKitSyndicationDeleteActionPerformer : PUPhotoKitDestructiveActionsPerformer

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;
+ (BOOL)shouldEnableOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void)performUserInteractionTask;
- (long long)destructivePhotosAction;
- (void)performBackgroundTask;

@end
