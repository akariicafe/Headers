@class NSString, SBWallpaperController;
@protocol CSLegibilityProviderDelegate;

@interface SBDashBoardLegibilityProvider : NSObject <PBUIWallpaperObserver, CSLegibilityProviding>

@property (retain, nonatomic) SBWallpaperController *wallpaperController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CSLegibilityProviderDelegate> legibilityProviderDelegate;

- (void)wallpaperDidChangeForVariant:(long long)a0;
- (id)init;
- (id)_wallpaperLegibilitySettings;
- (id)initWithWallpaperController:(id)a0;
- (void)_notifyDelegate;
- (id)currentLegibilitySettings;
- (void).cxx_destruct;
- (void)wallpaperLegibilitySettingsDidChange:(id)a0 forVariant:(long long)a1;

@end
