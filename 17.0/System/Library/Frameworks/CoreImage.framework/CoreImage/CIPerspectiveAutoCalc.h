@class CIImage, CIContext;

@interface CIPerspectiveAutoCalc : NSObject {
    CIImage *img;
    CIContext *ctx;
    struct { double focalLength; double lineSearchRangeV; double lineSearchRangeH; double pitchLimit; double yawLimit; double rollLimit; CIImage *saliencyHeatmap; } config;
}

@property (readonly) double pitch;
@property (readonly) double yaw;
@property (readonly) double roll;
@property (readonly) double confidence;
@property BOOL generateDebugImage;
@property (readonly) CIImage *debugImage;
@property (readonly) long long pitchFailureReason;
@property (readonly) long long yawFailureReason;

- (void)dealloc;
- (BOOL)compute;
- (id)initWithContext:(id)a0 image:(id)a1 config:(const struct { double x0; double x1; double x2; double x3; double x4; double x5; id x6; } *)a2;

@end
