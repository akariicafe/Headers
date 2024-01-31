@class _UIButtonFeedbackGeneratorConfiguration;

@interface _UIButtonFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>

@property (readonly, nonatomic, getter=_buttonConfiguration) _UIButtonFeedbackGeneratorConfiguration *buttonConfiguration;

+ (Class)_configurationClass;

- (void)userInteractionCancelled;
- (void)userInteractionStarted;
- (id)initWithStyle:(long long)a0;
- (id)initWithStyle:(long long)a0 coordinateSpace:(id)a1;
- (id)_stats_key;
- (void)userInteractionEnded;

@end
