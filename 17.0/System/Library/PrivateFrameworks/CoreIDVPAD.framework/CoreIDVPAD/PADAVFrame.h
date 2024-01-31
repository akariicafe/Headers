@interface PADAVFrame : NSObject

@property (weak, nonatomic) id pixelBuffer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp;

- (void).cxx_destruct;

@end
