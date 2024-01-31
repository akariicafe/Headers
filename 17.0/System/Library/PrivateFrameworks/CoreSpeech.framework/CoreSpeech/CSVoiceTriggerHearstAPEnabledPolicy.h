@interface CSVoiceTriggerHearstAPEnabledPolicy : CSPolicy

+ (id)sharedInstance;

- (id)init;
- (void)_subscribeEventMonitors;
- (void)_addVoiceTriggerHearstAPEnabledPolicy;
- (BOOL)_isOtherStreamsActiveOnDoAPRoute;

@end
