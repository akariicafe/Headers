@class MOEffectiveOptionalApplication, MOEffectiveSettingsStore;

@interface MOEffectiveAllowedClientSettings : NSObject

@property (readonly) MOEffectiveSettingsStore *store;
@property (readonly) MOEffectiveOptionalApplication *allowedClient;

- (id)init;
- (void).cxx_destruct;

@end
