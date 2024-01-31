@class PXSharedLibraryStatusProvider, PXSearchHomeGadgetDataSourceManager, NSString, PHPhotoLibrary, PXProgrammaticNavigationDestination;
@protocol PXViewControllerEventTracker;

@interface PXSearchHomeViewController : PXGadgetUIViewController <UISearchControllerDelegate, PXChangeObserver> {
    PXProgrammaticNavigationDestination *_px_navigationDestination;
}

@property (retain, nonatomic) PXSearchHomeGadgetDataSourceManager *searchHomeDataSourceManager;
@property (retain, nonatomic) id<PXViewControllerEventTracker> searchControllerEventTracker;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)gadgetSpecClass;
+ (id)_feedbackTapToRadarViewControllerWithAttachmentURLs:(id)a0;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)nextExistingParticipantOnRouteToDestination:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (void)didDismissSearchController:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (long long)scrollAnimationIdentifier;
- (id)initWithPhotoLibrary:(id)a0;
- (BOOL)searchTabIsSelected;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)gadget:(id)a0 didChange:(unsigned long long)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)didPresentSearchController:(id)a0;
- (id)px_navigationDestination;
- (void)_scrollViewStoppedScrolling;
- (id)_adjustedIndexPaths:(id)a0 withSection:(unsigned long long)a1;
- (void)_clearSearchField;
- (void)_configureSearchNavigationBar;
- (void)_handleAnalyticsNotification:(id)a0;
- (void)_notifyAnalyticsSearchAction:(unsigned long long)a0;
- (void)_registerNotificationsForAnalytics;
- (void)_reportZeroKeywordsToParsec:(BOOL)a0 searchCancelled:(BOOL)a1;
- (BOOL)_scrollToInitialPositionAnimated:(BOOL)a0;
- (void)_unregisterNotificationsForAnalytics;
- (void)_updateNavigationBarForSharedLibrary;
- (id)_visibleZeroKeywordIndexPaths;
- (void)activateSearchField;
- (void)performRecentSearch:(id)a0;
- (void)ppt_dismissKeyboard;
- (void)ppt_prepareForSearchScrollingTestWithSearchText:(id)a0 completion:(id /* block */)a1;
- (void)ppt_prepareForSearchTest:(id /* block */)a0;
- (void)ppt_prepareZeroKeywordRequest:(id /* block */)a0;
- (void)presentForSearchHashtag:(id)a0;
- (void)presentOneYearAgo;
- (void)presentSearchWithTerms:(id)a0 searchCategories:(id)a1;
- (void)presentSearchWithText:(id)a0;
- (void)presentSpotlightSearch:(id)a0;
- (BOOL)pu_handleSecondTabTap;
- (BOOL)searchBarIsActive;
- (id)searchControllerSearchText;
- (id)searchControllerSearchTokens;
- (void)selectZeroKeyword:(id)a0;
- (BOOL)shouldPreventPlaceholder;
- (void)zeroKeywordGadgetDidScroll:(id)a0;
- (void)zeroKeywordGadgetsDidReload;

@end
