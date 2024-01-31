@class NSString;

@interface PXPhotoKitDestructiveActionPerformer : PXPhotoKitAssetActionPerformer <PXPhotoKitDeletePhotosActionControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canExpungeAsset:(id)a0 inAssetCollection:(id)a1;

- (void)performUserInteractionTask;
- (BOOL)isCancellable;
- (void)deletePhotosActionController:(id)a0 presentConfirmationViewController:(id)a1;
- (id)_assetsAllowedToExpunge:(id)a0;
- (void)_logCompletionAnalyticsForAssets:(id)a0 withAction:(long long)a1;
- (void)_performAction:(long long)a0 onAssets:(id)a1;
- (void)_presentAllDuplicatesDeletionAlertWithCompletion:(id /* block */)a0;
- (long long)destructivePhotosAction;

@end
