@interface SBAmbientSettings : PTSettings

@property (nonatomic) long long idleTimerDuration;
@property (nonatomic) long long idleTimerWarnMode;
@property (nonatomic) BOOL enableSuppression;
@property (nonatomic) long long suppressedIdleTimerDuration;
@property (nonatomic) long long suppressedIdleTimerWarnMode;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
