@class NSArray, NSString, NSOrderedSet, UIView, UISwitch, OBAnimationController;
@protocol WFBuddyViewControllerDelegate, WFNetworkListRecord, WFNetworkListDelegate;

@interface WFBuddyViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource, WFNetworkListing>

@property (retain, nonatomic) NSArray *sortedNetworks;
@property (weak) id<WFNetworkListDelegate> listDelegate;
@property (copy, nonatomic) NSString *alternateSetupTitle;
@property (copy, nonatomic) NSString *alternateSetupFooter;
@property (retain, nonatomic) UIView *buddyIPadContainerView;
@property (retain) NSOrderedSet *sections;
@property (retain, nonatomic) UISwitch *enableWAPISwitch;
@property BOOL tableViewIsUpdating;
@property (nonatomic) BOOL networkResultsChangedWhileUIUpdates;
@property (nonatomic) BOOL tableReloadRequestQueued;
@property (retain, nonatomic) NSArray *pendingNetworks;
@property (retain, nonatomic) OBAnimationController *animationController;
@property (nonatomic) BOOL showNetworkSettings;
@property (nonatomic) BOOL showAdditionalSetupInfo;
@property (nonatomic) BOOL supportsCellularActivation;
@property (weak, nonatomic) id<WFBuddyViewControllerDelegate> buddyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL showOtherNetwork;
@property float currentNetworkScaledRSSI;
@property (retain) id<WFNetworkListRecord> currentNetwork;
@property long long currentNetworkState;
@property unsigned long long currentNetworkSignalBars;
@property (nonatomic) long long deviceCapability;
@property (copy, nonatomic) NSString *currentNetworkSubtitle;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL userAutoJoinEnabled;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)init;
- (void)powerStateDidChange:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)refresh;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)setNetworks:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayFooterView:(id)a1 forSection:(long long)a2;
- (void)_notifyBuddyWiFiPickerIsVisble:(BOOL)a0;
- (id)_nameOfSection:(long long)a0;
- (id)_cellForNetworkRecord:(id)a0 tableView:(id)a1 indexPath:(id)a2;
- (void)_chooseOtherNetworkTapped:(id)a0;
- (id)_debugSectionStringFromSections:(id)a0;
- (void)_enableWAPISwitchChanged:(id)a0;
- (void)_refreshSections;
- (void)_updateCellsWithNewData:(id)a0 oldData:(id)a1 inSection:(long long)a2;
- (void)networkListDelegateWillPresentAccessoryViewController:(id)a0;

@end
