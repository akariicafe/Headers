@interface HealthAppAuthorizationManagementLinkBuilder : HealthAppLinkBuilder

+ (BOOL)canOpenLinkWithSourceIdentifier:(id)a0 destinationIdentifier:(id)a1;
+ (BOOL)canOpenAuthorizationManagementWithValidIdentifier:(id)a0;

- (id)URLForAuthorizationManagementFromLocation:(long long)a0;
- (id)URLForAuthorizationManagementFromLocation:(long long)a0 bundleIdentifier:(id)a1;
- (id)_URLForAuthorizationManagementFromLocation:(long long)a0 bundleIdentifier:(id)a1;
- (id)_URLForAuthorizationManagementLocationHealthProfileWithBundleIdentifier:(id)a0;
- (id)_URLForAuthorizationManagementLocationHealthSharingWithBundleIdentifier:(id)a0;
- (id)_URLForAuthorizationManagementLocationSettingsWithBundleIdentifier:(id)a0;
- (id)appendBundleIdentifierIfNecessary:(id)a0;
- (id)appendBundleIdentifierIfNecessary:(id)a0 toPath:(id)a1;

@end
