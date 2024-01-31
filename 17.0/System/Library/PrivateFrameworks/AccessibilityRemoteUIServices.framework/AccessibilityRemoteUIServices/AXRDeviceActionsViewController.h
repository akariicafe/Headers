@class AXRemoteDevice;
@protocol AXRDeviceActionsViewControllerDelegate;

@interface AXRDeviceActionsViewController : UITableViewController

@property (retain, nonatomic) AXRemoteDevice *activeDevice;
@property (weak, nonatomic) id<AXRDeviceActionsViewControllerDelegate> delegate;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)_numberOfRowsInSection:(long long)a0;
- (long long)_numberOfSections;
- (BOOL)accessibilityPerformEscape;
- (id)_actionForIndexPath:(id)a0;
- (BOOL)_deviceSupportsHandGestures;
- (id)_footerForSection:(long long)a0;
- (long long)_handGestureEventUsageForIndexPath:(id)a0;
- (void)_handleIndexPathSelection:(id)a0;
- (id)_imageForListItemAtIndexPath:(id)a0;
- (BOOL)_indexPathSectionIsForHandGestures:(long long)a0;
- (id)_leadingImageViewForListItemAtIndexPath:(id)a0;
- (id)_subtitleForListItemAtIndexPath:(id)a0;
- (id)_supportedHandGestures;
- (id)_titleForListItemAtIndexPath:(id)a0;
- (id)_titleForSection:(long long)a0;
- (id)initWithRemoteDevice:(id)a0 delegate:(id)a1;

@end
