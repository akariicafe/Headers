@class SFTableViewDiffableDataSource, NSString, WBSAutoFillQuirksManager, KCSharingGroup, NSMutableSet;
@protocol SFSharedAccountsGroupInvitationAcceptanceRemoveDuplicateCredentialsViewControllerDelegate;

@interface SFSharedAccountsGroupInvitationAcceptanceRemoveDuplicateCredentialsViewController : _SFAccountTableViewController <SFAccountTableViewCellDelegate, SFTableViewDiffableDataSourceDelegate> {
    SFTableViewDiffableDataSource *_diffableDataSource;
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
    KCSharingGroup *_group;
    NSMutableSet *_selectedSavedAccounts;
}

@property (weak, nonatomic) id<SFSharedAccountsGroupInvitationAcceptanceRemoveDuplicateCredentialsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (BOOL)dataSource:(id)a0 canEditRowAtIndexPath:(id)a1;
- (BOOL)canBeShownFromSuspendedState;
- (id)_cellForIdentifier:(id)a0 tableView:(id)a1;
- (void)_deleteButtonTapped:(id)a0;
- (id)_headerForHeaderSection;
- (void)_notNowButtonTapped;
- (void)_reloadDiffableDataSource;
- (void)_updateNavigationBarItems;
- (id)initWithGroup:(id)a0 autoFillQuirksManager:(id)a1;
- (void)searchPatternDidUpdate;

@end
