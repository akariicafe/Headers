@class SCNNode;

@interface SCNReplicatorConstraint : SCNConstraint {
    SCNNode *_target;
    BOOL _replicateOrientation;
    BOOL _replicatePosition;
    BOOL _replicateScale;
    struct SCNVector4 { float x; float y; float z; float w; } _orientationOffset;
    struct SCNVector3 { float x; float y; float z; } _positionOffset;
    struct SCNVector3 { float x; float y; float z; } _scaleOffset;
}

@property (retain, nonatomic) SCNNode *target;
@property (nonatomic) BOOL replicatesOrientation;
@property (nonatomic) BOOL replicatesPosition;
@property (nonatomic) BOOL replicatesScale;
@property (nonatomic) struct SCNVector4 { float x0; float x1; float x2; float x3; } orientationOffset;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } positionOffset;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } scaleOffset;

+ (BOOL)supportsSecureCoding;
+ (id)replicatorConstraintWithTarget:(id)a0;
+ (id)replicatorConstraint;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_customDecodingOfSCNReplicatorConstraint:(id)a0;
- (void)_customEncodingOfSCNReplicatorConstraint:(id)a0;

@end
