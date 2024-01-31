@interface SBIdleTimerSettings : PTSettings

@property (nonatomic) BOOL disableIdleTimer;
@property (nonatomic) double unlockedIdleTimerCap;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
