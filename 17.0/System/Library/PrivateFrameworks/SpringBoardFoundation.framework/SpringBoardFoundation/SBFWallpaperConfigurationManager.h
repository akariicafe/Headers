@class NSArray;

@interface SBFWallpaperConfigurationManager : PBUIWallpaperConfigurationManager

@property (readonly, copy, nonatomic) NSArray *dataStores;

- (id)wallpaperConfigurationForVariant:(long long)a0 includingValuesForTypes:(unsigned long long)a1;
- (id)wallpaperConfigurationForVariant:(long long)a0 includingValuesForTypes:(unsigned long long)a1 wallpaperMode:(long long)a2;

@end
