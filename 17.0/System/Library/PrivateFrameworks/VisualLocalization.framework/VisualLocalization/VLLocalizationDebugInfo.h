@class NSUUID, NSData, _VLStatistics, GEOVLFLocation;

@interface VLLocalizationDebugInfo : NSObject <NSSecureCoding> {
    NSUUID *_identifier;
    double _monotonicTimestamp;
    double _duration;
    _VLStatistics *_statistics;
    BOOL _hasResultPose;
    struct { void /* unknown type, empty encoding */ columns[4]; } _resultTransform;
    struct { void /* unknown type, empty encoding */ coordinate; double horizontalAccuracy; } _resultLocation;
    float _resultConfidence;
    struct { float v[6][6]; } _resultCovariance;
    GEOVLFLocation *_analyticsLocation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_timestamp) double timestamp;
@property (readonly, nonatomic, getter=_location) struct { double pos_geoc[3]; float horz_accuracy; int is_vl_fused; int type; } location;
@property (readonly, nonatomic, getter=_heading) struct { double trueHeading; double accuracy; } heading;
@property (readonly, nonatomic, getter=_gravity) void /* unknown type, empty encoding */ gravity;
@property (readonly, nonatomic, getter=_transform) struct { void /* unknown type, empty encoding */ columns[4]; } transform;
@property (readonly, nonatomic, getter=_cameraIntrinsics) struct { void /* unknown type, empty encoding */ columns[3]; } cameraIntrinsics;
@property (readonly, nonatomic, getter=_radialDistortion) void /* unknown type, empty encoding */ radialDistortion;
@property (readonly, nonatomic, getter=_exposureTargetOffset) double exposureTargetOffset;
@property (readonly, nonatomic, getter=_resultStatus) unsigned long long resultStatus;
@property (readonly, nonatomic, getter=_inlierIndices) int *inlierIndices;
@property (readonly, nonatomic, getter=_solutionsCount) unsigned long long solutionsCount;
@property (readonly, nonatomic, getter=_solverConfidences) float *solverConfidences;
@property (readonly, nonatomic, getter=_fusedConfidences) float *fusedConfidences;
@property (readonly, nonatomic) unsigned long long inliersCount;
@property (readonly, nonatomic) float *points2D;
@property (readonly, nonatomic) double *points3D;
@property (readonly, nonatomic) NSData *pngData;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)results;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)inputParameters;
- (id)analyticsInformationWithSessionStartMonotonicTime:(double)a0;
- (id)initWithPixelBuffer:(id)a0 monotonicTimestamp:(SEL)a1 timestamp:(struct __CVBuffer { } *)a2 duration:(double)a3 location:(double)a4 clLocation:(double)a5 heading:(struct { double x0[3]; float x1; int x2; int x3; })a6 gravity:(id)a7 transform:(struct { double x0; double x1; })a8 cameraIntrinsics:(struct { void /* unknown type, empty encoding */ x0[4]; })a9 radialDistortion:(struct { void /* unknown type, empty encoding */ x0[3]; })a10 exposureTargetOffset:(double)a11 statistics:(const struct { double *x0; float *x1; int *x2; short *x3; short *x4; float x5[3]; int x6; int x7; float *x8; float *x9; int x10; int x11; int x12; int x13; int x14; struct vl_tile_t *x15; char *x16; struct *x17; int *x18; int x19; double x20[6]; float *x21; char *x22; int x23; float *x24; short *x25; short *x26; float *x27; double *x28; int *x29; float *x30; float *x31; float *x32; int x33; int x34; int x35; double x36; double x37; double x38; double x39; double x40; double x41; double x42; double x43; double x44; double x45; double x46; double x47; double x48; double x49; double x50; double x51; double x52; double x53; double x54; double x55; double x56; double x57; double x58; long long x59; int x60; } *)a12 resultStatus:(unsigned long long)a13 resultPose:(const struct { double x0[3][3]; double x1[3]; float x2; float x3[36]; } *)a14 preserveImageData:(BOOL)a15;

@end
