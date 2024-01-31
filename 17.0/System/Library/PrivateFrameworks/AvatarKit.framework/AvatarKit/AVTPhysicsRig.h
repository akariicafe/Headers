@class SCNNode, SCNPhysicsBody, SCNPhysicsConeTwistJoint;

@interface AVTPhysicsRig : NSObject {
    float _coneConstraintLength;
    float _coneConstraintSinusAngularLimit;
    SCNNode *_rig;
    SCNNode *_chainRoot;
    SCNPhysicsBody *_physicsBody;
    SCNPhysicsConeTwistJoint *_physicsBehavior;
    double _downForceFactor;
    void /* unknown type, empty encoding */ _restPosition_chainRoot;
    void /* unknown type, empty encoding */ _restGravityVector_chainRoot;
    struct { void /* unknown type, empty encoding */ columns[3]; } _coneConstraintBasis_chainParent;
    struct { void /* unknown type, empty encoding */ columns[4]; } _coneConstraintAnchorB;
}

- (void).cxx_destruct;

@end
