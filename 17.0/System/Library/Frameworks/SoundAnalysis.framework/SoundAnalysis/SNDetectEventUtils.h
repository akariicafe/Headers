@interface SNDetectEventUtils : NSObject

+ (BOOL)checkEventHappenedWithinRecentDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 ofResult:(id)a1 satisfyingThreshold:(double)a2 resultToScalar:(id /* block */)a3 mostRecentTimeOfEvent:(id *)a4;
+ (BOOL)checkEventHappenedWithinRecentDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 state:(BOOL)a1 stateTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 mostRecentTimeOfEvent:(id *)a3;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })updateMostRecentTimeOfEvent:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 state:(BOOL)a1 stateTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

- (id)init;

@end
