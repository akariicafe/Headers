@class PXPeopleSectionedDataSource, PXSharedLibraryStatusProvider, PXPeopleProgressManager, PHPhotoLibrary, PXLibraryFilterState, NSString;

@interface PXPeopleOnboardingViewController : UIViewController <PXChangeObserver>

@property (readonly, nonatomic) PXPeopleProgressManager *progressManager;
@property (readonly, nonatomic) PXPeopleSectionedDataSource *peopleDataSource;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateNavigationBar;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)px_navigationDestination;
- (id)_emptyPlaceholderTextAttributesFromTextProperties:(id)a0;
- (void)_progressChanged:(id)a0;
- (void)_pushToPeopleHome;
- (id)_sharedLibraryEmptyPeopleAlbumMessage;
- (id)_sharedLibraryEmptyPeopleAlbumTitle;
- (id)_textAttachmentImageForSystemImageNamed:(id)a0;
- (void)_updateStatusViewForStatus:(long long)a0;
- (void)_updateStatusViewSharedLibrary;
- (id)initWithDataSource:(id)a0 progressManager:(id)a1 libraryFilterState:(id)a2;

@end
