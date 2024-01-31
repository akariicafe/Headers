@class NSMutableSet, NSMutableDictionary;
@protocol UIKeyboardPinchGestureRecognizerDelegate;

@interface UIKeyboardPinchGestureRecognizer : UIGestureRecognizer {
    double _pinchSeparationValues[4];
    NSMutableSet *_activeTouches;
    NSMutableDictionary *_initialTouchPoints;
    double _beginPinchTimestamp;
}

@property (readonly, nonatomic) BOOL pinchDetected;
@property (readonly, nonatomic) double initialPinchSeparation;
@property (weak, nonatomic) id<UIKeyboardPinchGestureRecognizerDelegate> pinchDelegate;

- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)reset;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (double)finalProgressForInitialProgress:(double)a0;
- (void)interpretTouchesForSplit;
- (void)resetPinchCalculations;

@end
