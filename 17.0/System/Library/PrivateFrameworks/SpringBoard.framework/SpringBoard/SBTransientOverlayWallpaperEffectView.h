@class _UIDirectionalRotationView, SBWallpaperEffectView;

@interface SBTransientOverlayWallpaperEffectView : UIView {
    SBWallpaperEffectView *_wallpaperEffectView;
    _UIDirectionalRotationView *_wallpaperRotationView;
}

@property (nonatomic) long long containerOrientation;
@property (nonatomic) long long wallpaperStyle;

- (void)setTransitionState:(struct { long long x0; long long x1; double x2; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)prepareToAnimateToTransitionState:(inout struct { long long x0; long long x1; double x2; } *)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 wallpaperVariant:(long long)a1;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_currentWallpaperTransform;
- (void)_updateWallpaperGeometry;

@end
