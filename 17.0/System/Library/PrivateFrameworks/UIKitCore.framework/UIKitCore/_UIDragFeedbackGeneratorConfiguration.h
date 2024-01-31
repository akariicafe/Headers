@class _UIFeedback;
@protocol _UIFeedbackContinuousPlayable, _UIFeedbackDiscretePlayable;

@interface _UIDragFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration

@property (retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *interactionProgressingFeedback;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *interactionUpdatedFeedback;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *targetUpdatedFeedback;
@property (nonatomic) double progressingFeedbackDelay;

+ (id)defaultConfiguration;

- (id)feedbackKeyPaths;
- (void).cxx_destruct;
- (long long)requiredSupportLevel;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
