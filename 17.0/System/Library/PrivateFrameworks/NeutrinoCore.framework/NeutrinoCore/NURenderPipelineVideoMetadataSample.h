@class AVTimedMetadataGroup;

@interface NURenderPipelineVideoMetadataSample : NSObject

@property (readonly, nonatomic) AVTimedMetadataGroup *metadataGroup;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } frameTime;

- (void).cxx_destruct;
- (id)initWithFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 metadataGroup:(id)a1;

@end
