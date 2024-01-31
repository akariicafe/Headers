@interface PosterKitUtilities : NSObject

+ (id)archiver;
+ (BOOL)storeConfiguredPropertiesForPath:(id)a0 configuredProperties:(id)a1 error:(out id *)a2;
+ (id)archiverWithFileManager:(id)a0;
+ (id)configurationIdentityWithProvider:(id)a0 identifier:(id)a1 posterUUID:(id)a2 version:(unsigned long long)a3 supplement:(unsigned long long)a4;
+ (id)configurationWithPath:(id)a0;
+ (id)configuredPropertiesWithTitleStyleConfiguration:(id)a0 renderingConfiguration:(id)a1;
+ (id)loadConfiguredPropertiesFromPosterConfiguration:(id)a0 error:(out id *)a1;
+ (id)posterColorWithColor:(id)a0 preferredStyle:(unsigned long long)a1 localizedName:(id)a2;
+ (id)renderingConfigurationWithDepthEffectDisabled:(BOOL)a0 parallaxEnabled:(BOOL)a1;
+ (id)serverPathFromPath:(id)a0;
+ (id)serverPathWithProviderURL:(id)a0 identity:(id)a1;
+ (id)systemTimeFontConfigurationFromTimeFontConfiguration:(id)a0;
+ (id)systemTimeFontConfigurationWithTimeFontIdentifier:(id)a0 weight:(double)a1 systemItem:(BOOL)a2;
+ (id)titleStyleConfigurationWithTimeFontConfiguration:(id)a0 preferredTitleAlignment:(unsigned long long)a1 preferredTitleLayout:(unsigned long long)a2 titleColor:(id)a3 timeNumberingSystem:(id)a4 userConfigured:(BOOL)a5 contentsLuminance:(double)a6 alternateDateEnabled:(BOOL)a7 groupName:(id)a8;

@end
