@interface PUIContactsPrivacyController : PSListController

@property (retain, nonatomic) id controller;

- (id)specifiers;
- (void).cxx_destruct;
- (void)controller:(id)a0 didRefreshInfoForAppsWithBundleIdentifiers:(id)a1;
- (id)authorizationLevelForSpecifier:(id)a0;
- (void)setAuthorizationLevel:(id)a0 forSpecifier:(id)a1;
- (id)footerSpecifier;
- (id)appsUsingConactsSpecifiers;
- (id)createSpecifiers;
- (id)specifierForBundleIdentifier:(id)a0;

@end
