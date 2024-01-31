@class PBUIWallpaperDefaultsDomain;

@interface PBUIWallpaperDefaults : NSObject

@property (readonly, nonatomic) PBUIWallpaperDefaultsDomain *defaultsDomain;

+ (id)defaults;

- (void)setPortrait:(BOOL)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)_updateDefaultsForVariant:(long long)a0 wallpaperMode:(long long)a1 updater:(id /* block */)a2;
- (void)resetMagnifyDefaults;
- (void)resetStillTimeInVideoDefaults;
- (id)init;
- (void)setName:(id)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (BOOL)hasVideoForVariant:(long long)a0;
- (double)parallaxFactorForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setProceduralIdentifier:(id)a0 forLocations:(long long)a1;
- (double)stillTimeInVideo;
- (void)setMagnifyEnabled:(BOOL)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)resetImageHashDefaults;
- (void)resetParallaxFactorDefaults;
- (void)_setDefaultsWithDictionary:(id)a0 variant:(long long)a1 wallpaperMode:(long long)a2;
- (id)wallpaperColorDataForVariant:(long long)a0;
- (id)_defaultsWrapperForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)wallpaperColorNameForVariant:(long long)a0;
- (void)resetCroppingDefaults;
- (id)nameForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)resetWallpaperKitDataDefaults;
- (id)wallpaperOptionsForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)proceduralIdentifierForVariant:(long long)a0;
- (BOOL)isPortraitForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setZoomScale:(double)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)resetHasVideoDefaults;
- (id)wallpaperGradientDataForVariant:(long long)a0;
- (id)_keyForWallpaperMode:(long long)a0;
- (void)updateDefaultsForLocations:(long long)a0 updater:(id /* block */)a1;
- (void)setWallpaperKitData:(id)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)setParallaxFactor:(double)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)resetDefaults;
- (double)stillTimeInVideoForVariant:(long long)a0;
- (void)resetZoomScaleDefaults;
- (id)description;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)setColorName:(id)a0 forLocations:(long long)a1;
- (id)proceduralOptionsForVariant:(long long)a0;
- (void)setProceduralOptions:(id)a0 forLocations:(long long)a1;
- (BOOL)supportsCroppingForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (double)zoomScaleForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setStillTimeInVideo:(double)a0;
- (void).cxx_destruct;
- (BOOL)hasVideo;
- (void)setGradientData:(id)a0 forLocations:(long long)a1;
- (BOOL)proceduralUserSetForVariant:(long long)a0;
- (BOOL)magnifyEnabledForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setWallpaperOptions:(id)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (id)imageHashForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)resetPortraitDefaults;
- (id)initWithdefaultsDomain:(id)a0;
- (void)setHasVideo:(BOOL)a0;
- (void)setSupportsCropping:(BOOL)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (id)wallpaperKitDataForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setImageHash:(id)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRectForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setColorData:(id)a0 forLocations:(long long)a1;
- (void)setProceduralUserSet:(BOOL)a0 forLocations:(long long)a1;
- (void)resetNameDefaults;

@end
