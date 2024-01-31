@class NSString, PXPhotoKitAssetActionPerformer;
@protocol PXMemoryAssetsActionFactory;

@interface PUPXPhotoKitActionPerformerAdapter : PUPhotoKitActionPerformer <PXActionPerformerDelegate> {
    PXPhotoKitAssetActionPerformer *_pxActionPerformer;
}

@property (class, readonly, nonatomic) Class pxActionPerformerClass;

@property (readonly, nonatomic) NSString *pxActionType;
@property (readonly, nonatomic) id<PXMemoryAssetsActionFactory> memoryAssetsActionFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (id)hostViewControllerForActionPerformer:(id)a0;
- (id)undoManagerForActionPerformer:(id)a0;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)_configureActionPerformer:(id)a0;
- (id)initWithActionType:(unsigned long long)a0 assets:(id)a1 orAssetsByAssetCollection:(id)a2;

@end
