@class NSArray, CKKeepMessagesPreferenceManager;

@interface CKKeepMessagesSelectionList : PSListController

@property (retain, nonatomic) NSArray *durationPreferenceTitles;
@property (retain, nonatomic) NSArray *durationPreferenceValues;
@property (nonatomic) long long selectedKeepMessagesPreferenceIndex;
@property (retain, nonatomic) CKKeepMessagesPreferenceManager *keepMessagesPreferenceManager;

- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)specifiers;
- (void).cxx_destruct;
- (void)_internalInit;
- (void)_configureInitialSelectedIndexes;
- (void)_selectionListDidSelectIndexPath:(id)a0;
- (void)_syncedSettingsDidChange:(id)a0;
- (void)_updatePreferenceAtIndexPath:(id)a0;
- (void)_warnAboutDeletingMessagesForSelectedListItem:(id)a0;
- (void)_warnForFinalConfirmationForUpdatingIndexPath:(id)a0;
- (void)updateKeepMessagesPreference:(id)a0;

@end
