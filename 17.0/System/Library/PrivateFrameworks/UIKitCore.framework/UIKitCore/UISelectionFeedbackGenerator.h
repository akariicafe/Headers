@class _UISelectionFeedbackGeneratorConfiguration;

@interface UISelectionFeedbackGenerator : UIFeedbackGenerator

@property (nonatomic) double lastSelectionChangeTime;
@property (readonly, nonatomic, getter=_selectionConfiguration) _UISelectionFeedbackGeneratorConfiguration *selectionConfiguration;

+ (Class)_configurationClass;

- (void)userInteractionCancelled;
- (void)userInteractionStarted;
- (void)selectionChanged;
- (void)_deactivated;
- (id)_stats_key;
- (void)userInteractionEnded;
- (void)_playFeedbackWithSpeed:(double)a0;

@end
