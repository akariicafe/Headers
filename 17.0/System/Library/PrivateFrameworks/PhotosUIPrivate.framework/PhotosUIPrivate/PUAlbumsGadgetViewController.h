@class PXSharedLibraryStatusProvider, PUSessionInfo, NSString, PHPhotoLibrary, PXProgrammaticNavigationDestination, PXLibraryFilterState;

@interface PUAlbumsGadgetViewController : PXGadgetUIViewController <PXChangeObserver, PXNavigableCollectionContainer>

@property (retain, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (retain, nonatomic) PUSessionInfo *sessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)_updateNavigationBar;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)newAlbum:(id)a0;
- (id)initWithLayout:(id)a0 dataSourceManager:(id)a1;
- (id)_navigableGadgetForCollection:(id)a0;
- (void)configureSectionHeader:(id)a0;
- (BOOL)allowsBarManagement;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (void)newSmartAlbum:(id)a0;
- (void)provideViewControllersForDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)newFolder:(id)a0;
- (void)navigateToCollection:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_handleDoneButton:(id)a0;
- (BOOL)navigationHelperCanCurrentlyNavigate:(id)a0;
- (long long)scrollAnimationIdentifier;
- (void)_navigateToCollection:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_canNavigateToCollection:(id)a0 skipGadgets:(BOOL)a1;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (id)_createPlusButton;
- (void)newSharedAlbum:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)canNavigateToCollection:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)px_gridPresentation;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;

@end
