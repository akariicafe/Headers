@interface AVMetadataDogBodyObject : AVMetadataBodyObject <NSCopying>

+ (id)dogBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)a0 input:(id)a1 timeStamp:(id)a2;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 isVideoMirrored:(BOOL)a2 rollAdjustment:(double)a3;
- (id)initWithBodyID:(long long)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)initWithBodyID:(long long)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 optionalInfoDict:(id)a4 originalMetadataObject:(id)a5 sourceCaptureInput:(id)a6;
- (id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)a0 input:(id)a1 timeStamp:(id)a2;

@end
