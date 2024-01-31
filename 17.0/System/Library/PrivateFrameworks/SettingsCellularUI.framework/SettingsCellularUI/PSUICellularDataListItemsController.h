@class RadiosPreferences;

@interface PSUICellularDataListItemsController : PSListItemsController <RadiosPreferencesDelegate>

@property (retain, nonatomic) RadiosPreferences *radioPreferences;

- (void)airplaneModeChanged;
- (id)init;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)getLogger;
- (id)specifiers;
- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isDataSwitchAutomatic:(id)a0;
- (void)reloadCache;

@end
