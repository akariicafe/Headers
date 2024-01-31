@interface AXMADSREnvelope : NSObject

@property (nonatomic) double attackMS;
@property (nonatomic) double attackLevel;
@property (nonatomic) double decayMS;
@property (nonatomic) double sustainMS;
@property (nonatomic) double sustainLevel;
@property (nonatomic) double releaseMS;
@property (readonly, nonatomic) double lengthMS;

+ (id)defaultEnvelope;

- (id)init;
- (id)copy;
- (id)initWithAttackDuration:(double)a0 attackLevel:(double)a1 decayDuration:(double)a2 sustainDuration:(double)a3 sustainLevel:(double)a4 releaseDuration:(double)a5;
- (double)levelForTime:(double)a0;

@end
