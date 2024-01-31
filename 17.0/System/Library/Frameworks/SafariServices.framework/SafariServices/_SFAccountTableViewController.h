@class NSCountedSet, NSString, WBSSavedAccount, _SFAccountIconController, _SFAccountTableConfiguration, UISearchController;

@interface _SFAccountTableViewController : UITableViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, SFAccountDetailViewControllerDelegate, _SFAccountIconControllerDelegate, _SFAccountManagerLockableContentContainer> {
    NSCountedSet *_visibleDomains;
    _SFAccountTableConfiguration *_configuration;
    BOOL _isOneTimeSharingAccount;
}

@property (retain, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) _SFAccountIconController *iconController;
@property (retain, nonatomic) NSString *searchQuery;
@property (readonly, nonatomic) NSString *searchPattern;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) WBSSavedAccount *savedAccountToRemoveAfterCompletedUpgradeInDetailView;
@property (readonly, nonatomic) BOOL shouldSuppressAccountManagerLockedView;

- (void)viewWillAppear:(BOOL)a0;
- (void)willDismissSearchController:(id)a0;
- (BOOL)_hasMarkedText;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void).cxx_destruct;
- (void)willPresentSearchController:(id)a0;
- (void)_sceneDidEnterBackground:(id)a0;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (long long)positionForBar:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (BOOL)_shouldShowToolbarWhenSearching;
- (id)_allSharedCredentialGroupsMenuForSavedAccount:(id)a0;
- (id)_contextMenuForSavedAccountAtIndexPath:(id)a0;
- (void)_fillPasswordForSavedAccount:(id)a0;
- (void)_fillUsernameForSavedAccount:(id)a0;
- (void)_fillVerificationCodeForSavedAccount:(id)a0;
- (void)_shareSavedAccount:(id)a0 authenticationContext:(id)a1 modalPresentationSourceView:(id)a2;
- (void)_shareSavedAccount:(id)a0 modalPresentationSourceView:(id)a1;
- (BOOL)_shouldShowDeleteContextMenuItemForSavedAccount:(id)a0;
- (void)_updateIconForDomain:(id)a0 forCell:(id)a1;
- (void)handleContextMenuDeleteForIndexPath:(id)a0;
- (void)handleIconDidUpdateForDomain:(id)a0;
- (id)iconControllerForAccountDetailViewController:(id)a0;
- (void)iconDidUpdateForDomain:(id)a0 iconController:(id)a1;
- (id)initWithSiteMetadataManager:(id)a0 configuration:(id)a1;
- (void)presentConfirmationAlertToShareSavedAccount:(id)a0 toGroup:(id)a1;
- (void)presentSharedAccountGroupCreationFlowWithSavedAccountToAddToNewlyCreatedGroup:(id)a0;
- (void)searchPatternDidUpdate;

@end
