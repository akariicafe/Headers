@class PUValueFilter;

@interface PUPinchTracker : NSObject {
    struct CGPoint { double x; double y; } _initialCenter;
    struct CGSize { double width; double height; } _initialSize;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _initialTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _initialTransformInverse;
    BOOL _didSetInitialPinchValues;
    struct CGPoint { double x; double y; } _initialPinchCenter;
    double _initialPinchDistance;
    double _initialPinchAngle;
    struct CGPoint { double x; double y; } _initialPinchOrigin;
    PUValueFilter *_pinchRotationValueFilter;
}

@property (copy, nonatomic) id /* block */ updateHandler;
@property (nonatomic) BOOL allowTrackingOutside;
@property (nonatomic) double rotationHysteresisDegrees;

- (id)init;
- (void).cxx_destruct;
- (void)_transformPinchLocation1:(struct CGPoint { double x0; double x1; })a0 location2:(struct CGPoint { double x0; double x1; })a1 intoCenter:(struct CGPoint { double x0; double x1; } *)a2 distance:(double *)a3 angle:(double *)a4;
- (id)initWithInitialCenter:(struct CGPoint { double x0; double x1; })a0 initialSize:(struct CGSize { double x0; double x1; })a1 initialTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (void)setPinchLocation1:(struct CGPoint { double x0; double x1; })a0 location2:(struct CGPoint { double x0; double x1; })a1;

@end
