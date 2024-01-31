@class NSString, CAMediaTimingFunction;

@interface HUAnimationSettings : NSObject <NSCopying, _UIBasicAnimationFactory>

@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (nonatomic) double speed;
@property (nonatomic) float repeatCount;
@property (readonly, nonatomic) double durationWithSpeed;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)settingsWithDuration:(double)a0;
+ (id)settingsWithDuration:(double)a0 curve:(long long)a1;

- (id)_timingFunctionForAnimation;
- (id)init;
- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)interpolatedProgressForProgress:(double)a0;
- (double)interpolatedProgressForTime:(double)a0;
- (id)settingsSpedUpByFactor:(double)a0;

@end
