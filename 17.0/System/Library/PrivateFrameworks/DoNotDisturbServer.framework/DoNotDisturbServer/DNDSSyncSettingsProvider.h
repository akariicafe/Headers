@class DNDSSyncSettings, NPSDomainAccessor;
@protocol DNDSSyncSettingsProviderDelegate;

@interface DNDSSyncSettingsProvider : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NPSDomainAccessor *_accessor;
    BOOL _initialized;
}

@property (copy) DNDSSyncSettings *syncSettings;
@property (weak, nonatomic) id<DNDSSyncSettingsProviderDelegate> delegate;

- (id)init;
- (void)dealloc;
- (BOOL)_lock_isCloudSyncPreferenceEnabled;
- (void)_updatePairSyncPreferences;
- (void)pairedDeviceDidChange;
- (void)_lock_updateCompanionCloudSyncPreference;
- (BOOL)_lock_isPairSyncPreferenceEnabled;
- (void)_updateCloudSyncPreferences;
- (void)_endMonitoringForChanges;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_lock_updateSyncSettingsIfNewSettingsDiffer:(id)a0;
- (void).cxx_destruct;
- (void)setPairSyncEnabled:(BOOL)a0;
- (void)_lock_setCompanionCloudSyncPreferenceEnabled:(BOOL)a0;
- (BOOL)_isCloudSyncPreferenceEnabled;
- (void)_lock_updatePairSyncPreferences;
- (id)_lock_accessor;
- (void)_beginMonitoringForChanges;

@end
