@interface PXCurrentTimeRecord : NSObject {
    double _sampleTimestamp;
}

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } sampleTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } currentTime;
@property (readonly, nonatomic) float rate;
@property (readonly, nonatomic) BOOL isValid;

- (id)description;
- (id)initWithSampleTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithSampleTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 rate:(float)a1;

@end
