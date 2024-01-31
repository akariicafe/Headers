@class PHAsset, NSString, PEPhotoKitMediaDestination;

@interface PULivePhotoVariationEditOperationPerformer : PXAssetEditOperationPerformer <PELivePortraitBehaviorDelegate> {
    id /* block */ _completionHandler;
    BOOL _didSave;
    PEPhotoKitMediaDestination *_mediaDestination;
    NSString *_sourceEditOperationType;
}

@property (readonly, nonatomic) PHAsset *asset;
@property (nonatomic) BOOL liveIsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedResourceManager;

- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (void)performUndo:(id /* block */)a0;
- (void)_completeWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_handleDidFinishSavingEditsForAsset:(id)a0 error:(id)a1;
- (void)_handleLoadResult:(id)a0 analysisResult:(id)a1 editOperationType:(id)a2;
- (void)_performEditOperation:(id)a0 completionHandler:(id /* block */)a1;
- (void)_resourceLoadedWithResult:(id)a0 editOperationType:(id)a1;
- (void)_saveAssetEditsWithContentEditingInput:(id)a0 compositionController:(id)a1 imageVersion:(long long)a2 editOperationType:(id)a3;
- (BOOL)isLivePhotoVideoEnabled;
- (void)setLivePhotoVideoEnabled:(BOOL)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })unadjustedStillImageTime;

@end
