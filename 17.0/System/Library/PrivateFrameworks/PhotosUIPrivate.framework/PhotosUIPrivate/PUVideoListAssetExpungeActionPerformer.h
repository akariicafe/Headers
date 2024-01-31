@class NSString;
@protocol PUVideoListAssetExpungeActionPerformerDelegate;

@interface PUVideoListAssetExpungeActionPerformer : PUAssetActionPerformer <PXPhotoKitDeletePhotosActionControllerDelegate>

@property (weak, nonatomic) id<PUVideoListAssetExpungeActionPerformerDelegate> actionPerformerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;
+ (BOOL)shouldEnableOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)deletePhotosActionController:(id)a0 dismissConfirmationViewController:(id)a1;
- (void)deletePhotosActionController:(id)a0 presentConfirmationViewController:(id)a1;
- (void)performBackgroundTask;
- (void)_performUserInteractionTask;

@end
