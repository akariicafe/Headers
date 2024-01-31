@class PXSharedLibraryStatusProvider, NSString, PHPhotoLibrary, PXLibraryFilterState, PXForYouBadgeManager;

@interface PXForYouGadgetViewController : PXGadgetUIViewController <PXSettingsKeyObserver, PXPreferencesObserver, PXNavigableSharedAlbumActivityFeedHostViewController>

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (readonly, nonatomic) PXForYouBadgeManager *badgeManager;
@property (nonatomic) BOOL rootGadgetControllerHasAppearedOnce;
@property (nonatomic) BOOL featuredContentAllowed;
@property (nonatomic) BOOL sharedLibrarySuggestionsAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preferencesDidChange;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)configureSectionHeader:(id)a0;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (void)viewDidLoad;
- (long long)scrollAnimationIdentifier;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)gadget:(id)a0 didChange:(unsigned long long)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (id)px_navigationDestination;
- (void)reloadContent;
- (void)_updateNavigationBarItems;
- (unsigned long long)_gadgetTypeForDestinationType:(long long)a0;
- (void)_handleTapToRadar;
- (void)_reloadContentDueToSettingsChangeWithDelay;
- (id)_suggestionDumpURL;
- (void)_userDidViewForYouContent;
- (id)initWithPhotoLibrary:(id)a0 libraryFilterState:(id)a1 badgeManager:(id)a2;
- (void)navigateToSharedAlbumActivityFeedAnimated:(BOOL)a0 configuration:(id /* block */)a1 completion:(id /* block */)a2;
- (void)navigationHelperDidNotFindValidGadget:(id)a0;
- (void)ppt_navigateToContentSyndicationGridViewControllerWithCompleteHandler:(id /* block */)a0;
- (void)ppt_navigateToFirstInvitationCMM:(BOOL)a0 withCompleteHandler:(id /* block */)a1;
- (void)ppt_navigateToLatestMemoryWithWillPresentHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)rootGadgetControllerDidDisappear;
- (void)rootGadgetControllerWillAppear;

@end
