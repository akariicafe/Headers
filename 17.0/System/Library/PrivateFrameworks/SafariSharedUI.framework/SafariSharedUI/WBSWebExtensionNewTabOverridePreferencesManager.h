@class WBSWebExtensionsController;

@interface WBSWebExtensionNewTabOverridePreferencesManager : NSObject {
    WBSWebExtensionsController *_webExtensionsController;
}

+ (void)migrateStorageToPerProfileFormatIfNecessaryWithDefaults:(id)a0;

- (id)initWithExtensionsController:(id)a0;
- (void).cxx_destruct;
- (void)clearNewTabBehaviorInDefaults:(id)a0;
- (void)clearNewTabBehaviorInDefaults:(id)a0 fromUserGesture:(BOOL)a1;
- (id)extensionComposedIdentifierForNewTabPreferenceInDefaults:(id)a0;
- (void)setNewTabBehaviorWithExtensionComposedIdentifier:(id)a0 inDefaults:(id)a1;
- (id)cloudExtensionStateForDefaults:(id)a0;
- (id)_webExtensionOverridingNewTabPageWithDefaults:(id)a0;
- (BOOL)isNewTabPageOverriddenByAnEnabledExtensionInUserDefaults:(id)a0;
- (void)setNewTabBehaviorWithExtensionComposedIdentifier:(id)a0 inDefaults:(id)a1 fromUserGesture:(BOOL)a2;
- (BOOL)shouldNewTabPageOverriddenByAnEnabledExtensionApplyInPrivateBrowsingWithUserDefaults:(id)a0;
- (id)sortedComposedIdentifiersForExtensionsWithOverridePages;

@end
