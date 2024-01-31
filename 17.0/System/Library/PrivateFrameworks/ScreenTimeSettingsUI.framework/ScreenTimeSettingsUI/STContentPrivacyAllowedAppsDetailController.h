@class NSObject;
@protocol STContentPrivacyViewModelCoordinator;

@interface STContentPrivacyAllowedAppsDetailController : PSListController

@property (retain, nonatomic) NSObject<STContentPrivacyViewModelCoordinator> *coordinator;

- (id)init;
- (void)dealloc;
- (id)specifiers;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)defaultSwitchSpecifierWithConfiguration:(id)a0 key:(id)a1 fallbackLabel:(id)a2 icon:(id)a3;
- (void)_addBlacklistAppSpecifier:(id)a0 bundleID:(id)a1;
- (void)_addBooleanAppSpecifier:(id)a0 configuration:(id)a1 key:(id)a2 bundleID:(id)a3;
- (id)getItemSpecifierValue:(id)a0;
- (id)nameForInstalledSystemApp:(id)a0;
- (void)setItemSpecifierValue:(id)a0 specifier:(id)a1;

@end
