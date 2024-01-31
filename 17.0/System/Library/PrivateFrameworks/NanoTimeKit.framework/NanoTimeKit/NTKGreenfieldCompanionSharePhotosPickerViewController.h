@class NTKPhotosFace, NSMutableIndexSet, NSObject, NTKCompanionCustomPhotosEditor;
@protocol OS_dispatch_queue, NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate;

@interface NTKGreenfieldCompanionSharePhotosPickerViewController : UICollectionViewController {
    NTKPhotosFace *_originalFace;
    NTKCompanionCustomPhotosEditor *_editor;
    NSMutableIndexSet *_selectedIndexes;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate> delegate;

- (void)collectionView:(id)a0 moveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_setupCollectionView;
- (void)_handleSelectionChanged;
- (void)_createPhotosEditorWithCompletionBlock:(id /* block */)a0;
- (void)_didTapDeselectAll;
- (void)_didTapOnCancelButton;
- (void)_didTapOnDoneButton;
- (void)_handleDidFinishWithNewResourcesDirectory:(id)a0;
- (void)_handleEditorDidCreated;
- (id)_queue_fetchAssets;
- (id)_queue_fetchOptions;
- (void)_setupNavigationItems;
- (id)initWithPhotosFace:(id)a0;

@end
