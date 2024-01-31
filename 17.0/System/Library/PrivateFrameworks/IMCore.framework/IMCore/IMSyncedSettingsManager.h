@class NSString, IMSyncedSettingsManager_Impl;

@interface IMSyncedSettingsManager : NSObject <IMSyncedSettingsManaging>

@property (readonly) IMSyncedSettingsManager_Impl *impl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setSettingValue:(id)a0 forKey:(long long)a1;
- (void)addObserver:(id)a0 selector:(SEL)a1 key:(long long)a2;
- (void)removeObserver:(id)a0 key:(long long)a1;
- (id)settingValueForKey:(long long)a0;

@end
