@class NSUserDefaults, ATXLockscreenBlacklist, ATXActionNotificationServer;

@interface ATXLockscreenSuggestionSender : NSObject {
    ATXLockscreenBlacklist *_lockscreenBlacklist;
    ATXActionNotificationServer *_actionNotificationServer;
    NSUserDefaults *_userDefaults;
}

- (id)init;
- (id)_cachedExecutableIdentifier;
- (void)blendingLayerDidUpdateLockscreenUICache:(id)a0;
- (void).cxx_destruct;
- (id)initWithLockscreenBlacklist:(id)a0 actionNotificationServer:(id)a1 userDefaults:(id)a2;
- (void)_updateCachedExecutableIdentifierWithSuggestion:(id)a0;

@end
