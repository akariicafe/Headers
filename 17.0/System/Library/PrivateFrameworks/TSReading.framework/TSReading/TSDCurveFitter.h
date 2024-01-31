@interface TSDCurveFitter : NSObject

@property (nonatomic) double errorDistance;
@property (nonatomic) long long errorIterations;

+ (id)curveFitter;

- (id)init;
- (id)bezierPathFittingPointArray:(struct { double x0; double x1; } *)a0 count:(long long)a1;
- (id)bezierPathFittingPoints:(id)a0;
- (void)fitCurveToPointArray:(struct { double x0; double x1; } *)a0 count:(long long)a1 bezierCallback:(void /* function */ *)a2 context:(void *)a3;
- (void)fitCurveToPoints:(id)a0 bezierCallback:(void /* function */ *)a1 context:(void *)a2;

@end
