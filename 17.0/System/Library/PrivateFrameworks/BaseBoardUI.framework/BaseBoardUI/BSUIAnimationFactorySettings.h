@interface BSUIAnimationFactorySettings : PTSettings

@property (nonatomic) BOOL slowAnimations;
@property (nonatomic) double slowDownFactor;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (double)effectiveSlowDownFactor;

@end
