@class ABPK2DDetectionResult;

@interface ARSkeleton2D : ARSkeleton <NSSecureCoding> {
    ABPK2DDetectionResult *_skeleton;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) const void *jointLandmarks;

- (id)definition;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)jointCount;
- (BOOL)isJointTracked:(long long)a0;
- (id)initWithDetectedSkeleton:(id)a0;
- (void /* unknown type, empty encoding */)landmarkForJointNamed:(id)a0;

@end
