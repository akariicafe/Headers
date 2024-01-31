@interface MTLumaDodgePillStyleSettings : PTSettings

@property (nonatomic) double colorAddOpacity;
@property (nonatomic) double lumaMapPlusColorOpacity;
@property (nonatomic) double overlayBlendOpacity;
@property (nonatomic) double blur;
@property (nonatomic) double brightness;
@property (nonatomic) double saturation;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
