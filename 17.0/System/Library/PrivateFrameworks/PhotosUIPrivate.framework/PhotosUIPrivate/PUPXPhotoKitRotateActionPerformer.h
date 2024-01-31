@interface PUPXPhotoKitRotateActionPerformer : PUPXPhotoKitBatchActionPerformer

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (BOOL)canPerformWithSelectionSnapshot:(id)a0 person:(id)a1;
+ (BOOL)_canPerformOnAsset:(id)a0;

- (void)performUserInteractionTask;
- (long long)rotateDirection;

@end
