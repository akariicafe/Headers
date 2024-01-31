@class PXAssetsDataSourceCountsController, NSString, PXSharedLibraryStatusProvider, PXAssetsDataSourceManager, PXLibraryFilterState, NSArray, PXContentFilterState;
@protocol PXFilterControllerDelegate;

@interface PXUIFilterController : UITableViewController <UITableViewDataSource, UITableViewDelegate, PXChangeObserver, PXFilterController, UIPopoverPresentationControllerDelegate> {
    NSArray *_contentFilterGroups;
    PXAssetsDataSourceCountsController *_countsController;
}

@property (readonly, weak, nonatomic) id<PXFilterControllerDelegate> filterControllerDelegate;
@property (readonly, nonatomic) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (retain, nonatomic) PXAssetsDataSourceManager *dataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (copy, nonatomic) PXContentFilterState *contentFilterState;

+ (BOOL)_isContentFilterItemTagHandledBySwitch:(long long)a0;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (void)presentationController:(id)a0 willPresentWithAdaptiveStyle:(long long)a1 transitionCoordinator:(id)a2;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 estimatedHeightForHeaderInSection:(long long)a1;
- (void)_doneButtonPressed:(id)a0;
- (void)_setupTableView;
- (id)_contentFilterGroups;
- (long long)_contentFilterGroupsCount;
- (void)_filterControllerDidClose;
- (id)_localizedCounts;
- (id)_localizedGuestCounts;
- (id)_sectionHeaderTitleTextAttributes;
- (void)_setVisibilityForSender:(id)a0;
- (void)_setupNavigationBar;
- (void)_tappedRowAtIndexPath:(id)a0;
- (void)_updateContentFilterStateWithFilterItemTag:(long long)a0 shouldEnable:(BOOL)a1;
- (void)_updateFooterLayout;
- (void)_updateFooterStatus;
- (void)_updateTableView;
- (id)initWithDelegate:(id)a0 libraryFilterState:(id)a1 initialContentFilterState:(id)a2 isSyndicationLibraryAlbum:(BOOL)a3 sharedLibraryStatusProvider:(id)a4;

@end
