@class _UIEdgeFeedbackGeneratorConfiguration, _UIFeedbackEngine, _UIFeedback;
@protocol _UIFeedbackContinuousPlayable;

@interface _UIEdgeFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven> {
    _UIFeedbackEngine *_feedbackEngine;
    BOOL _playedOvershotThresholdFeedback;
}

@property (readonly, nonatomic, getter=_edgeConfiguration) _UIEdgeFeedbackGeneratorConfiguration *edgeConfiguration;
@property (nonatomic, getter=_isCloseToEdge, setter=_setCloseToEdge:) BOOL closeToEdge;
@property (nonatomic, getter=_closeToEdgeUpdateTime, setter=_setCloseToEdgeUpdateTime:) double closeToEdgeUpdateTime;
@property (nonatomic, getter=_value, setter=_setValue:) double value;
@property (nonatomic, getter=_previousValue, setter=_setPreviousValue:) double previousValue;
@property (nonatomic, getter=_lastState, setter=_setLastState:) long long lastState;
@property (nonatomic, getter=_lastValueUpdateTime, setter=_setLastValueUpdateTime:) double lastValueUpdateTime;
@property (nonatomic, getter=_previousValueUpdateTime, setter=_setPreviousValueUpdateTime:) double previousValueUpdateTime;
@property (nonatomic, getter=_velocity, setter=_setVelocity:) double velocity;
@property (readonly, nonatomic, getter=_isOvershot) BOOL overshot;
@property (readonly, nonatomic, getter=_percentBeyondDistance) float percentBeyondDistance;
@property (retain, nonatomic, getter=_playingContinuousFeedback, setter=_setPlayingContinuousFeedback:) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback;
@property (readonly, nonatomic, getter=_effectiveDistance) double effectiveDistance;
@property (nonatomic, getter=_state, setter=_setState:) long long state;
@property (nonatomic) long long axis;
@property (nonatomic) double distance;
@property (nonatomic) double extentBeyondDistance;

+ (Class)_configurationClass;

- (void)userInteractionCancelled;
- (void)userInteractionStarted;
- (void)_deactivate;
- (void)_stopAnimatingWithTimeout:(double)a0;
- (BOOL)_valueIsOvershot:(double)a0;
- (void)_updateCloseToEdge;
- (id)initWithStyle:(long long)a0;
- (id)initWithStyle:(long long)a0 coordinateSpace:(id)a1;
- (void)positionUpdated:(double)a0;
- (void)_animationStartedUsingTimeout:(BOOL)a0;
- (id)_stats_key;
- (void)_animationStarted;
- (void).cxx_destruct;
- (void)_cancelStopAnimatingTimeout;
- (void)userInteractionEnded;
- (void)_positionUpdated:(double)a0 withVelocity:(double)a1;
- (id)initWithConfiguration:(id)a0 coordinateSpace:(id)a1;
- (void)_animationEnded;

@end
