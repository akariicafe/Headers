@class NSString, IMDSyncedSettingsServiceManager_Impl;

@interface IMDSyncedSettingsServiceManager : NSObject <IMSyncedSettingsManaging>

@property (readonly) IMDSyncedSettingsServiceManager_Impl *impl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setSettingValue:(id)a0 forKey:(long long)a1;
- (id)settingValueForKey:(long long)a0;
- (id)initWithLocalDomain:(id)a0 remoteDomain:(id)a1 localStorageDelegate:(id)a2 remoteStorageDelegate:(id)a3;

@end
