@interface SBHIconZoomSettings : SBHIconAnimationSettings

@property (nonatomic) BOOL labelAlphaWithZoom;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
