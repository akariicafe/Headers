@interface AMMotionDetectionSettings : PTSettings

@property (nonatomic) BOOL triggerTypeThresholdLow;
@property (nonatomic) BOOL triggerTypeThresholdMedium;
@property (nonatomic) BOOL triggerTypeThresholdHigh;
@property (nonatomic) BOOL triggerTypeFilteredThresholdLow;
@property (nonatomic) BOOL triggerTypeFilteredThresholdMedium;
@property (nonatomic) BOOL triggerTypeFilteredThresholdHigh;
@property (nonatomic) unsigned long long enabledTriggers;

+ (id)settingsControllerModule;
+ (void)_enumerateTriggerTypes:(id /* block */)a0;
+ (id)_keyPathForTriggerTypeName:(id)a0;

- (void)setDefaultValues;
- (unsigned long long)enabledTriggers;
- (void)setEnabledTriggers:(unsigned long long)a0;

@end
