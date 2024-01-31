@interface WFPrivateAddressConfigManager : NSObject

@property (nonatomic) struct __SCPreferences { } *prefs;

- (id)privateAddressConfig;
- (id)init;
- (void)dealloc;

@end
