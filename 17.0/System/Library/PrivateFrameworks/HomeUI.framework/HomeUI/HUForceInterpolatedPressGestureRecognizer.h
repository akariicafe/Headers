@class NSMutableSet;

@interface HUForceInterpolatedPressGestureRecognizer : UILongPressGestureRecognizer

@property (readonly, nonatomic) NSMutableSet *hu_activeTouches;
@property (nonatomic) double currentSampleForceMultiplier;
@property (nonatomic) double currentSampleTimestamp;
@property (nonatomic) double overallForceMultiplierExcludingCurrentSample;
@property (nonatomic) double touchStartTime;
@property (readonly, nonatomic) double currentForceMultiplier;
@property (readonly, nonatomic) double overallForceMultiplier;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (double)_forceMultiplierIncludingCurrentSample;
- (void)_logForceMultiplierSample;
- (void)_resetForceSamples;

@end
