@class _UINotificationFeedbackGeneratorConfiguration;

@interface UINotificationFeedbackGenerator : UIFeedbackGenerator

@property (readonly, nonatomic, getter=_eventConfiguration) _UINotificationFeedbackGeneratorConfiguration *eventConfiguration;

+ (Class)_configurationClass;

- (void)notificationOccurred:(long long)a0;
- (double)_preparationTimeoutForStyle:(long long)a0;
- (id)_stats_key;
- (void)_playEventType:(long long)a0;
- (void)_privateNotificationInterrupted:(long long)a0;
- (id)_categoryForType:(long long)a0;
- (void)_privateNotificationOccurred:(long long)a0;
- (void)_stopEventType:(long long)a0;

@end
