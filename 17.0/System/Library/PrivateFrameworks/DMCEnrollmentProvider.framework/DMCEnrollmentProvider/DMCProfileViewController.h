@class RMConfigurationsSpecifierProvider, DMCProfileViewModel;
@protocol DMCProfileUIDataProvider, DMCProfileViewControllerDelegate;

@interface DMCProfileViewController : DMCProfileTableViewController

@property (nonatomic) BOOL profileRemovable;
@property (nonatomic) unsigned long long profileExpiry;
@property (retain, nonatomic) RMConfigurationsSpecifierProvider *rmSpecifierProvider;
@property (nonatomic) unsigned long long rmConfigurationsCount;
@property (retain, nonatomic) id<DMCProfileUIDataProvider> profileUIDataProvider;
@property (readonly, nonatomic) DMCProfileViewModel *UIProfile;
@property (nonatomic) long long profileViewMode;
@property (nonatomic) unsigned long long installProfileSource;
@property (nonatomic) BOOL installComplete;
@property (weak, nonatomic) id<DMCProfileViewControllerDelegate> profileViewControllerDelegate;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)setProfile:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)_setup;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 estimatedHeightForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)_poll;
- (id)initWithProfile:(id)a0 viewMode:(long long)a1;
- (id)initWithProfile:(id)a0 viewMode:(long long)a1 profileUIDataProvider:(id)a2;
- (BOOL)_delegateCanPoll;
- (BOOL)_delegateCanRemove;
- (BOOL)_delegateCanUpdate;
- (id)_emptyViewForHeaderFooter;
- (double)_heightForHeaderFooterInSection:(long long)a0;
- (BOOL)_isSectionPopulated:(long long)a0;
- (int)_profileDetailsModeForElevatedPayloadAtIndexPath:(id)a0;
- (unsigned long long)_profileExpiryForProfile:(id)a0;
- (void)_removeProfile;
- (void)_rmConfigsChanged:(id)a0;
- (BOOL)_shouldShowPollButton;
- (BOOL)_shouldShowRemoveButton;
- (BOOL)_shouldShowUpdateButton;
- (BOOL)_showManagedPayloads;
- (void)_tableChanged:(id)a0;
- (id)_tableView:(id)a0 buttonForRowAtIndexPath:(id)a1 text:(id)a2 color:(id)a3;
- (id)_tableView:(id)a0 elevatedPayloadCellForRowAtIndexPath:(id)a1;
- (id)_tableView:(id)a0 profileCellForRowAtIndexPath:(id)a1;
- (id)_tableView:(id)a0 profileMoreDetailsCellForRowAtIndexPath:(id)a1;
- (id)_tableView:(id)a0 removeButtonForRowAtIndexPath:(id)a1;
- (void)_updateProfile;
- (id)initWithMDMProfileForRMAccount;

@end
