@interface MADMattedFrame : NSObject

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } presentationTimestamp;

- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 presentationTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
