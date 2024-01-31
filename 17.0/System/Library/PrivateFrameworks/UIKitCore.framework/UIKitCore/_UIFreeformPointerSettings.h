@interface _UIFreeformPointerSettings : PTSettings

@property (nonatomic) double defaultPointerCornerRadius;
@property (nonatomic) double slipFactorX;
@property (nonatomic) double slipFactorY;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
