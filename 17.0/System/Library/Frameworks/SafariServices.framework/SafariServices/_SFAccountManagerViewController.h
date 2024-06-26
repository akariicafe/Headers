@class WBSSavedAccountStore, SFSharablePassword, SFAddSavedAccountViewController, UIBarButtonItem, WBSGeneratedPassword, SFAutoFillFeatureManager, NSMutableSet, NSString, UITableViewCell, KCSharingGroup, WBSPasswordWarningManager, SFAccountListSectionIdentifier, SFAccountManagerDrillInTableViewCellWithTrailingNumber, NSArray, PMTOTPMigrationController, WBSPasswordGenerationManager, SFTableViewDiffableDataSource, WBSAutoFillQuirksManager, WBSSavedAccount, SFAccountDetailViewController, UINavigationController, _SFSiteMetadataManager;
@protocol _SFAccountManagerViewControllerDelegate;

@interface _SFAccountManagerViewController : _SFAccountTableViewController <PSStateRestoration, SFSharedAccountsGroupInvitationViewControllerDelegate, PMGeneratedPasswordsLogDelegate, SafariPasswordManagersControllerDelegate, SFAccountDetailViewControllerDelegate, SFAccountManagerPlatterWithDeclineButtonCellDelegate, SFAccountTableViewCellDelegate, SFAddSavedAccountViewControllerDelegate, SFTableViewDiffableDataSourceDelegate, UIAdaptivePresentationControllerDelegate, _SFAccountManagerLockableContentContainer, _SFSharedSiteMetadataManagerProvider, PMTOTPMigrationControllerDelegate, SFMoveAccountsToGroupPickerViewControllerDelegate, SFSharedAccountsGroupCreationFlowNavigationControllerDelegate, SFSharedAccountsGroupInvitationsListViewControllerDelegate, SFSharedAccountsGroupViewControllerDelegate, WBSOngoingSharingGroupProviderSubscriber, _ASAccountAuthenticationModificationExtensionManagerObserver> {
    SFTableViewDiffableDataSource *_diffableDataSource;
    SFAccountListSectionIdentifier *_securityRecommendationsSectionIdentifier;
    SFAccountListSectionIdentifier *_tipSectionIdentifier;
    SFAccountListSectionIdentifier *_accountSourcesSectionIdentifier;
    SFAccountListSectionIdentifier *_sharedAccountsGroupManagementSectionIdentifier;
    UIBarButtonItem *_addNavigationBarItem;
    UIBarButtonItem *_cancelNavigationBarItem;
    UIBarButtonItem *_deleteNavigationBarItem;
    UIBarButtonItem *_ellipsisNavigationBarItem;
    UIBarButtonItem *_editNavigationBarItem;
    UIBarButtonItem *_cancelToolbarItem;
    UIBarButtonItem *_deleteToolbarItem;
    UIBarButtonItem *_editToolbarItem;
    BOOL _isContentUnavailable;
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
    WBSSavedAccountStore *_savedAccountStore;
    unsigned long long _persona;
    _SFSiteMetadataManager *_siteMetadataManager;
    SFSharablePassword *_receivedSharablePasswordRequiringPromptBeforeSaving;
    SFSharablePassword *_receivedInvalidSharablePassword;
    WBSPasswordWarningManager *_passwordWarningManager;
    BOOL _hasBeenAuthenticated;
    BOOL _hasEverShownSectionHeaders;
    WBSPasswordGenerationManager *_passwordGenerator;
    SFAutoFillFeatureManager *_autoFillFeatureManager;
    BOOL _userIsEditingCellInTableView;
    NSString *_securityRecommendationsSubtitleText;
    BOOL _isFirstWillAppear;
    BOOL _isObservingExtensionManagers;
    BOOL _hasLoadedSecurityRecommendations;
    BOOL _hasLoadedPasswords;
    SFAccountManagerDrillInTableViewCellWithTrailingNumber *_securityRecommendationsCell;
    UITableViewCell *_autoFillPasswordsCell;
    SFAddSavedAccountViewController *_addPasswordViewController;
    SFAccountDetailViewController *_detailViewController;
    long long _tipToShow;
    NSArray *_allSharedAccountsGroups;
    NSArray *_allSharedAccountsGroupsInvitations;
    KCSharingGroup *_sharedAccountsGroup;
    UITableViewCell *_viewGroupDetailsCell;
    BOOL _shouldShowGroupExitAlert;
    UINavigationController *_totpMigrationNavigationController;
    PMTOTPMigrationController *_totpMigrationController;
    NSMutableSet *_selectedSavedAccounts;
    NSArray *_generatedPasswordsMatchingSearchPattern;
    WBSGeneratedPassword *_generatedPasswordBeingTransformedIntoSavedAccount;
    BOOL _isLoadingFamilyMembersFromFamilyTip;
}

