@class CAMediaTimingFunction;

@interface PKSpringAnimationFactory : NSObject <NSCopying, PKSpringAnimationFactory> {
    struct { double mass; double stiffness; double damping; double velocity; } _state;
    double _duration;
    id /* block */ _dynamicDurationProvider;
    BOOL _needsDurationUpdate;
}

@property (readonly, nonatomic) double duration;
@property (nonatomic) double speed;
@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;
@property (nonatomic) double velocity;
@property (retain, nonatomic) CAMediaTimingFunction *timing;

+ (double)defaultDuration;
+ (id)createDefaultFactory;
+ (id)highFrameRateSpringAnimationWithKeyPath:(id)a0 reason:(unsigned short)a1;
+ (id)sharedDefaultFactory;
+ (id)springAnimationWithKeyPath:(id)a0;

- (id)init;
- (void)dealloc;
- (id)copy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2;
- (id)_createSpringAnimationWithKeyPath:(id)a0;
- (id)highFrameRateSpringAnimationWithKeyPath:(id)a0 reason:(unsigned short)a1;
- (id)initWithSpringState:(struct { double x0; double x1; double x2; double x3; })a0;
- (void)setTiming:(id)a0 withDynamicDurationProvider:(id /* block */)a1;
- (id)springAnimationWithKeyPath:(id)a0;

@end
