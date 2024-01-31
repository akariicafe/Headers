@interface VCPMetaSegment : NSObject

@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly, nonatomic) unsigned long long numOfFrames;

- (id)init;
- (void)finalizeAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)mergeSegment:(id)a0;
- (void)resetSegment:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)updateSegment:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
