@class CKSettingsiMessageAppManager;

@interface CKSettingsiMessageAppsViewController : PSListController

@property (retain, nonatomic) CKSettingsiMessageAppManager *appManager;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)specifiers;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (id)_appsWithiMessageAppsSpecifiers;
- (void)installediMessageAppsDidChange:(id)a0;
- (BOOL)_canDeleteAppAtIndexPath:(id)a0;
- (void)_deleteApp:(id)a0;
- (id)_generateiMessageAppSpecifiers;
- (id)_iMessageOnlyAppsSpecifiers;
- (id)_specifierForApp:(id)a0;
- (id)getIsMessagesAppShownInSendMenuForSpecifier:(id)a0;
- (id)initWithAppManager:(id)a0;
- (void)setIsMessagesAppShownInSendMenu:(id)a0 specifier:(id)a1;

@end
