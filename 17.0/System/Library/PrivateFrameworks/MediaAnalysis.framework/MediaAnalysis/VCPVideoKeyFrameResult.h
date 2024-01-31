@interface VCPVideoKeyFrameResult : NSObject

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timeStamp;
@property (readonly, nonatomic) float score;

- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 andScore:(float)a1;

@end
