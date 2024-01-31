@class NSMutableDictionary;

@interface TCPreferences : NSObject

@property (retain, nonatomic) NSMutableDictionary *properties;
@property (readonly) long long devicePolicy;

+ (id)defaultPreferences;
+ (id)userPreferences;
+ (void)setOverridePreferences:(id)a0;

- (void).cxx_destruct;
- (id)initWithDefaults;
- (id)initWithProperties:(id)a0;
- (void)setDevicePolicy:(long long)a0;

@end
