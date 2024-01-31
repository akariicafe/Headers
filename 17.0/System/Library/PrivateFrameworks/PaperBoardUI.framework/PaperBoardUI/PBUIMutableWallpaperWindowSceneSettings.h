@class NSString, PBUIWallpaperWindowSceneStyleTransitionState;

@interface PBUIMutableWallpaperWindowSceneSettings : UIMutableApplicationSceneSettings

@property (nonatomic) long long wallpaperVariant;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } lockscreenWallpaperContentsRect;
@property (nonatomic) double lockscreenWallpaperAlpha;
@property (nonatomic) double homescreenWallpaperAlpha;
@property (nonatomic) double lockscreenOnlyWallpaperAlpha;
@property (nonatomic) BOOL disallowHomescreenRasterization;
@property (nonatomic) BOOL disallowLockscreenRasterization;
@property (nonatomic) BOOL homescreenWallpaperHidden;
@property (nonatomic) BOOL lockscreenWallpaperHidden;
@property (nonatomic) BOOL wallpaperAnimationSuspended;
@property (nonatomic) BOOL wallpaperRequired;
@property (nonatomic) BOOL homescreenStyleChangesDelayed;
@property (copy, nonatomic) NSString *cachingIdentifier;
@property (copy, nonatomic) PBUIWallpaperWindowSceneStyleTransitionState *homescreenStyleTransitionState;
@property (copy, nonatomic) PBUIWallpaperWindowSceneStyleTransitionState *lockscreenStyleTransitionState;
@property (nonatomic) BOOL liveWallpaperTouchActive;
@property (nonatomic) BOOL liveWallpaperInteractive;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
