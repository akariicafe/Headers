@class NSString, NSProgress, PXAssetEditOperationManager;

@interface PXPhotoKitSelectVariationAssetActionPerformer : PXPhotoKitAssetActionPerformer

@property (class, readonly, nonatomic) PXAssetEditOperationManager *editOperationManager;
@property (class, readonly, nonatomic) NSString *editOperationType;

@property (retain, nonatomic) NSProgress *progress;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;

- (void).cxx_destruct;
- (void)cancelActionWithCompletionHandler:(id /* block */)a0;
- (void)performBackgroundTask;

@end
