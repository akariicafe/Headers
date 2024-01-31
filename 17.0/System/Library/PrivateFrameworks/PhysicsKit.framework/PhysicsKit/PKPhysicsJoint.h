@class PKPhysicsBody;

@interface PKPhysicsJoint : NSObject <NSSecureCoding> {
    BOOL _inUse;
    BOOL _implicit;
    struct b2Joint { void /* function */ **x0; int x1; struct b2Joint *x2; struct b2Joint *x3; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x4; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x5; struct b2Body *x6; struct b2Body *x7; BOOL x8; BOOL x9; void *x10; } *_baseJoint;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct b2Joint { void /* function */ **x0; int x1; struct b2Joint *x2; struct b2Joint *x3; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x4; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x5; struct b2Body *x6; struct b2Body *x7; BOOL x8; BOOL x9; void *x10; } *_joint;
@property (readonly, nonatomic) struct b2JointDef { int x0; void *x1; struct b2Body *x2; struct b2Body *x3; BOOL x4; } *_jointDef;
@property (retain, nonatomic) PKPhysicsBody *bodyA;
@property (retain, nonatomic) PKPhysicsBody *bodyB;
@property (readonly, nonatomic) struct CGVector { double x0; double x1; } reactionForce;
@property (readonly, nonatomic) double reactionTorque;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)create;
- (id)initWithCoder:(id)a0;
- (BOOL)_implicit;
- (BOOL)_inUse;
- (void)set_implicit:(BOOL)a0;
- (BOOL)isEqualToJoint:(id)a0;
- (void)set_inUse:(BOOL)a0;

@end
