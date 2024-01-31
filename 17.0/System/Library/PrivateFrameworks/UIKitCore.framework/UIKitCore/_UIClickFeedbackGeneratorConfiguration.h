@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

@interface _UIClickFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration

@property (readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownPattern;
@property (readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpPattern;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownFeedback;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownAudioFeedback;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpFeedback;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpAudioFeedback;

+ (id)defaultConfiguration;

- (id)feedbackKeyPaths;
- (void).cxx_destruct;
- (long long)requiredSupportLevel;
- (void)setclickDownFeedback:(id)a0;

@end
