@interface _UIClickPresentationFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>

+ (Class)_configurationClass;

- (void)userInteractionCancelled;
- (void)userInteractionStarted;
- (void)userInteractionEnded;
- (void)dragged;
- (id)_clickConfiguration;
- (id)initWithConfiguration:(id)a0 view:(id)a1;
- (void)popped;
- (void)previewed;

@end
