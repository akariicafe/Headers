@class NSDictionary, AVCameraCalibrationData;

@interface ARCamera : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *extrinsicsMap;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } intrinsics;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } focalLength;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } principalPoint;
@property (nonatomic) struct CGSize { double width; double height; } imageResolution;
@property (nonatomic) double exposureDuration;
@property (nonatomic) float exposureOffset;
@property (nonatomic) unsigned long long lensType;
@property (nonatomic) void /* unknown type, empty encoding */ radialDistortion;
@property (nonatomic) void /* unknown type, empty encoding */ tangentialDistortion;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } transform;
@property (nonatomic) long long trackingState;
@property (nonatomic) long long trackingStateReason;
@property (nonatomic) long long devicePosition;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } displayCenterTransform;
@property (retain, nonatomic) AVCameraCalibrationData *calibrationData;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ eulerAngles;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } projectionMatrix;

- (id)debugQuickLookObject;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })extrinsicMatrix4x4ToDeviceType:(id)a0;
- (void /* unknown type, empty encoding */)unprojectPoint:(struct CGPoint { double x0; double x1; })a0 ontoPlaneWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 orientation:(long long)a2 viewportSize:(struct CGSize { double x0; double x1; })a3;
- (id)_description:(BOOL)a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })extrinsicMatrixToDeviceType:(id)a0;
- (id)initFromImageData:(id)a0;
- (id)initWithIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 imageResolution:(struct CGSize { double x0; double x1; })a1;
- (id)initWithIntrinsics:(id)a0 imageResolution:(SEL)a1 devicePosition:(struct { void /* unknown type, empty encoding */ x0[3]; })a2 lensType:(struct CGSize { double x0; double x1; })a3 radialDistortion:(long long)a4 tangentialDistortion:(unsigned long long)a5 exposureDuration:(double)a6 calibrationData:(id)a7 extrinsicsMap:(id)a8;
- (struct CGPoint { double x0; double x1; })projectPoint:(SEL)a0 orientation:(long long)a1 viewportSize:(struct CGSize { double x0; double x1; })a2;
- (struct { void /* unknown type, empty encoding */ x0[4]; })projectionMatrixForOrientation:(long long)a0 viewportSize:(struct CGSize { double x0; double x1; })a1 zNear:(double)a2 zFar:(double)a3;
- (struct { void /* unknown type, empty encoding */ x0[4]; })viewMatrixForOrientation:(long long)a0;

@end
