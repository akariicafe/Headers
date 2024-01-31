@class WBSWebExtensionData;

@interface SFWebExtensionExtensionWrapper : SFExtensionWrapper {
    WBSWebExtensionData *_webExtension;
}

- (id)shortName;
- (void)disable;
- (id)extension;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (id)displayName;
- (id)containingAppDisplayName;
- (id)enabledProfiles;
- (void)_enableNewTabOverrideExtensionWithPresentingViewController:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)allowedInPrivateBrowsing;
- (BOOL)canLoadWithErrorString:(id *)a0;
- (void)enableWithPresentingViewController:(id)a0 completionHandler:(id /* block */)a1;
- (id)enabledNamedProfiles;
- (id)initWithWebExtensionData:(id)a0;
- (BOOL)isContentBlocker;
- (BOOL)isEnabledInAllNamedProfiles;
- (BOOL)isEnabledInProfile:(id)a0;
- (void)setAllowedInPrivateBrowsing:(BOOL)a0;
- (Class)settingsPermissionClass;

@end
