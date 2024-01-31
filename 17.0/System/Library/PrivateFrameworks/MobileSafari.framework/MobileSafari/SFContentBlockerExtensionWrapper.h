@class NSExtension, SFContentBlockerManager;

@interface SFContentBlockerExtensionWrapper : SFExtensionWrapper {
    NSExtension *_extension;
    SFContentBlockerManager *_contentBlockerManager;
}

- (id)shortName;
- (void)disable;
- (id)extension;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (id)displayName;
- (id)containingAppDisplayName;
- (id)enabledProfiles;
- (BOOL)allowedInPrivateBrowsing;
- (BOOL)canLoadWithErrorString:(id *)a0;
- (void)enableWithPresentingViewController:(id)a0 completionHandler:(id /* block */)a1;
- (id)enabledNamedProfiles;
- (id)initWithExtension:(id)a0 contentBlockerManager:(id)a1;
- (BOOL)isContentBlocker;
- (BOOL)isEnabledInAllNamedProfiles;
- (BOOL)isEnabledInProfile:(id)a0;
- (void)setAllowedInPrivateBrowsing:(BOOL)a0;
- (Class)settingsPermissionClass;

@end
