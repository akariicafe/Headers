@protocol UIFeedbackGeneratorUserInteractionDriven;

@interface TVRButtonHaptic : NSObject

@property (retain, nonatomic) id<UIFeedbackGeneratorUserInteractionDriven> behavior;

+ (id)hapticForView:(id)a0;

- (void)userInteractionCancelled;
- (void).cxx_destruct;
- (void)userInteractionEnded;
- (void)userInteractionBegan;

@end
