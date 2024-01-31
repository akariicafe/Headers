@class NSSet, NSString;

@interface SBUIDependencyGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {
    struct CGPoint { double x; double y; } _initialSceneReferenceLocation;
}

@property (copy, nonatomic) NSSet *observedControlClasses;
@property (nonatomic) double hysteresis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })_convertPoint:(struct CGPoint { double x0; double x1; })a0 fromSceneReferenceCoordinatesToView:(id)a1;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)_didExceedHysteresisWithTouches:(id)a0;

@end
