@class NSArray, NSNumber;

@interface VNHumanBodyPose3DSpecifier : VNRecognizedPoints3DSpecifier {
    NSArray *_orderedHumanBodyPose3DKeypoints;
    NSNumber *_humanHeight;
}

@property (readonly, nonatomic) float bodyHeight;
@property (readonly, nonatomic) float heightEstimatedScale;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } cameraTransformMatrix;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } cameraRenderTransformMatrix;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } cameraIntrinsics;
@property (readonly, nonatomic) struct CGSize { double width; double height; } inputSize;

+ (BOOL)supportsSecureCoding;
+ (id)_stringRepresentationForRequestRevision:(unsigned long long)a0 abpkJoint:(id)a1 error:(id *)a2;
+ (id)supportedHumanBodyPose3DKeypointsRev1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)availableGroupKeys;
- (id)initWithHumanBody3DOutput:(id)a0 originatingRequestSpecifier:(id)a1;
- (id)pointKeyGroupLabelsMapping;

@end
