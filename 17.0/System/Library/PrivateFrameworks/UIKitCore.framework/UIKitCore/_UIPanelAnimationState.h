@class UISlidingBarStateRequest, _UIPanelCoordinatingAnimator;

@interface _UIPanelAnimationState : NSObject

@property (copy, nonatomic) UISlidingBarStateRequest *fromRequest;
@property (copy, nonatomic) UISlidingBarStateRequest *toRequest;
@property (nonatomic) double progress;
@property (nonatomic, setter=setFinishingAnimation:) BOOL isFinishingAnimation;
@property (nonatomic) long long affectedSides;
@property (nonatomic) BOOL shouldAssignOffscreenWidthsToStateRequest;
@property (readonly, nonatomic) UISlidingBarStateRequest *stateRequest;
@property (retain, nonatomic) _UIPanelCoordinatingAnimator *animator;
@property (nonatomic) BOOL animatorShouldCoordinate;

+ (double)defaultDuration;
+ (id)timingCurveProvider;
+ (id)timingCurveProviderWithVelocity:(double)a0;

- (id)description;
- (void).cxx_destruct;

@end
