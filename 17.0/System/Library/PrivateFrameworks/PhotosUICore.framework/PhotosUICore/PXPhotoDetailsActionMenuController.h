@class PHFetchResult, NSString, PXCMMSendBackSuggestionSource, PXPhotoKitAssetCollectionActionManager;
@protocol PXPhotosDetailsActionMenuDelegate, PXMemoryAssetsActionFactory;

@interface PXPhotoDetailsActionMenuController : PXActionMenuController <PXChangeObserver, PXAssetCollectionActionPerformerDelegate>

@property (readonly, nonatomic) PXPhotoKitAssetCollectionActionManager *assetActionManager;
@property (weak, nonatomic) id<PXPhotosDetailsActionMenuDelegate> delegate;
@property (retain, nonatomic) PXCMMSendBackSuggestionSource *sendBackSuggestionSource;
@property (retain, nonatomic) PHFetchResult *people;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<PXMemoryAssetsActionFactory> memoryAssetsActionFactory;

- (id)assetCollectionActionManager;
- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)undoManagerForActionPerformer:(id)a0;
- (void)actionPerformer:(id)a0 didChangeState:(unsigned long long)a1;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (id)presentationEnvironmentForActionPerformer:(id)a0;
- (void)assetCollectionActionPerformer:(id)a0 playMovieForAssetCollection:(id)a1;
- (id)titleForSection:(long long)a0;
- (id)iconForSection:(long long)a0;
- (id)availableActionTypes;
- (id)availableActionTypesInSection:(long long)a0;
- (id)availableHeaderActionTypes;
- (id)availableInternalActionTypes;
- (BOOL)enableSectionedMenus;
- (id)initWithActionManagers:(id)a0;
- (id)initWithSelectionManager:(id)a0 displayTitleInfo:(id)a1 blockActionManager:(id)a2;
- (BOOL)sectionDisplaysInline:(long long)a0;
- (BOOL)shouldAllowPerformanceOfActionType:(id)a0;

@end
