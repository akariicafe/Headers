@class SFTableViewDiffableDataSource, NSString, WBSAutoFillQuirksManager, WBSPasswordWarningManager, KCSharingGroup, NSMutableSet;
@protocol SFMoveAccountsToGroupPickerViewControllerDelegate;

@interface SFMoveAccountsToGroupPickerViewController : _SFAccountTableViewController <SFAccountTableViewCellDelegate, SFTableViewDiffableDataSourceDelegate> {
    SFTableViewDiffableDataSource *_diffableDataSource;
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
    WBSPasswordWarningManager *_passwordWarningManager;
    KCSharingGroup *_group;
    long long _pickerType;
    NSMutableSet *_selectedSavedAccounts;
}

@property (weak, nonatomic) id<SFMoveAccountsToGroupPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cancel;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (BOOL)dataSource:(id)a0 canEditRowAtIndexPath:(id)a1;
- (BOOL)canBeShownFromSuspendedState;
- (void)_addExistingPasswordsBarItemTapped:(id)a0;
- (id)_cellForIdentifier:(id)a0 tableView:(id)a1;
- (void)_checkReusedPasswordsAndPresentAlertIfNecessary:(id /* block */)a0;
- (id)_headerForHeaderSection;
- (id)_headerForMyPasswordsSection;
- (id)_headerForSharingGroupSection:(id)a0;
- (void)_presentConfirmationAlertForMovingSharedSavedAccountsWithConfiguration:(id)a0;
- (void)_reloadDiffableDataSource;
- (BOOL)_shouldShowMyPasswordsSectionHeader;
- (void)_updateNavigationBarItems;
- (id)initWithGroup:(id)a0 pickerType:(long long)a1 autoFillQuirksManager:(id)a2 passwordWarningManager:(id)a3;
- (void)searchPatternDidUpdate;

@end
