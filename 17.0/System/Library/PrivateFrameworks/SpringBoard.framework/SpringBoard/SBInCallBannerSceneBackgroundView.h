@class NSString, _UIBackdropView, SBWallpaperEffectView;

@interface SBInCallBannerSceneBackgroundView : UIView <SBApplicationSceneBackgroundView> {
    _UIBackdropView *_backdropView;
    unsigned long long _transformOptions;
    SBWallpaperEffectView *_wallpaperEffectView;
    long long _wallpaperVariant;
}

@property (nonatomic) double wallpaperAlpha;
@property (nonatomic) long long wallpaperStyle;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (nonatomic) BOOL needsClassicModeBackground;
@property (nonatomic) BOOL shouldUseBrightMaterial;
@property (nonatomic) unsigned long long transformOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateBackdropView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 wallpaperVariant:(long long)a1 transformOptions:(unsigned long long)a2;

@end
