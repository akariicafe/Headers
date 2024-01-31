@class UIPinchGestureRecognizer;

@interface _UIHyperPinchGesture : _UIHyperGesture

@property (retain, nonatomic, setter=_setPinchGestureRecognizer:) UIPinchGestureRecognizer *_pinchGestureRecognizer;
@property (nonatomic, setter=_setMultiplier:) double _multiplier;

- (id)init;
- (void).cxx_destruct;
- (void)_getCurrentTranslation:(double *)a0;
- (void)_getCurrentVelocity:(double *)a0;
- (id)initWithInteractor:(id)a0;

@end
