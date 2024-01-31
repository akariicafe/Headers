@interface PBUIWallpaperParallaxSettings : PBUIParallaxSettings

@property double overhangX;
@property double overhangY;
@property double perspectiveTransform;

+ (id)settingsControllerModule;
+ (long long)_currentDeviceType;
+ (struct CGSize { double x0; double x1; })_requiredOverhangSizeForCurrentDevice;
+ (struct CGSize { double x0; double x1; })_requiredOverhangSizeForDeviceType:(long long)a0;
+ (struct CGSize { double x0; double x1; })bestWallpaperSizeForParallaxFactor:(double)a0;
+ (struct CGSize { double x0; double x1; })bestWallpaperSizeForParallaxFactor:(double)a0 portrait:(BOOL)a1;
+ (struct CGSize { double x0; double x1; })bestWallpaperSizeForWallpaperSize:(struct CGSize { double x0; double x1; })a0 deviceType:(long long)a1 parallaxFactor:(double)a2 portrait:(BOOL)a3;
+ (struct CGSize { double x0; double x1; })minimumWallpaperSizeForCurrentDevice;
+ (struct CGSize { double x0; double x1; })minimumWallpaperSizeForWallpaperSize:(struct CGSize { double x0; double x1; })a0 deviceType:(long long)a1;
+ (double)minimumZoomScaleForCurrentDeviceForWallpaperSize:(struct CGSize { double x0; double x1; })a0 parallaxFactor:(double)a1;
+ (double)minimumZoomScaleForWallpaperSize:(struct CGSize { double x0; double x1; })a0 parallaxFactor:(double)a1 deviceType:(long long)a2;
+ (struct CGSize { double x0; double x1; })overhangSizeForCurrentDevice;
+ (struct CGSize { double x0; double x1; })overhangSizeForDeviceType:(long long)a0;

- (void)setDefaultValues;

@end
