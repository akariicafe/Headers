@class SFTableViewDiffableDataSource, NSString, WBSSavedAccount, WBSAutoFillQuirksManager, KCSharingGroup, UIBarButtonItem;

@interface SFRecentlyDeletedAccountsViewController : _SFAccountTableViewController <SFAccountDetailViewControllerDelegate, SFAccountTableViewCellDelegate, SFTableViewDiffableDataSourceDelegate, _SFAccountManagerLockableContentContainer, PSStateRestoration> {
    SFTableViewDiffableDataSource *_diffableDataSource;
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
    unsigned long long _persona;
    KCSharingGroup *_group;
    UIBarButtonItem *_selectBarButtonItem;
    UIBarButtonItem *_cancelBarButtonItem;
    UIBarButtonItem *_deleteToolbarItem;
    UIBarButtonItem *_recoverToolbarItem;
    UIBarButtonItem *_recoverMenuToolbarItem;
    UIBarButtonItem *_toolbarSpacerItem;
}

@property (retain, nonatomic) WBSSavedAccount *savedAccountToRemoveAfterCompletedUpgradeInDetailView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL shouldSuppressAccountManagerLockedView;

- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateNavigationBar;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)_updateToolbar;
- (void)tableView:(id)a0 didBeginMultipleSelectionInteractionAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (BOOL)dataSource:(id)a0 canEditRowAtIndexPath:(id)a1;
- (BOOL)canBeShownFromSuspendedState;
- (id)_initWithAutoFillQuirksManager:(id)a0;
- (BOOL)_shouldShowToolbarWhenSearching;
- (void)_cancelBarButtonItemTapped:(id)a0;
- (id)_cellForIdentifier:(id)a0 tableView:(id)a1;
- (void)_deleteAccountsAtIndexPaths:(id)a0;
- (void)_deleteButtonTapped:(id)a0;
- (id)_headerForHeaderSection;
- (id)_headerForMyPasswordsSection;
- (id)_headerForSharingGroupSection:(id)a0;
- (void)_presentAlertToConfirmDeletingAccountsAtIndexPaths:(id)a0 completionHandler:(id /* block */)a1;
- (void)_recoverButtonTapped:(id)a0;
- (BOOL)_recoverSavedAccountToMyPasswords:(id)a0;
- (void)_recoverSavedAccounts:(id)a0 shouldRecoverToMyPasswords:(BOOL)a1;
- (void)_recoverSelectedAccountsToMyPasswords;
- (void)_recoverSelectedSavedAccounts;
- (id)_recoverSharedAccountsMenu;
- (void)_reloadDiffableDataSource;
- (void)_selectBarButtonItemTapped:(id)a0;
- (id)_selectedSavedAccounts;
- (void)_setEditing:(BOOL)a0;
- (void)_setUpNavigationBarAndToolbarItems;
- (BOOL)_shouldShowMyPasswordsSectionHeader;
- (id)initWithAutoFillQuirksManager:(id)a0;
- (id)initWithAutoFillQuirksManager:(id)a0 group:(id)a1;
- (void)passwordManagerWillLock;
- (void)searchPatternDidUpdate;

@end
