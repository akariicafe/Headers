@class VGFaceMetadata, NSDictionary, VGSkeleton;

@interface VGCaptureData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct __CVBuffer { } *yuvRectified;
@property (nonatomic) struct __CVBuffer { } *rgbRectified;
@property (nonatomic) struct __CVBuffer { } *depth;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } videoIntrinsics;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } depthIntrinsics;
@property (retain, nonatomic) VGFaceMetadata *face;
@property (retain, nonatomic) NSDictionary *faceTrackingResult;
@property (retain, nonatomic) VGSkeleton *skeleton;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[3]; } fixedDepthIntrinsics_rdar92226535;

+ (struct __CVBuffer { } *)_createColorFromYCbCr:(struct __CVBuffer { } *)a0;
+ (struct { void /* unknown type, empty encoding */ x0[3]; })_dataToMatrix33:(id)a0;
+ (id)_matrix33ToData:(struct { void /* unknown type, empty encoding */ x0[3]; })a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getFaceCaptureData;
- (void)saveAtPath:(id)a0;

@end
