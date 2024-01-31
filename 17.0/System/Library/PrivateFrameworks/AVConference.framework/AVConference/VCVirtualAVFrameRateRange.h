@interface VCVirtualAVFrameRateRange : AVFrameRateRange

@property double minFrameRate;
@property double maxFrameRate;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } maxFrameDuration;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } minFrameDuration;

- (id)initWithMinFrameRate:(double)a0 maxFrameRate:(double)a1;

@end
