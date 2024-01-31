@class UIView;
@protocol CSWallpaperColorProvider, CSWallpaperView, CSWallpaperProviding;

@interface CSVibrantWallpaperButton : SBUIVibrantButton

@property (weak, nonatomic) id<CSWallpaperColorProvider> wallpaperColorProvider;
@property (weak, nonatomic) id<CSWallpaperProviding> wallpaperProvider;
@property (readonly, nonatomic) UIView<CSWallpaperView> *effectView;

- (void)setLegibilitySettings:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateVibrancy;

@end
