@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable, _UIFeedbackContinuousPlayable;

@interface _UIFeedbackStateChangeConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *thresholdFeedback;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *approachFeedback;
@property (nonatomic) double approachStart;
@property (nonatomic) double approachEnd;
@property (nonatomic) double approachCurvature;
@property (nonatomic) double approachVolumeMax;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
