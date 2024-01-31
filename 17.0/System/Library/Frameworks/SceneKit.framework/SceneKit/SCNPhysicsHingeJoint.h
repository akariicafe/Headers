@class SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsHingeJoint : SCNPhysicsBehavior {
    struct { SCNPhysicsBody *bodyA; SCNPhysicsBody *bodyB; struct SCNVector3 { float x; float y; float z; } anchorA; struct SCNVector3 { float x; float y; float z; } anchorB; struct SCNVector3 { float x; float y; float z; } axisA; struct SCNVector3 { float x; float y; float z; } axisB; } _definition;
    struct btHingeConstraint { void /* function */ **x0; int x1; int x2; union { int x0; void *x1; } x3; float x4; BOOL x5; BOOL x6; int x7; struct btRigidBody *x8; struct btRigidBody *x9; float x10; float x11; struct btJointFeedback *x12; struct btJacobianEntry { struct btVector3 { union { float x0[4]; } x0; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; struct btVector3 { union { float x0[4]; } x0; } x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; float x5; } x13[3]; struct btJacobianEntry { struct btVector3 { union { float x0[4]; } x0; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; struct btVector3 { union { float x0[4]; } x0; } x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; float x5; } x14[3]; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; } x15; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; } x16; float x17; float x18; struct btAngularLimit { float x0; float x1; float x2; float x3; float x4; float x5; float x6; BOOL x7; } x19; float x20; float x21; float x22; float x23; BOOL x24; BOOL x25; BOOL x26; BOOL x27; BOOL x28; float x29; int x30; float x31; float x32; float x33; } *_constraint;
    SCNPhysicsWorld *_world;
}

@property (readonly, nonatomic) SCNPhysicsBody *bodyA;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } axisA;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } anchorA;
@property (readonly, nonatomic) SCNPhysicsBody *bodyB;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } axisB;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } anchorB;

+ (BOOL)supportsSecureCoding;
+ (id)jointWithBody:(id)a0 axis:(struct SCNVector3 { float x0; float x1; float x2; })a1 anchor:(struct SCNVector3 { float x0; float x1; float x2; })a2;
+ (id)jointWithBodyA:(id)a0 axisA:(struct SCNVector3 { float x0; float x1; float x2; })a1 anchorA:(struct SCNVector3 { float x0; float x1; float x2; })a2 bodyB:(id)a3 axisB:(struct SCNVector3 { float x0; float x1; float x2; })a4 anchorB:(struct SCNVector3 { float x0; float x1; float x2; })a5;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_addToPhysicsWorld:(id)a0 definition:(struct { unsigned char x0[296]; })a1;
- (void)_copyDefinition:(struct { unsigned char x0[296]; } *)a0;
- (void)_willRemoveFromPhysicsWorld:(id)a0;
- (id)initWithBody:(id)a0 axis:(struct SCNVector3 { float x0; float x1; float x2; })a1 anchor:(struct SCNVector3 { float x0; float x1; float x2; })a2;
- (id)initWithBodyA:(id)a0 axisA:(struct SCNVector3 { float x0; float x1; float x2; })a1 anchorA:(struct SCNVector3 { float x0; float x1; float x2; })a2 bodyB:(id)a3 axisB:(struct SCNVector3 { float x0; float x1; float x2; })a4 anchorB:(struct SCNVector3 { float x0; float x1; float x2; })a5;

@end
