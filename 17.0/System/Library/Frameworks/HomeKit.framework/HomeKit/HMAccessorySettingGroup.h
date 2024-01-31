@class NSString, _HMAccessorySettingGroup, NSArray, NSMutableSet;

@interface HMAccessorySettingGroup : HMSettingGroup <_HMAccessorySettingGroupDelegate, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_settings;
    NSMutableSet *_groups;
}

@property (readonly) _HMAccessorySettingGroup *internal;
@property (weak) HMAccessorySettingGroup *group;
@property (readonly, copy) NSString *localizedTitle;
@property (readonly, copy) NSArray *settings;
@property (readonly, copy) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)keyPath;
- (id)init;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithKeyPath:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addGroup:(id)a0;
- (void)removeGroup:(id)a0;
- (id)initWithInternal:(id)a0;
- (void)_settingGroup:(id)a0 didRemoveSetting:(id)a1;
- (void)mergeReflected:(id)a0;
- (void)_notifyClientOfAddedGroup:(id)a0;
- (void)_notifyClientOfAddedSetting:(id)a0;
- (void)_notifyClientOfRemovedGroup:(id)a0;
- (void)_notifyClientOfRemovedSetting:(id)a0;
- (void)_settingGroup:(id)a0 didAddSetting:(id)a1;
- (void)_settingGroup:(id)a0 didAddSettingGroup:(id)a1;
- (void)_settingGroup:(id)a0 didRemoveSettingGroup:(id)a1;
- (id)accessorySettingGroupWithKeyPath:(id)a0;
- (id)accessorySettingWithKeyPath:(id)a0;
- (void)addSetting:(id)a0;
- (BOOL)isReflectedEqual:(id)a0;
- (void)removeSetting:(id)a0;

@end
