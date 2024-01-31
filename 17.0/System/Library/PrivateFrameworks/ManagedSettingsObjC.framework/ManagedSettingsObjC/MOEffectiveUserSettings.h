@class MOEffectiveString, MOEffectiveSettingsStore;

@interface MOEffectiveUserSettings : NSObject

@property (readonly) MOEffectiveSettingsStore *store;
@property (readonly) MOEffectiveString *sharingPolicy;

- (id)init;
- (void).cxx_destruct;

@end
