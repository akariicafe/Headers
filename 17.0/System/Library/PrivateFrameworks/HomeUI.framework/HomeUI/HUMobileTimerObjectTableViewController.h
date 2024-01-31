@class NSTimer, UITableViewDiffableDataSource, NSArray, HMAccessory, NSString, NSUUID, HUMobileTimerContentUnavailableView, NSMutableArray, NAFuture;
@protocol HUPresentationDelegate, HUQuickControlContentHelper, HFMediaProfileContainer;

@interface HUMobileTimerObjectTableViewController : UITableViewController <HFHomeKitAccessorySettingsDataSourceDelegate, HUPresentationDelegateHost, HUQuickControlContentRequiringHelper>

@property (retain, nonatomic) NAFuture *checkAccessAndFetchDataFuture;
@property (nonatomic) unsigned long long accessoryAccessState;
@property (retain, nonatomic) HUMobileTimerContentUnavailableView *noItemsView;
@property (nonatomic) BOOL wasControllableAtLastCheck;
@property (retain, nonatomic) NSTimer *accessoryActivationTimer;
@property (nonatomic) BOOL itemShouldDisplaySpinner;
@property (nonatomic) BOOL redrawSpinnerCell;
@property (nonatomic) BOOL createNewMTObjectPendingSidekickActivation;
@property (retain, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;
@property (retain, nonatomic) NSMutableArray *mobileTimerObjects;
@property (retain, nonatomic) NSArray *updatedMobileTimerObjects;
@property (retain, nonatomic) UITableViewDiffableDataSource *tableViewDataSource;
@property (retain, nonatomic) HMAccessory *accessory;
@property (retain, nonatomic) NAFuture *outstandingMobileTimerObjectsFuture;
@property (retain, nonatomic) NSString *loadingItemsTitle;
@property (retain, nonatomic) NSString *unavailableTitle;
@property (retain, nonatomic) NSString *unavailableText;
@property (retain, nonatomic) NSString *headerCellTitle;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSUUID *headerUUID;
@property (readonly, nonatomic) unsigned long long numberOfMobileTimerObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate;
@property (weak, nonatomic) id<HUQuickControlContentHelper> quickControlContentHelper;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)_showSpinner:(BOOL)a0;
- (void)_accessoryActivationTimerFinished:(id)a0;
- (BOOL)_activateAccessoryForMobileTimerCreation;
- (id)_baseMobileTimerObjectsFuture;
- (struct CGSize { double x0; double x1; })_calculatePreferredContentSize;
- (id)_canManagerControlAccessory;
- (void)_checkAccessFetchDataAndReloadTable;
- (void)_checkAndAddTimerObject;
- (id)_checkAndFetchTimerObjects;
- (void)_configureNoItemsViewAnimated:(BOOL)a0;
- (id)_findTimerObjectForID:(id)a0;
- (BOOL)_isSiriEndpointActive;
- (id)_newCellForHeaderTitle:(id)a0;
- (id)_newCellForMTTimerObjectUUID:(id)a0;
- (void)_quickDeleteMobileTimerObjectFromTable:(id)a0;
- (void)_reloadTableViewWithExistingData;
- (void)_removeTimerObjectAtIndexPath:(id)a0;
- (BOOL)_shouldAllowCellSelection;
- (void)didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)a0 settings:(id)a1;
- (id)initWithMediaProfileContainer:(id)a0;
- (void)presentAddMobileTimerObjectViewControllerOnMainThread;

@end
