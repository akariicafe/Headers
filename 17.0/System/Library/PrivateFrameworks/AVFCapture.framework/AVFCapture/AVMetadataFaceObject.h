@class AVMetadataFaceObjectInternal;

@interface AVMetadataFaceObject : AVMetadataObject <NSCopying> {
    AVMetadataFaceObjectInternal *_internal;
}

@property (readonly) long long faceID;
@property (readonly) BOOL hasRollAngle;
@property (readonly) double rollAngle;
@property (readonly) BOOL hasYawAngle;
@property (readonly) double yawAngle;

+ (id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)a0 input:(id)a1 timeStamp:(id)a2;

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)smileConfidence;
- (id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)a0 input:(id)a1 timeStamp:(id)a2;
- (BOOL)hasLeftEyeBounds;
- (BOOL)hasLeftEyeClosedConfidence;
- (BOOL)hasPitchAngle;
- (BOOL)hasRightEyeBounds;
- (BOOL)hasRightEyeClosedConfidence;
- (BOOL)hasSmileConfidence;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 isVideoMirrored:(BOOL)a2 rollAdjustment:(double)a3;
- (id)initWithFaceID:(long long)a0 hasRollAngle:(BOOL)a1 rollAngle:(double)a2 hasYawAngle:(BOOL)a3 yawAngle:(double)a4 hasPitchAngle:(BOOL)a5 pitchAngle:(double)a6 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a7 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a8 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a9;
- (id)initWithFaceID:(long long)a0 hasRollAngle:(BOOL)a1 rollAngle:(double)a2 hasYawAngle:(BOOL)a3 yawAngle:(double)a4 hasPitchAngle:(BOOL)a5 pitchAngle:(double)a6 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a7 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a8 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a9 optionalInfoDict:(id)a10 originalMetadataObject:(id)a11 sourceCaptureInput:(id)a12;
- (id)initWithType:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 optionalInfoDict:(id)a4 originalMetadataObject:(id)a5 sourceCaptureInput:(id)a6;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })leftEyeBounds;
- (int)leftEyeClosedConfidence;
- (double)pitchAngle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rightEyeBounds;
- (int)rightEyeClosedConfidence;

@end
