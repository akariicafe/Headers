@interface BLSHDurationCalculator : NSObject {
    double _start;
    double _duration;
}

@property (readonly, nonatomic) double remainingDuration;

- (id)initWithDuration:(double)a0;

@end
