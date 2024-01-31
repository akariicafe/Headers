@class SBWallpaperEffectView, UIView;
@protocol SBExternalDisplayWallpaperConfigurations;

@interface SBExternalDisplayWallpaperEffectView : UIView

@property (weak, nonatomic) id<SBExternalDisplayWallpaperConfigurations> delegate;
@property (retain, nonatomic) UIView *blurBackgroundView;
@property (retain, nonatomic) SBWallpaperEffectView *wallpaperEffectView;

- (void).cxx_destruct;
- (BOOL)enableBlurEffects;
- (id)initExternalDisplayWithDelegate:(id)a0 wallpaperVariant:(long long)a1 transformOptions:(unsigned long long)a2;

@end
