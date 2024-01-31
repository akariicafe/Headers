@class MOEffectiveBool, MOEffectiveSettingsStore;

@interface MOEffectiveAccountSettings : NSObject

@property (readonly) MOEffectiveSettingsStore *store;
@property (readonly) MOEffectiveBool *denyiCloudLogout;

- (id)init;
- (void).cxx_destruct;

@end