@property (weak, nonatomic) id<_SFAccountManagerViewControllerDelegate> delegate;
@property (retain, nonatomic) WBSSavedAccount *savedAccountToRemoveAfterCompletedUpgradeInDetailView;
@property (nonatomic) BOOL shouldShowSharingGroupWelcomeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL shouldSuppressAccountManagerLockedView;

- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)tableView:(id)a0 shouldHaveFullLengthBottomSeparatorForSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (void)viewDidLoad;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_updateContentUnavailableConfigurationUsingState:(id)a0;
- (id)navigationItem;
- (void)setToolbarItems:(id)a0 animated:(BOOL)a1;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didBeginMultipleSelectionInteractionAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHaveFullLengthTopSeparatorForSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayFooterView:(id)a1 forSection:(long long)a2;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (BOOL)dataSource:(id)a0 canEditRowAtIndexPath:(id)a1;
- (id)dataSource:(id)a0 headerTextForSection:(long long)a1;
- (long long)dataSource:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (id)newSharedSiteMetadataManager;
- (id)sectionIndexTitlesForDataSource:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (void)_cancelNavigationBarItemTapped:(id)a0;
- (id)viewControllerForTOTPGenerator:(id)a0;
- (id)_accountCellDataForUser:(id)a0 highLevelDomain:(id)a1;
- (id)_accountSourcesSectionIdentifier;
- (void)_addAccountSourcesSectionToItemsToSnapshot:(id)a0;
- (id)_addButtonMenu;
- (id)_addButtonMenuForGroupDetailView;
- (id)_addButtonMenuForTopLevelView;
- (void)_addItemsAboveAccountListForGroupDetailViewToSnapshot:(id)a0;
- (void)_addItemsAboveAccountListForTopLevelAccountManagerToSnapshot:(id)a0;
- (void)_addNewPassword:(id)a0;
- (void)_addSecurityRecommendationsSectionItemsToSnapshot:(id)a0;
- (id)_alertTitleForInvalidSharableAccount:(id)a0;
- (id)_autoFillCellForTableView:(id)a0;
- (id)_autoFillFeatureManager;
- (void)_beginEditing;
- (BOOL)_canAddPasswords;
- (void)_cancelEditing;
- (id)_cellForIdentifier:(id)a0 tableView:(id)a1 indexPath:(id)a2;
- (void)_checkForTipsToShow;
- (void)_configureNavigationBar;
- (void)_configureTableView;
- (void)_createNewFamilySharedCredentialsGroup;
- (id)_createPasswordOptionsViewController;
- (void)_deleteAccountsAtIndexPaths:(id)a0;
- (void)_deleteButtonTapped:(id)a0;
- (unsigned long long)_detailViewOptionsForSavedAccount:(id)a0;
- (void)_didSelectAutoFillCellAtIndexPath:(id)a0 inTableView:(id)a1;
- (void)_editNavigationBarItemTapped:(id)a0;
- (id)_ellipsisButtonMenu;
- (void)_fetchSharedAccountsGroups;
- (void)_fetchUpdatedGroup;
- (void)_findAndRemoveEntryForCompletedDetailViewUpgrade;
- (void)_generatedPasswordStoreDidChange;
- (long long)_indexOfFirstPasswordSection;
- (BOOL)_isAccountCellAtIndexPath:(id)a0;
- (void)_managedConfigurationSettingsDidChange:(id)a0;
- (void)_openiCloudKeychainSettings;
- (void)_presentAddSavedAccountViewController:(id)a0;
- (void)_presentAlertForInvalidSharableAccount:(id)a0;
- (void)_presentAlertForSharableAccountWithPasswordConflicts:(id)a0;
- (void)_presentAlertTellingUserThatMembersOfDeletedGroupMightHaveAccessToAccounts:(id)a0;
- (void)_presentAlertTellingUserThatMembersOfGroupTheyLeftMightHaveAccessToAccounts:(id)a0;
- (void)_presentAlertToConfirmDeletingAccountsAtIndexPaths:(id)a0;
- (void)_presentAlertToConfirmDeletingAccountsAtIndexPaths:(id)a0 completionHandler:(id /* block */)a1;
- (void)_presentDetailViewController:(id)a0;
- (void)_presentDuplicateCodeGeneratorAlert;
- (void)_presentErrorAlertForFailingToMoveAccount:(id)a0 toGroup:(id)a1;
- (void)_presentErrorAlertWithString:(id)a0;
- (void)_presentGeneratedPasswordsViewFilteredUsingSearchPattern:(BOOL)a0;
- (void)_presentGroupManagementViewController;
- (void)_presentGroupManagementViewControllerForStartingAcceleratedAddMembersFlow:(BOOL)a0;
- (void)_presentInvalidOtpauthMigrationURLAlert;
- (void)_presentInvalidOtpauthURLAlert;
- (void)_presentMovePasswordsToExistingGroupViewController;
- (void)_presentViewControllerForGroupIDIfPossible:(id)a0;
- (void)_reconfigureFamilyTipCells;
- (void)_reloadAccountSourcesSection;
- (void)_reloadSavedAccounts;
- (void)_reloadSavedAccountsAndTableViewData;
- (void)_reloadSecurityRecommendationsSection;
- (id)_rightToolbarItem;
- (id)_saveSharableAccount:(id)a0;
- (id)_saveSharableAccountWithPasswordConflicts:(id)a0;
- (void)_savedAccountStoreDidChange;
- (BOOL)_sectionWithIndexIsConfigurationSection:(long long)a0;
- (id)_securityRecommendationsSectionIdentifier;
- (void)_setAccessibilityIdentifiersOnAccountCell:(id)a0;
- (void)_setUserInterfaceElementsEnabled:(BOOL)a0;
- (id)_sharableAccountFromResourceDictionary:(id)a0;
- (id)_sharedAccountsGroupManagementSectionIdentifier;
- (id)_sharedCredentialsGroupEditCellForGroup:(id)a0;
- (BOOL)_shouldReconfigureAddNavigationBarButton;
- (BOOL)_shouldShowAutoFillItem;
- (BOOL)_shouldShowEllipsisNavigationItem;
- (BOOL)_shouldShowGeneratedPasswordSearchResultItem;
- (BOOL)_shouldShowGeneratedPasswordsEllipsisMenuItem;
- (BOOL)_shouldShowRecentlyDeletedSectionInGroup;
- (BOOL)_shouldShowSectionHeaders;
- (BOOL)_shouldShowSecurityRecommendationsItem;
- (void)_showSharingGroupWelcomeView;
- (void)_softDeleteAccountsAtIndexPaths:(id)a0;
- (id)_tableViewHeaderView;
- (id)_tipSectionIdentifier;
- (void)_updateContentUnavailableView;
- (void)_updateDeleteButton;
- (void)_updateGeneratedPasswordsMatchingSearchPattern;
- (void)_updateHeaderAndFooterViewsFloat;
- (void)_updateNavigationBarItems;
- (void)_updateSecurityRecommendationsSubtitleTextWithWarnings:(id)a0;
- (void)_updateToolbarItemsAnimated:(BOOL)a0;
- (void)_userChoseToUseTip:(long long)a0;
- (long long)_warningStyleForSecurityRecommendationsDrillInCell;
- (void)addSavedAccountViewControllerDidFinish:(id)a0 withSavedAccount:(id)a1;
- (id)additionalViewControllersToPushHandlingURLResourceDictionary:(id)a0 didAuthenticate:(BOOL)a1;
- (long long)dataSource:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)groupCreationFlowNavigationController:(id)a0 finishedWithGroup:(id)a1 error:(id)a2;
- (void)groupProviderReceivedUpdates:(id)a0;
- (void)groupViewController:(id)a0 didDeleteGroupWithMemberNames:(id)a1;
- (void)groupViewController:(id)a0 didLeaveGroupWithMemberNames:(id)a1;
- (void)handleContextMenuDeleteForIndexPath:(id)a0;
- (void)handleIconDidUpdateForDomain:(id)a0;
- (id)iconControllerForAddSavedAccountDetailViewController:(id)a0;
- (id)initWithSiteMetadataManager:(id)a0 autoFillQuirksManager:(id)a1 persona:(unsigned long long)a2 group:(id)a3;
- (void)invitationViewController:(id)a0 acceptedInvitationForGroup:(id)a1;
- (void)invitationViewController:(id)a0 declinedInvitationForGroup:(id)a1;
- (void)invitationViewController:(id)a0 failedToAcceptInvitationWithError:(id)a1;
- (void)invitationViewController:(id)a0 failedToDeclineInvitationWithError:(id)a1;
- (void)invitationViewControllerChoseNotToRespondToInvitation:(id)a0;
- (void)invitationsListViewController:(id)a0 acceptedInviteToGroup:(id)a1;
- (void)moveAccountsToGroupPickerTableViewController:(id)a0 didPickSavedAccounts:(id)a1;
- (void)moveAccountsToGroupPickerTableViewControllerDidCancel:(id)a0;
- (id)passwordGeneratorForAccountDetailViewController:(id)a0;
- (void)passwordManagerLogViewControllerWantsToDismiss;
- (void)passwordManagerLogViewControllerWantsToSaveGeneratedPassword:(id)a0;
- (void)passwordManagerWillLock;
- (id)passwordWarningManagerForAccountDetailViewController:(id)a0;
- (void)presentConfirmationAlertToShareSavedAccount:(id)a0 toGroup:(id)a1;
- (void)presentSharedAccountGroupCreationFlowWithSavedAccountToAddToNewlyCreatedGroup:(id)a0;
- (id)savedAccountControllerForQuery:(id)a0 queryBundleID:(id)a1 authenticationRequirementsMet:(BOOL)a2;
- (void)searchPatternDidUpdate;
- (void)showConflictAlertForSharablePasswordIfNecessary;
- (void)totpMigrationController:(id)a0 presentDetailsForSavedAccount:(id)a1;
- (void)totpMigrationController:(id)a0 presentPickerForGenerator:(id)a1;
- (void)totpMigrationControllerFinishedImport:(id)a0;
- (void)updateAccessibilityIdentifierForAccountCell:(id)a0;
- (void)updateUserAuthenticationState:(BOOL)a0;
- (void)userDidPressDeclineButtonForPlatterTableViewCell:(id)a0;
- (id)viewControllerForOtpauthMigrationWithURLResourceDictionary:(id)a0;
- (id)viewControllerForOtpauthWithURLResourceDictionary:(id)a0;
- (id)viewControllerToPresentWithURLResourceDictionary:(id)a0;

@end
