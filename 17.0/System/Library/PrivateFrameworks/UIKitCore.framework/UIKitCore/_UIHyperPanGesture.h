@class UIPanGestureRecognizer;

@interface _UIHyperPanGesture : _UIHyperGesture

@property (retain, nonatomic, setter=_setPanGestureRecognizer:) UIPanGestureRecognizer *_panGestureRecognizer;
@property (nonatomic, setter=_setAxes:) unsigned long long _axes;
@property (nonatomic, setter=_setMultiplier:) double _multiplier;

- (id)init;
- (void).cxx_destruct;
- (void)_getCurrentTranslation:(double *)a0;
- (void)_getCurrentVelocity:(double *)a0;
- (id)initWithAxes:(unsigned long long)a0;
- (id)initWithInteractor:(id)a0;

@end
