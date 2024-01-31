@class UIBarButtonItem, HUHomePodAlarmItemModuleController, NSString, _UIContentUnavailableView;
@protocol HUPresentationDelegate, HFMediaProfileContainer;

@interface HUOLDAlarmTableViewController : HUItemTableViewController <HUAlarmEditViewControllerDelegate, HUHomePodAlarmItemModuleControllerDelegate, HFAccessoryObserver, HFMediaObjectObserver, HFAccessorySettingMobileTimerAdapterObserver, UITableViewDelegatePrivate, HUPresentationDelegateHost>

@property (retain, nonatomic) HUHomePodAlarmItemModuleController *alarmModuleController;
@property (retain, nonatomic) _UIContentUnavailableView *noItemsView;
@property (readonly, nonatomic) BOOL isAccessoryControllable;
@property (readonly, nonatomic) BOOL isAlarmsSettingReady;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;
@property (retain, nonatomic) UIBarButtonItem *doneButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate;

- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (void)viewDidLoad;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)backgroundView;
- (void)accessoryDidUpdateControllable:(id)a0;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (double)heightForFooterInTableView:(id)a0;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)accessoryDidUpdateReachability:(id)a0;
- (void)accessoryDidUpdateReachableTransports:(id)a0;
- (id)editViewControllerForAlarmItem:(id)a0;
- (void)_discernReachabilityForAccessory:(id)a0;
- (void)_editDoneAction:(id)a0;
- (void)_layoutNoItemsLabel;
- (void)_numberOfItemsDidChangeAnimated:(BOOL)a0;
- (void)_updateAccessoryControllable:(BOOL)a0 alarmsSettingReady:(BOOL)a1;
- (void)alarmEditController:(id)a0 didAddAlarm:(id)a1;
- (void)alarmEditController:(id)a0 didAddAlarm:(id)a1 forMediaProfile:(id)a2;
- (void)alarmEditController:(id)a0 didDeleteAlarm:(id)a1;
- (void)alarmEditController:(id)a0 didDeleteAlarm:(id)a1 forMediaProfile:(id)a2;
- (void)alarmEditController:(id)a0 didEditAlarm:(id)a1;
- (void)alarmEditController:(id)a0 didEditAlarm:(id)a1 forMediaProfile:(id)a2;
- (void)alarmEditControllerDidCancel:(id)a0;
- (void)alarmEditControllerGettingDismissed:(id)a0;
- (id)alarmItemManager;
- (void)alarmItemModuleController:(id)a0 didSelectAlarmItem:(id)a1;
- (BOOL)alwaysUseDeltaTableViewUpdatesAfterViewHasAppeared;
- (id)initWithMediaProfileContainer:(id)a0;
- (void)itemManagerDidUpdate:(id)a0;
- (id)itemModuleControllers;
- (void)mobileTimerAdapterDidUpdateReadiness:(id)a0;
- (void)presentAddNewAlarmViewController;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;

@end
