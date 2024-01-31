@class GCControllerDirectionPad, GCControllerButtonInput, NSString;

@interface GCControllerTouchpad : GCControllerElement {
    float _touchpadRelativeWindowSize;
    float _touchpadRelativeOriginBufferSize;
    BOOL _leftBufferZone;
    BOOL _beganTouchOutsideBounds;
    float _previousButtonState;
    struct CGPoint { double x; double y; } _absoluteWindowLocation;
    struct CGPoint { double x; double y; } _absolutePosition;
    struct CGPoint { double x; double y; } _absoluteTouchDownPosition;
    struct CGPoint { double x; double y; } _relativePosition;
    NSString *_descriptionName;
}

@property (retain, nonatomic) GCControllerDirectionPad *touchSurface;
@property (readonly, nonatomic) GCControllerButtonInput *button;
@property (copy, nonatomic) id /* block */ touchDown;
@property (copy, nonatomic) id /* block */ touchMoved;
@property (copy, nonatomic) id /* block */ touchUp;
@property (readonly, nonatomic) long long touchState;
@property (nonatomic) BOOL reportsAbsoluteTouchSurfaceValues;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGPoint { double x0; double x1; })addCGPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)calculateRelativePositionWithDigitizerX:(float)a0 digitizerY:(float)a1 touchDown:(BOOL)a2;
- (struct CGPoint { double x0; double x1; })clampPoint:(struct CGPoint { double x0; double x1; })a0 toLength:(double)a1;
- (BOOL)determineTouchStateWithDigitizerX:(float)a0 digitizerY:(float)a1 touchDown:(BOOL)a2;
- (double)distanceBetweenCGPoint:(struct CGPoint { double x0; double x1; })a0 andCGPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithDescriptionName:(id)a0;
- (double)magnitudeForCGPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })mulCGPoint:(struct CGPoint { double x0; double x1; })a0 byScalar:(double)a1;
- (struct CGPoint { double x0; double x1; })normalizeCGPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)reportDigitizerChange:(id)a0;
- (struct CGPoint { double x0; double x1; })scaleCGPoint:(struct CGPoint { double x0; double x1; })a0 toLength:(double)a1;
- (BOOL)setDigitizerX:(float)a0 digitizerY:(float)a1 touchDown:(BOOL)a2 queue:(id)a3;
- (void)setValueForXAxis:(float)a0 yAxis:(float)a1 touchDown:(BOOL)a2 buttonValue:(float)a3;
- (struct CGPoint { double x0; double x1; })subCGPoint:(struct CGPoint { double x0; double x1; })a0 fromPoint:(struct CGPoint { double x0; double x1; })a1;

@end
