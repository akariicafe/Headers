@class CAShapeLayer;

@interface OKCircleGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { double x; double y; } _origin;
    double _lastAngle;
    double _angle;
    CAShapeLayer *_roundLayer;
    CAShapeLayer *_pointLayer;
    CAShapeLayer *_originLayer;
}

@property (readonly, nonatomic) double diffenceProgress;
@property (readonly, nonatomic) double continuousProgress;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)initDebugLayer:(struct CGPoint { double x0; double x1; })a0;
- (void)resetDebug;
- (void)updateDebug:(struct CGPoint { double x0; double x1; })a0 angle:(double)a1;

@end
