@interface AXSettingsSecondaryResourceDownloadController : AXSettingsResourceDownloadController

- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)specifiers;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (id)_footerLabel;
- (void)_donePressed;
- (id)_dialect;
- (void)_editPressed:(id)a0;
- (id)_internalSpecifiers;
- (id /* block */)getDialectPreferencesCallback;
- (void)manageEditButton;
- (id /* block */)setDialectPreferencesCallback;

@end
