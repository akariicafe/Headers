@class NSDictionary, ARFrame, JFXFaceAnchor;

@interface JFXARMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } cameraTransform;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } cameraIntrinsics;
@property (readonly, nonatomic) long long pvTransformOrientation;
@property (copy, nonatomic) NSDictionary *animojiPhysicsBlendShapes;
@property (readonly, nonatomic) ARFrame *arFrame;
@property (readonly, nonatomic) JFXFaceAnchor *faceAnchor;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } anchorTransform;
@property (readonly, nonatomic) BOOL hasTrackedFace;
@property (readonly, nonatomic) struct CGSize { double width; double height; } imageResolution;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })cameraProjectionForOutputSize:(struct CGSize { double x0; double x1; })a0 interfaceOrientation:(long long)a1 zNear:(double)a2 zFar:(double)a3;
- (struct { void /* unknown type, empty encoding */ x0[4]; })cameraTransformForInterfaceOrientation:(long long)a0;
- (id)initWithARFrame:(id)a0 faceAnchor:(id)a1;
- (id)initWithAnchorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 cameraTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 cameraIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a2 cameraImageResolution:(struct CGSize { double x0; double x1; })a3;
- (id)initWithFaceAnchor:(id)a0 cameraIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a1;

@end
