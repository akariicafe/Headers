@class VSPreferences;

@interface VSFeatureManager : NSObject

@property (retain, nonatomic) VSPreferences *preferences;

+ (id)sharedFeatureManager;

- (id)init;
- (void)resetFeature:(id)a0;
- (BOOL)featureIsEnabled:(id)a0;
- (void)enableFeature:(id)a0;
- (void).cxx_destruct;
- (void)disableFeature:(id)a0;

@end
