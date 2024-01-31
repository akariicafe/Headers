@interface SBProximitySettings : SBUISettings

@property (nonatomic) double initialBacklightDebounceDuration;
@property (nonatomic) double subsequentBacklightDebounceDuration;
@property (nonatomic) BOOL colorScreenEdgeWhenObjectInProximity;
@property (nonatomic) BOOL allowTouchesInJindoWhenObjectInProximity;
@property (nonatomic) double nonTelephonyTouchAllowanceGracePeriodDuration;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
