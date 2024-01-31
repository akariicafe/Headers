@interface _UIClickFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven, UIFeedbackGeneratorPressDriven>

+ (Class)_configurationClass;

- (void)userInteractionCancelled;
- (void)userInteractionStarted;
- (id)initWithCoordinateSpace:(id)a0;
- (void)userInteractionEnded;
- (id)_clickConfiguration;
- (void)pressedDown;
- (void)pressedUp;

@end
