@class _UIStatesFeedbackGeneratorConfiguration, NSString, _UIFeedback;
@protocol _UIFeedbackContinuousPlayable;

@interface _UIStatesFeedbackGenerator : UIFeedbackGenerator

@property (nonatomic, getter=_approachActivated, setter=_setApproachActivated:) BOOL approachActivated;
@property (readonly, nonatomic, getter=_statesConfiguration) _UIStatesFeedbackGeneratorConfiguration *statesConfiguration;
@property (retain, nonatomic) NSString *currentState;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback;

+ (Class)_configurationClass;

- (void)transitionToState:(id)a0 updated:(double)a1;
- (id)initWithStyle:(long long)a0;
- (id)initWithStyle:(long long)a0 coordinateSpace:(id)a1;
- (id)_stats_key;
- (id)_configurationFromState:(id)a0 toState:(id)a1;
- (void).cxx_destruct;
- (void)transitionToState:(id)a0 ended:(BOOL)a1;
- (id)initWithConfiguration:(id)a0 coordinateSpace:(id)a1;
- (void)_stopPlayingContinuousFeedback;

@end
