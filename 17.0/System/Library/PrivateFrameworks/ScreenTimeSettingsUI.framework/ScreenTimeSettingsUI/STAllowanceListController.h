@class NSArray, NSDictionary, PSSpecifier, NSString, NSObject;
@protocol STRootViewModelCoordinator;

@interface STAllowanceListController : STPINListViewController <STAllowanceDetailListControllerDelegate>

@property (retain) PSSpecifier *informativeTextGroupSpecifier;
@property (copy) NSArray *allowanceSpecifiers;
@property (retain) PSSpecifier *enableAllAllowancesSpecifier;
@property BOOL shouldShowConfirmDeletionAlert;
@property (copy) NSDictionary *allowanceSpecifiersByBundleIdentifier;
@property (retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)specifiers;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)canBeShownFromSuspendedState;
- (void)_showAllowanceDetailController:(id)a0;
- (void)_adjustCellHeightForAllowanceSpecifier:(id)a0;
- (id)_allAllowancesEnabled:(id)a0;
- (void)_allowancesDidChange;
- (void)_devicesDidChange:(id)a0 coordinator:(id)a1;
- (void)_didFetchAppInfo:(id)a0;
- (void)_hasWatchOSDevicesDidChange:(BOOL)a0 coordinator:(id)a1;
- (id)_informativeTextWithDevices:(id)a0 hasWatchOSDevices:(BOOL)a1;
- (void)_reloadInformativeTextGroupSpecifierIfNeeded:(id)a0;
- (void)_setAllAllowancesEnabled:(id)a0 specifier:(id)a1;
- (void)_showConfirmDeletionView:(id)a0;
- (id)_specifierForAllowance:(id)a0;
- (id)_subtitleTextForAllowance:(id)a0;
- (void)addAllowance:(id)a0;
- (void)allowanceDetailController:(id)a0 didDeleteAllowance:(id)a1;
- (void)allowanceDetailController:(id)a0 didSaveAllowance:(id)a1;
- (void)confirmDeletion:(id)a0;
- (void)deleteAllowance:(id)a0;
- (void)showStoreDemoAlert;

@end
