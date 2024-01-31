@class VGFaceMetadata;

@interface VGFaceCaptureData : NSObject <NSCopying>

@property (nonatomic) struct __CVBuffer { } *yuvRectified;
@property (nonatomic) struct __CVBuffer { } *depth;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } videoIntrinsics;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } depthIntrinsics;
@property (retain, nonatomic) VGFaceMetadata *face;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp;

- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)saveAtPath:(id)a0;

@end
