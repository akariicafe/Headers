@class PBUIWallpaperDefaultsDomain;

@interface SBFWallpaperAggdLogger : NSObject {
    long long _aggd_lockscreenWallpaperType;
    long long _aggd_lockscreenWallpaperIdentifier;
    long long _aggd_homescreenWallpaperType;
    long long _aggd_homescreenWallpaperIdentifier;
    long long _aggd_irisWallpaperEnabled;
    long long _aggd_sharedWallpaper;
    PBUIWallpaperDefaultsDomain *_wallpaperDefaults;
}

- (id)init;
- (void).cxx_destruct;
- (void)incrementIrisPlayCount;
- (unsigned long long)_bucketedPlayCount;
- (void)_clearAggdKeysForLocations:(long long)a0;
- (void)_resetPlayCountDate;
- (id)_valueString;
- (void)saveWallpaperAggdCurrentValues;
- (void)updateWallpaperAggdKeysForLocations:(long long)a0 withHasVideo:(BOOL)a1 hasProcedural:(BOOL)a2 name:(id)a3;

@end
