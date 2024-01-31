@class UITableView, NSString, NSArray, PreviewTableViewController, UISearchController, NSTimer, UIBarButtonItem;
@protocol _SFNavigationIntentHandling, TabGroupProvider, WBSCloudTabDeviceProvider, LinkPreviewProvider, CloudTabsViewControllerDelegate;

@interface CloudTabsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITableViewDragDelegate, PreviewTableViewControllerDelegate, UISearchResultsUpdating, WBSCloudTabDeviceObserving> {
    id<WBSCloudTabDeviceProvider> _deviceProvider;
    NSArray *_devices;
    NSString *_primaryDeviceUUID;
    NSString *_profileIdentifier;
    BOOL _onlyShowsPrimaryDevice;
    NSString *_userTypedFilter;
    UIBarButtonItem *_doneBarButtonItem;
    UIBarButtonItem *_editBarButtonItem;
    PreviewTableViewController *_tableViewController;
    UITableView *_tableView;
    UISearchController *_searchController;
    NSTimer *_delayReloadTimer;
}

@property (nonatomic) id<CloudTabsViewControllerDelegate> delegate;
@property (weak, nonatomic) id<LinkPreviewProvider> linkPreviewProvider;
@property (weak, nonatomic) id<_SFNavigationIntentHandling> navigationIntentHandler;
@property (weak, nonatomic) id<TabGroupProvider> tabGroupProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismiss;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void).cxx_destruct;
- (void)cloudTabDeviceProvider:(id)a0 didUpdateCloudTabsInProfileWithIdentifier:(id)a1;
- (id)tableView:(id)a0 itemsForBeginningDragSession:(id)a1 atIndexPath:(id)a2;
- (long long)_tableView:(id)a0 dataOwnerForDragSession:(id)a1 atIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 canFocusRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didBeginMultipleSelectionInteractionAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 itemsForAddingToDragSession:(id)a1 atIndexPath:(id)a2 point:(struct CGPoint { double x0; double x1; })a3;
- (id)tableView:(id)a0 previewForDismissingContextMenuWithConfiguration:(id)a1;
- (id)tableView:(id)a0 previewForHighlightingContextMenuWithConfiguration:(id)a1;
- (BOOL)tableView:(id)a0 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (void)_delayReloadTimerFired;
- (void)_deleteRowAtIndexPath:(id)a0;
- (id)_deviceForIndexPath:(id)a0;
- (id)_filteredTabsInSection:(long long)a0;
- (void)_loadDevices;
- (void)_reloadDevicesAndTable;
- (id)_tabForIndexPath:(id)a0;
- (void)_updateContentUnavailableConfiguration;
- (id)_urlForRowAtIndexPath:(id)a0;
- (id)initWithDeviceProvider:(id)a0 primaryDeviceUUID:(id)a1 profileIdentifier:(id)a2;
- (id)previewTableViewController:(id)a0 URLForRowAtIndexPath:(id)a1;
- (id)previewTableViewController:(id)a0 menuForRowAtIndexPath:(id)a1;
- (id)safari_tableViewForScrollPositionSaving;
- (id)safari_tableViewScrollPositionSaveIdentifier;

@end
