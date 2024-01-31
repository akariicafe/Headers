@class NSString, BWSpringSimulation;

@interface BWRamp : NSObject {
    NSString *_name;
    int _currentIteration;
    float _startValue;
    float _targetValue;
    int _durationInIterations;
    int _shape;
    float _exponentialConvergenceFraction;
    float _exponentialSnapFraction;
    BWSpringSimulation *_spring;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _springPTS;
    float _frameRate;
}

@property (readonly, nonatomic) BOOL isRamping;
@property (readonly, nonatomic) float currentValue;
@property (readonly, nonatomic) BOOL isRampingUp;

+ (void)initialize;

- (id)init;
- (void)reset;
- (void)dealloc;
- (void)startRampFrom:(float)a0 to:(float)a1 iterations:(int)a2 shape:(int)a3 exponentialConvergenceFraction:(float)a4;
- (id)initWithName:(id)a0;
- (void)startRampFrom:(float)a0 to:(float)a1 iterations:(int)a2 shape:(int)a3;
- (void)startSpringRampFrom:(float)a0 to:(float)a1 withTension:(float)a2 friction:(float)a3 snapFraction:(float)a4 frameRate:(float)a5;
- (float)updateRampForNextIteration;

@end
