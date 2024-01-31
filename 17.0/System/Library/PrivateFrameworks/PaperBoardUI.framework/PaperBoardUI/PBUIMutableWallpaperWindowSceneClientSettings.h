@class UIColor, _UILegibilitySettings;

@interface PBUIMutableWallpaperWindowSceneClientSettings : UIMutableApplicationSceneClientSettings

@property (nonatomic) double homescreenMinimumWallpaperScale;
@property (nonatomic) double lockscreenMinimumWallpaperScale;
@property (copy, nonatomic) _UILegibilitySettings *homescreenLegibilitySettings;
@property (copy, nonatomic) _UILegibilitySettings *lockscreenLegibilitySettings;
@property (copy, nonatomic) UIColor *homescreenAverageColor;
@property (copy, nonatomic) UIColor *lockscreenAverageColor;
@property (nonatomic) double homescreenContrast;
@property (nonatomic) double lockscreenContrast;
@property (nonatomic) double homescreenParallaxFactor;
@property (nonatomic) double lockscreenParallaxFactor;
@property (nonatomic) BOOL homescreenParallaxEnabled;
@property (nonatomic) BOOL lockscreenParallaxEnabled;
@property (nonatomic) double homescreenZoomFactor;
@property (nonatomic) double lockscreenZoomFactor;
@property (nonatomic, getter=isHomescreenContentStatic) BOOL homescreenContentStatic;
@property (nonatomic, getter=isLockscreenContentStatic) BOOL lockscreenContentStatic;
@property (nonatomic, getter=isLockscreenContentLiveWallpaper) BOOL lockscreenContentLiveWallpaper;
@property (nonatomic) long long liveWallpaperPlaybackState;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
