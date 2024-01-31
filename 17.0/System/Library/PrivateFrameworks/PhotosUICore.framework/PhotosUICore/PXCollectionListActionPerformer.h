@class PHCollectionList, NSString, UIAlertAction, PHCollection;

@interface PXCollectionListActionPerformer : PXActionPerformer <UIAdaptivePresentationControllerDelegate, PHPickerViewControllerDelegate>

@property (weak, nonatomic, setter=_setCreateAlbumAlertAction:) UIAlertAction *createAlbumAlertAction;
@property (copy, nonatomic) id /* block */ finishedPickingBlock;
@property (retain, nonatomic) PHCollection *createdCollection;
@property (readonly, nonatomic) PHCollectionList *collectionList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localizedTitleForActionType:(id)a0;
+ (BOOL)canPerformActionForCollectionList:(id)a0;

- (void)presentationControllerDidDismiss:(id)a0;
- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)picker:(id)a0 didFinishPicking:(id)a1;
- (void)_didChooseAlbumTitle:(id)a0 completionHandler:(id /* block */)a1;
- (void)_presentPickerWithValidAlbumTitle:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateCreateAlbumTextField:(id)a0;
- (id)_validateNewCollectionTitle:(id)a0;
- (void)createAlbumWithAssets:(id)a0 albumTitle:(id)a1;
- (id)initWithActionType:(id)a0 collectionList:(id)a1;
- (void)presentSetupUIForAlbumCreationWithCompletionHandler:(id /* block */)a0;

@end
