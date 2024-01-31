@class SBExternalDisplayWallpaperEffectView, NSString, UIView;

@interface SBExternalDisplayWallpaperViewController : UIViewController <SBExternalDisplayWallpaperConfigurations>

@property (retain, nonatomic) UIView *wallpaperContainerView;
@property (retain, nonatomic) SBExternalDisplayWallpaperEffectView *wallpaperEffectView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWindowScene:(id)a0;
- (void).cxx_destruct;
- (BOOL)enableBlurEffects;

@end
