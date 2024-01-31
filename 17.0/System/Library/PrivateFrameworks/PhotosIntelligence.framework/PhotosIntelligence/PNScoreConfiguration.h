@class NSString;

@interface PNScoreConfiguration : NSObject

@property (readonly, nonatomic) long long dataType;
@property (readonly, nonatomic) long long themeType;
@property (readonly, nonatomic) NSString *name;

+ (id)plistPathForPhotoLibrary:(id)a0 dataType:(long long)a1;
+ (id)scoreConfigurationNamePrefixForDataType:(long long)a0;
+ (id)scoreConfigurationNameForDataType:(long long)a0 withThemeType:(long long)a1;
+ (id)scoreConfigurationNameSuffixForThemeType:(long long)a0;

- (void).cxx_destruct;
- (id)initWithScoreConfigurationDataType:(long long)a0 scoreConfigurationThemeType:(long long)a1;

@end
