@class HMSettingGroup;
@protocol HMSettingsOwner, HMSettingsDelegate;

@interface HMSettings : NSObject

@property (readonly, weak) id<HMSettingsOwner> owner;
@property (readonly) HMSettingGroup *rootGroup;
@property (readonly, getter=isControllable) BOOL controllable;
@property (weak) id<HMSettingsDelegate> delegate;

- (id)longDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSettingsOwner:(id)a0;

@end
