@class SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsConeTwistJoint : SCNPhysicsBehavior {
    struct { SCNPhysicsBody *bodyA; struct SCNMatrix4 { float m11; float m12; float m13; float m14; float m21; float m22; float m23; float m24; float m31; float m32; float m33; float m34; float m41; float m42; float m43; float m44; } frameA; SCNPhysicsBody *bodyB; struct SCNMatrix4 { float m11; float m12; float m13; float m14; float m21; float m22; float m23; float m24; float m31; float m32; float m33; float m34; float m41; float m42; float m43; float m44; } frameB; double maximumAngularLimit1; double maximumAngularLimit2; double maximumTwistAngle; } _definition;
    struct btConeTwistConstraint { void /* function */ **x0; int x1; int x2; union { int x0; void *x1; } x3; float x4; BOOL x5; BOOL x6; int x7; struct btRigidBody *x8; struct btRigidBody *x9; float x10; float x11; struct btJointFeedback *x12; struct btJacobianEntry { struct btVector3 { union { float x0[4]; } x0; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; struct btVector3 { union { float x0[4]; } x0; } x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; float x5; } x13[3]; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; } x14; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; } x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; struct btVector3 { union { float x0[4]; } x0; } x24; struct btVector3 { union { float x0[4]; } x0; } x25; float x26; float x27; float x28; float x29; float x30; float x31; float x32; float x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; float x38; float x39; struct btVector3 { union { float x0[4]; } x0; } x40; BOOL x41; BOOL x42; struct btQuaternion { union { float x0[4]; } x0; } x43; float x44; struct btVector3 { union { float x0[4]; } x0; } x45; int x46; float x47; float x48; float x49; } *_constraint;
    SCNPhysicsWorld *_world;
}

@property (readonly, nonatomic) SCNPhysicsBody *bodyA;
@property (nonatomic) struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } frameA;
@property (readonly, nonatomic) SCNPhysicsBody *bodyB;
@property (nonatomic) struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } frameB;
@property (nonatomic) double maximumAngularLimit1;
@property (nonatomic) double maximumAngularLimit2;
@property (nonatomic) double maximumTwistAngle;

+ (BOOL)supportsSecureCoding;
+ (id)jointWithBody:(id)a0 frame:(struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })a1;
+ (id)jointWithBodyA:(id)a0 frameA:(struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })a1 bodyB:(id)a2 frameB:(struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })a3;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_addToPhysicsWorld:(id)a0 definition:(struct { unsigned char x0[296]; })a1;
- (void)_copyDefinition:(struct { unsigned char x0[296]; } *)a0;
- (void)_willRemoveFromPhysicsWorld:(id)a0;
- (id)initWithBody:(id)a0 frame:(struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })a1;
- (id)initWithBodyA:(id)a0 frameA:(struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })a1 bodyB:(id)a2 frameB:(struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })a3;

@end
