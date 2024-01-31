@interface CSUISettingsBundleController : PSBundleController

- (id)settingsClassName;
- (id)name;
- (long long)serviceType;
- (id)initWithParentListController:(id)a0;
- (BOOL)_cnfreg_overrideForController:(id)a0 withDictionary:(id)a1;
- (void)_resetSpecifierAction:(id)a0;
- (void)bundleTappedWithSpecifier:(id)a0;
- (Class)controllerClassToInstantiate:(id)a0;

@end
