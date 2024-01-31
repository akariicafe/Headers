@interface SBDropShadowSettings : PTSettings

@property (nonatomic) double radius;
@property (nonatomic) double opacity;
@property (nonatomic) double offsetX;
@property (nonatomic) double offsetY;
@property (nonatomic) double continuousCornerRadius;

+ (id)settingsControllerModule;
+ (id)moduleWithSectionTitle:(id)a0;

- (void)setDefaultValues;

@end
