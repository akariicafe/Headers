@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

@interface _UIFluidSliderFeedbackConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration

@property (readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *maxEdgeFeedback;
@property (readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *detentFeedback;
@property (readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *minEdgeFeedback;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (void)setdetentFeedback:(id)a0;
- (void)setmaxEdgeFeedback:(id)a0;
- (void)setminEdgeFeedback:(id)a0;

@end
