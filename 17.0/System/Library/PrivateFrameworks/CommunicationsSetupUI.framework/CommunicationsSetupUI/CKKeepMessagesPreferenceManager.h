@protocol IMSyncedSettingsManaging;

@interface CKKeepMessagesPreferenceManager : NSObject

@property (class, retain) id<IMSyncedSettingsManaging> syncedSettingsManager;

+ (id)keepMessagesPreference;

- (void)dealloc;
- (void)_setLegacyKeepMessagesPreference:(id)a0;
- (void)addSyncedSettingObserver:(id)a0 selector:(SEL)a1 key:(long long)a2;
- (void)removeSyncedSettingObserver:(id)a0 key:(long long)a1;
- (void)updateKeepMessagesPreference:(id)a0;

@end
