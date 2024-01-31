@class NSString, PUActivitySharingController;
@protocol PXMemoryAssetsActionFactory;

@interface PUPXPhotoKitShareAssetActionPerformer : PXPhotoKitAssetActionPerformer <PXCMMActionPerformerDelegate, PXActivitySharingControllerDelegate> {
    PUActivitySharingController *_activitySharingController;
}

@property (readonly, nonatomic) id<PXMemoryAssetsActionFactory> memoryAssetsActionFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBarButtonItemWithTarget:(id)a0 action:(SEL)a1 actionManager:(id)a2;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (id)createPreviewActionWithTitle:(id)a0 image:(id)a1 handler:(id /* block */)a2;

- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (id)undoManagerForActionPerformer:(id)a0;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)completeUserInteractionTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (id)_assetsFetchResultByAssetCollectionFromCollectionListFetchResult:(id)a0 inDataSource:(id)a1;
- (void)_didCompleteWithActivityType:(id)a0 success:(BOOL)a1 asset:(id)a2 person:(id)a3 selectionSnapshot:(id)a4;
- (void)_performNotThisPersonWithCompletionHandler:(id /* block */)a0;
- (void)_performSetKeyFaceWithAsset:(id)a0 completionHandler:(id /* block */)a1;
- (void)_presentShareSheet;
- (void)activitySharingController:(id)a0 didCompleteWithActivityType:(id)a1 success:(BOOL)a2;
- (void)activitySharingControllerDidCancel:(id)a0;

@end
