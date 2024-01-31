@class SKNode, NSMutableArray;

@interface SKReach : SKAction {
    SKNode *_ikRoot;
    struct CGPoint { double x; double y; } _goalPosition;
    NSMutableArray *_ikChain;
    double _velocity;
    BOOL _timeConstrained;
    double _zRotationSpeed;
}

+ (id)reachTo:(struct CGPoint { double x0; double x1; })a0 rootNode:(id)a1 duration:(double)a2;
+ (id)reachTo:(struct CGPoint { double x0; double x1; })a0 rootNode:(id)a1 duration:(double)a2 maxZRotationSpeed:(double)a3;
+ (id)reachTo:(struct CGPoint { double x0; double x1; })a0 rootNode:(id)a1 velocity:(double)a2;
+ (id)reachTo:(struct CGPoint { double x0; double x1; })a0 rootNode:(id)a1 zRotationSpeed:(double)a2 maxDuration:(double)a3;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)solveIKWithTarget:(id)a0;
- (void)updateWithTarget:(id)a0 forTime:(double)a1;
- (void)willStartWithTarget:(id)a0 atTime:(double)a1;

@end
