@class IOSurface;

@interface PBUIWallpaperEffectImageRequestActionIOSurfaceResponse : PBUIWallpaperEffectImageRequestActionResponse

@property (readonly, nonatomic) IOSurface *ioSurface;

- (id)initWithActualStyle:(long long)a0 size:(struct CGSize { double x0; double x1; })a1 ioSurface:(id)a2;

@end
