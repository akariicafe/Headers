@class NSUserDefaults, _ATXGlobals, NSObject, _PASLock;
@protocol OS_dispatch_queue;

@interface ATXAppPredictionBlacklist : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id _blacklistNotificationToken;
    NSUserDefaults *_userDefaults;
    _ATXGlobals *_globals;
}

+ (id)sharedInstance;

- (id)init;
- (void)_listenForUpdates;
- (void)dealloc;
- (void)_createBlacklistFromPreferencesDisabledApps;
- (void)_performMigrationsIfNeeded;
- (void)deregisterPrefsChangeHandlerWithToken:(int)a0;
- (id)initWithUserDefaults:(id)a0 globals:(id)a1;
- (void)_updateBlacklist;
- (void)_updateBlacklistFromGlobalsBlacklistedApps;
- (void)_resetBlacklistWithSet:(id)a0;
- (void).cxx_destruct;
- (id)disabledBundleIds;
- (int)registerPrefsChangeHandler:(id /* block */)a0;

@end
