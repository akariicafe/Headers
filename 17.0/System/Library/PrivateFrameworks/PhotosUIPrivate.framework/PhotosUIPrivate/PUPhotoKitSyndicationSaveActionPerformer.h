@interface PUPhotoKitSyndicationSaveActionPerformer : PUPXPhotoKitActionPerformerAdapter

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;
+ (BOOL)shouldEnableOnAsset:(id)a0 inAssetCollection:(id)a1;
+ (Class)pxActionPerformerClass;

- (id)pxActionType;

@end
