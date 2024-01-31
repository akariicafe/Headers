@class NSString, NSURL, PXPhotosContentController, NSOrderedSet, PXUpdater, PHPhotoLibrary, PXGView, PXPhotosViewModel, PXMediaProvider, UIBarButtonItem;
@protocol PXMemoryAssetsActionFactory, PUWallpaperPosterShuffleGridViewControllerDelegate;

@interface PUWallpaperPosterShuffleGridViewController : UIViewController <PXChangeObserver, PXPhotosContentControllerDelegate, PHPickerViewControllerDelegate, PXPhotosViewDelegate, PXPhotosPreferredAssetCropDelegate>

@property (readonly, nonatomic) NSURL *posterMediaDirectory;
@property (readonly, nonatomic) NSOrderedSet *initialPosterMedia;
@property (retain, nonatomic) NSOrderedSet *posterMedia;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) PXUpdater *updater;
@property (retain, nonatomic) PXGView *tungstenView;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider;
@property (retain, nonatomic) PXPhotosContentController *gridContentController;
@property (retain, nonatomic) PXPhotosViewModel *gridViewModel;
@property (retain, nonatomic) UIBarButtonItem *doneBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *addPhotosBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *removePhotosBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *enterSelectModeBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *exitSelectModeBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *selectAllBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *deselectAllBarButtonItem;
@property (weak, nonatomic) id<PUWallpaperPosterShuffleGridViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<PXMemoryAssetsActionFactory> memoryAssetsActionFactory;

- (void)_updateDataSource;
- (void)viewWillAppear:(BOOL)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)viewWillLayoutSubviews;
- (void)_setNeedsUpdate;
- (void)_handleDone:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)_invalidateDataSource;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)picker:(id)a0 didFinishPicking:(id)a1;
- (BOOL)photosViewController:(id)a0 didPickAssetReference:(id)a1;
- (void)_updateBarItems;
- (BOOL)allowsContextMenuInteractionForPhotosViewController:(id)a0;
- (void)dismissPresentedViewControllerForContentController:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })maskPaddingForContentController:(id)a0;
- (BOOL)photosContentController:(id)a0 presentViewController:(id)a1;
- (BOOL)photosContentController:(id)a0 pushViewController:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferredCropForAsset:(id)a0 withAspectRatio:(double)a1;
- (id)presentingViewControllerForContentController:(id)a0;
- (id)undoManagerForContentController:(id)a0;
- (void)_exitSelectMode;
- (void)_finishWithSelectedPosterMedia:(id)a0;
- (BOOL)_canAddMorePhotos;
- (void)_createBarButtonItemsIfNeeded;
- (id)_fetchResultWithAssetsFetchedFromPosterMedia:(id)a0;
- (void)_handleAddPhotos:(id)a0;
- (void)_handleDeselectAll:(id)a0;
- (void)_handleEnterSelectMode:(id)a0;
- (void)_handleExitSelectMode:(id)a0;
- (void)_handleRemovePhotos:(id)a0;
- (void)_handleSelectAll:(id)a0;
- (void)_invalidateBarItems;
- (id)initWithResourceManager:(id)a0 posterMedia:(id)a1;
- (void)setTungstenLayout:(id)a0;

@end
