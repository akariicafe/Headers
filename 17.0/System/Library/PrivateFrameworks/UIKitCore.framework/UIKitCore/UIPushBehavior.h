@class NSArray, NSMutableDictionary;

@interface UIPushBehavior : UIDynamicBehavior {
    double _angle;
    double _magnitude;
    BOOL _active;
    long long _mode;
    struct CGVector { double dx; double dy; } _forceVector;
    double _timeInterval;
    NSMutableDictionary *_targetPoints;
    int _i;
}

@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) long long mode;
@property (nonatomic) BOOL active;
@property (nonatomic) double angle;
@property (nonatomic) double magnitude;
@property (nonatomic) struct CGVector { double x0; double x1; } pushDirection;

+ (BOOL)_isPrimitiveBehavior;

- (id)init;
- (id)initWithItems:(id)a0;
- (void)_step;
- (void)removeItem:(id)a0;
- (void)addItem:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_associate;
- (void)_dissociate;
- (id)initWithItems:(id)a0 mode:(long long)a1;
- (void)setAngle:(double)a0 magnitude:(double)a1;
- (void)setTargetOffsetFromCenter:(struct UIOffset { double x0; double x1; })a0 forItem:(id)a1;
- (void)setTargetPoint:(struct CGPoint { double x0; double x1; })a0 forItem:(id)a1;
- (void)setXComponent:(double)a0;
- (void)setXComponent:(double)a0 yComponent:(double)a1;
- (void)setYComponent:(double)a0;
- (struct UIOffset { double x0; double x1; })targetOffsetFromCenterForItem:(id)a0;
- (struct CGPoint { double x0; double x1; })targetPointForItem:(id)a0;
- (double)xComponent;
- (double)yComponent;

@end
