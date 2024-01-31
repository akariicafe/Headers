@class NSString, PBUIWallpaperWindowSceneStyleTransitionState;

@interface PBUIWallpaperWindowSceneSettings : UIApplicationSceneSettings

@property (readonly, nonatomic) long long wallpaperVariant;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } lockscreenWallpaperContentsRect;
@property (readonly, nonatomic) double lockscreenWallpaperAlpha;
@property (readonly, nonatomic) double homescreenWallpaperAlpha;
@property (readonly, nonatomic) double lockscreenOnlyWallpaperAlpha;
@property (readonly, nonatomic) BOOL disallowHomescreenRasterization;
@property (readonly, nonatomic) BOOL disallowLockscreenRasterization;
@property (readonly, nonatomic) BOOL homescreenWallpaperHidden;
@property (readonly, nonatomic) BOOL lockscreenWallpaperHidden;
@property (readonly, nonatomic) BOOL wallpaperAnimationSuspended;
@property (readonly, nonatomic) BOOL wallpaperRequired;
@property (readonly, nonatomic) BOOL homescreenStyleChangesDelayed;
@property (readonly, copy, nonatomic) NSString *cachingIdentifier;
@property (readonly, copy, nonatomic) PBUIWallpaperWindowSceneStyleTransitionState *homescreenStyleTransitionState;
@property (readonly, copy, nonatomic) PBUIWallpaperWindowSceneStyleTransitionState *lockscreenStyleTransitionState;
@property (readonly, nonatomic) BOOL liveWallpaperTouchActive;
@property (readonly, nonatomic) BOOL liveWallpaperInteractive;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
