@class NSString, BSUIOrientationTransformWrapperView, SBWallpaperEffectView;

@interface SBSwitcherWallpaperPageContentView : UIView <SBAppSwitcherPageContentView> {
    BSUIOrientationTransformWrapperView *_wallpaperWrapperView;
}

@property (nonatomic) long long desiredWallpaperOrientation;
@property (nonatomic) long long wallpaperStyle;
@property (readonly, nonatomic) SBWallpaperEffectView *wallpaperEffectView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) long long orientation;
@property (readonly, nonatomic) BOOL contentRequiresGroupOpacity;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateCornerRadius;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_wallpaperFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidate;
- (id)_viewForWallpaperWrapper;
- (void)_updateWallpaperOrientation;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
