@class SFContentBlockerManager, NSString, NSArray, UISearchBar, SFWebExtensionsController, _SFPageFormatMenuController;

@interface SFManageExtensionsViewController : UITableViewController <WBSExtensionsControllerObserver, UISearchBarDelegate, SFContentBlockerManagerObserver> {
    SFWebExtensionsController *_webExtensionsController;
    SFContentBlockerManager *_contentBlockerManager;
    NSArray *_extensions;
    NSArray *_filteredExtensions;
    UISearchBar *_searchBar;
    NSString *_userTypedQuery;
    double _indentationWidthOfCell;
    NSArray *_extensionAppLockupViews;
    NSArray *_filteredExtensionAppLockupViews;
    BOOL _waitingForLockupViews;
    BOOL _presentedFromPrivateBrowsing;
}

@property (weak, nonatomic) _SFPageFormatMenuController *presentingPageFormatMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createManageExtensionsNavigationControllerFromPageFormatMenu:(id)a0 activeDocument:(id)a1;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)viewWillLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)_reload;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_commonInit;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)initFromSettingsWithExtensionsController:(id)a0 contentBlockerManager:(id)a1;
- (void)_extensionStateWasToggled:(id)a0;
- (void)_filterExtensionAppLockupViewsBasedOnUserTypedSearchQuery;
- (void)_filterExtensionsBasedOnUserTypedSearchQuery;
- (BOOL)_isAppStoreLinkSection:(long long)a0;
- (BOOL)_isOnOtherDevicesSection:(long long)a0;
- (void)_refreshExtensionData;
- (void)_setPrivateBrowsingStateForExtension:(id)a0 isOn:(BOOL)a1;
- (void)_updateCloudExtensionLockupViews;
- (void)_updateLastViewedDate;
- (void)contentBlockerManagerExtensionListDidChange:(id)a0;
- (void)extensionsControllerExtensionListDidChange:(id)a0;
- (id)initFromPageFormatMenu:(id)a0 activeDocument:(id)a1;
- (BOOL)safari_prefersHalfHeightSheetPresentationWithLoweredBar;

@end
