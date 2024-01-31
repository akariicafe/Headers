@interface PRPosterSettings : PTSettings

@property (nonatomic) double wakeDuration;
@property (nonatomic) double wakeMass;
@property (nonatomic) double wakeStiffness;
@property (nonatomic) double wakeDamping;
@property (nonatomic) double linearWakeDuration;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
