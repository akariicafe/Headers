@interface _UIActivityIndicatorSettings : PTSettings

@property (nonatomic) double fullLoopDuration;
@property (nonatomic) BOOL customColor;
@property (nonatomic) double redValue;
@property (nonatomic) double greenValue;
@property (nonatomic) double blueValue;
@property (nonatomic) double alphaValue;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
