@interface SiriSharedUIAnimationUtilities : NSObject

+ (double)defaultAnimationDuration;
+ (id)defaultTimingFunction;
+ (id)_centeringAnimationForInitialScale:(double)a0 width:(double)a1;
+ (double)_springDurationForInsertAnimation;
+ (double)_springDurationForMass:(double)a0 stiffness:(double)a1 damping:(double)a2;
+ (double)animationBeginTimeForStyle:(long long)a0;
+ (double)animationBeginTimeForStyle:(long long)a0 presentationType:(long long)a1;
+ (double)animationCoefficient;
+ (double)animationDurationForStyle:(long long)a0;
+ (double)animationDurationForStyle:(long long)a0 presentationType:(long long)a1;
+ (id)animationForStyle:(long long)a0 expectedWidthForStyle:(id)a1;
+ (id)animationForStyle:(long long)a0 expectedWidthForStyle:(id)a1 presentationType:(long long)a2;
+ (void)perfomAnimationBlockWithAnimationBlock:(id /* block */)a0 context:(id)a1 completion:(id /* block */)a2;

@end
