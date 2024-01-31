@class NSString, UIVisualEffectView, SBSystemNotesAppearanceSettings, UIView;

@interface SBSystemNotesBackgroundView : UIView <PTSettingsKeyObserver, SBApplicationSceneBackgroundView> {
    UIView *_tintView;
    UIVisualEffectView *_backgroundEffectView;
    SBSystemNotesAppearanceSettings *_appearanceSettings;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (nonatomic) long long wallpaperStyle;
@property (nonatomic) BOOL needsClassicModeBackground;
@property (nonatomic) BOOL shouldUseBrightMaterial;
@property (nonatomic) unsigned long long transformOptions;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (void)_updateTintView;
- (id)_backgroundColorFromSettings:(id)a0;

@end
