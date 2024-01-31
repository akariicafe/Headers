@class UITouch, _UIGestureRecognizerTransformAnalyzer;

@interface UIRotationGestureRecognizer : UIGestureRecognizer {
    double _initialTouchDistance;
    double _initialTouchAngle;
    double _currentTouchAngle;
    long long _currentRotationCount;
    double _lastTouchTime;
    double _velocity;
    double _previousVelocity;
    struct CGPoint { double x; double y; } _anchorSceneReferencePoint;
    _UIGestureRecognizerTransformAnalyzer *_transformAnalyzer;
    UITouch *_touches[2];
    float _preRecognitionWeight;
    float _postRecognitionWeight;
}

@property (nonatomic) double rotation;
@property (readonly, nonatomic) double velocity;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_shouldDefaultToTouches;

- (void)_setPreRecognitionWeight:(double)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_updateTransformAnalyzerWeights;
- (double)_preRecognitionWeight;
- (void)_resetGestureRecognizer;
- (double)_postRecognitionWeight;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_cancelOrFail;
- (void)_endOrFail;
- (void)_transformChangedWithEvent:(id)a0;
- (void).cxx_destruct;
- (void)_setPostRecognitionWeight:(double)a0;
- (struct CGPoint { double x0; double x1; })anchorPoint;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (id)initWithCoder:(id)a0;

@end
