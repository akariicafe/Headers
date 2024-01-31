@class NSString, PUPhotoPinchGestureRecognizer, NSUserActivity, PUAlbumListViewControllerSpec, PUAlbumsGadgetProvider, PUSessionInfo, PXGadgetOrbContext;
@protocol PXMemoryAssetsActionFactory;

@interface PUHorizontalAlbumListGadget : PXHorizontalCollectionGadget <PUStackedAlbumTransitionDelegate, PXAssetCollectionActionPerformerDelegate, PXNavigableCollectionContainer>

@property (readonly, nonatomic) PUPhotoPinchGestureRecognizer *pinchGestureRecognizer;
@property (readonly, nonatomic) PUAlbumListViewControllerSpec *albumListViewControllerSpec;
@property (retain, nonatomic) NSUserActivity *siriActionActivity;
@property (nonatomic) BOOL shouldUseSingleHeightLayout;
@property (retain, nonatomic) PXGadgetOrbContext *previewOrbContext;
@property (readonly, nonatomic) PUAlbumsGadgetProvider *provider;
@property (retain, nonatomic) PUSessionInfo *sessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<PXMemoryAssetsActionFactory> memoryAssetsActionFactory;

+ (BOOL)_showsHorizontalScrollIndicator;

- (void)commitPreviewViewController:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)init;
- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (unsigned long long)gadgetCapabilities;
- (BOOL)collectionView:(id)a0 shouldSpringLoadItemAtIndexPath:(id)a1 withContext:(id)a2;
- (void)collectionView:(id)a0 performDropWithCoordinator:(id)a1;
- (id)previewContextGadget;
- (void)viewDidLoad;
- (id)stackedAlbumTransition:(id)a0 layoutForPHCollection:(id)a1 forCollectionView:(id)a2;
- (void)navigateToCollection:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)undoManagerForActionPerformer:(id)a0;
- (void)_updateCollectionViewLayout;
- (void)_navigateToCollection:(id)a0 animated:(BOOL)a1 interactive:(BOOL)a2 completion:(id /* block */)a3;
- (void)stackedAlbumTransition:(id)a0 setVisibility:(BOOL)a1 forPHCollection:(id)a2;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)_updateCollectionHeight;
- (void)didDismissPreviewWithPreviewView:(id)a0 committing:(BOOL)a1;
- (id)stackedAlbumTransition:(id)a0 layoutForCollection:(id)a1 forCollectionView:(id)a2;
- (id)initWithAlbumsGadgetProvider:(id)a0;
- (void).cxx_destruct;
- (id)accessoryButtonTitle;
- (id)previewParametersForTargetPreviewView:(id)a0;
- (void)setGadgetSpec:(id)a0;
- (BOOL)_canUseStackedAlbumTransitionToNavigationToCollection:(id)a0;
- (unsigned long long)accessoryButtonType;
- (id)previewViewControllerAtLocation:(struct CGPoint { double x0; double x1; })a0 fromSourceView:(id)a1;
- (id)contextMenuWithSuggestedActions:(id)a0;
- (void)didDismissPreviewViewController:(id)a0 committing:(BOOL)a1;
- (unsigned long long)gadgetType;
- (void)_handlePinch:(id)a0;
- (void)stackedAlbumTransition:(id)a0 setVisibility:(BOOL)a1 forCollection:(id)a2;
- (void)gadget:(id)a0 didChange:(unsigned long long)a1;
- (BOOL)canNavigateToCollection:(id)a0;
- (id)targetPreviewViewForLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (id)px_gridPresentation;
- (void)commitPreviewView:(id)a0;

@end
