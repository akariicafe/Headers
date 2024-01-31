@class NSString;

@interface UIInterpolatedPoint : NSObject <UIVectorOperatable> {
    struct CGPoint { double x; double y; } _point;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)epsilonCompatibleWithVector:(id)a0;
+ (id)valueWithCGPoint:(struct CGPoint { double x0; double x1; })a0;
+ (id)zeroCompatibleWithVector:(id)a0;

- (id)multiplyByScalar:(double)a0;
- (void)integrateWithVelocity:(id)a0 target:(id)a1 intermediateTarget:(id)a2 intermediateTargetVelocity:(id)a3 parameters:(struct { struct { double x0; double x1; double x2; long long x3; } x0; struct { double x0; double x1; double x2; long long x3; } x1; struct { double x0; double x1; double x2; long long x3; } x2; BOOL x3; BOOL x4; BOOL x5; })a4 state:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; double x2; double x3; })a5 delta:(double)a6;
- (id)addVector:(id)a0;
- (id)multiplyByVector:(id)a0;
- (void)reinitWithVector:(id)a0;
- (id)interpolateTo:(id)a0 progress:(double)a1;
- (BOOL)isUndefined;
- (BOOL)isCompatibleWith:(id)a0;
- (id)getValue;
- (BOOL)isApproximatelyEqualTo:(id)a0 withinEpsilon:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
