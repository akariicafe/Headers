@class UISelectionFeedbackGenerator;

@interface PUSelectionFeedbackGenerator : NSObject

@property (readonly, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator;

- (id)init;
- (void).cxx_destruct;
- (void)performFeedback;
- (void)prepareFeedback;

@end
