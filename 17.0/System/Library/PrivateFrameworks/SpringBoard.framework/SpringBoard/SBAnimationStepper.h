@class NSArray, NSString, NSMutableSet, CADisplayLink, BSAnimationSettings;

@interface SBAnimationStepper : NSObject <CAAnimationDelegate, SBUIAnimationStepping> {
    BSAnimationSettings *_animationSettings;
    NSMutableSet *_views;
    NSMutableSet *_finishedAnimatingViews;
    CADisplayLink *_displayLink;
    id /* block */ _completion;
    double _percentage;
    BOOL _invalidated;
    BOOL _completed;
    BOOL _finishingForward;
    BOOL _finishingBackward;
    BOOL _animatingToStepPercent;
    double _animatedSteppingTimestamp;
    double _animatedSteppingStartPercent;
    double _animatedSteppingTargetPercent;
    double _finishBackwardTimestamp;
    double _finishBackwardDuration;
    double _finishBackwardPercentage;
}

@property (nonatomic) double finishSpeed;
@property (readonly, nonatomic) NSArray *views;
@property (readonly, nonatomic) double duration;
@property (nonatomic) BOOL adjustsDurationForLongestAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isStepped) BOOL stepped;
@property (nonatomic) double stepPercentage;

- (id)views;
- (void)_displayLinkFired:(id)a0;
- (id)init;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)initWithAnimationSettings:(id)a0;
- (double)_nextCommitTime;
- (void)_updateAnimationSteppingTarget:(double)a0;
- (void)_adjustDurationForLongestAnimation;
- (void)_checkForCompletion;
- (void)_displayLinkFiredForBackwardToStart:(id)a0;
- (void)_makeSubviewTree:(id)a0 fromView:(id)a1;
- (void)_setStepPercentage:(double)a0;
- (void)finishSteppingBackwardToStart;
- (void)finishSteppingBackwardToStartWithCompletion:(id /* block */)a0;
- (void)finishSteppingForwardToEnd;
- (void)finishSteppingForwardToEndWithCompletion:(id /* block */)a0;
- (void)startSteppingAnimationsInView:(id)a0;

@end
