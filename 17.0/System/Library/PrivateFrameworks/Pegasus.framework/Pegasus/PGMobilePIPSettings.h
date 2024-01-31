@interface PGMobilePIPSettings : PTSettings

@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;
@property (nonatomic) double shadowOffsetX;
@property (nonatomic) double shadowOffsetY;
@property (nonatomic) double shadowContinuousCornerRadius;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
