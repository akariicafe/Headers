@class UITouch, NSString, UITextGestureTuning, UITextRangeAdjustmentGestureRecognizer, UIView, UITextLoupeSession;
@protocol UITextRangeAdjustmentInteractionDelegate;

@interface UITextRangeAdjustmentInteraction : UITextInteraction <UIGestureRecognizerDelegate> {
    UIView *_gestureHostView;
    UITextGestureTuning *_gestureTuning;
    UITextLoupeSession *_loupeSession;
}

@property (nonatomic) struct CGPoint { double x; double y; } initialPoint;
@property (nonatomic) struct CGPoint { double x; double y; } basePoint;
@property (nonatomic) struct CGPoint { double x; double y; } extentPoint;
@property (nonatomic) struct CGPoint { double x; double y; } initialBasePoint;
@property (nonatomic) double initialDistance;
@property (nonatomic) double firstMovedTime;
@property (retain, nonatomic) UITouch *activeTouch;
@property (nonatomic) BOOL baseIsStart;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } initialExtentPoint;
@property (weak, nonatomic) id<UITextRangeAdjustmentInteractionDelegate> adjustmentDelegate;
@property (readonly, nonatomic) UITextRangeAdjustmentGestureRecognizer *adjustmentGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_createGestureTuningIfNecessary;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_activeTouchEnded;
- (void)_adjustmentInteractionChangedWithLocation:(struct CGPoint { double x0; double x1; })a0 forTouchType:(long long)a1;
- (void)_updateAdjustmentInteractionWithState:(long long)a0 location:(struct CGPoint { double x0; double x1; })a1 locationOfFirstTouch:(struct CGPoint { double x0; double x1; })a2 forTouchType:(long long)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_activeAdjustmentEdgeRect;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)_pointCloserToEnd:(struct CGPoint { double x0; double x1; })a0 startEdge:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 endEdge:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_adjustmentInteractionEndedAtLocation:(struct CGPoint { double x0; double x1; })a0 forTouchType:(long long)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)_adjustmentInteractionBeganWithLocation:(struct CGPoint { double x0; double x1; })a0 startPoint:(struct CGPoint { double x0; double x1; })a1 forTouchType:(long long)a2;
- (BOOL)doesControlDelegate;
- (void)_didRecognizeAdjustmentGesture:(id)a0;
- (void).cxx_destruct;
- (void)manuallyUpdateInteractionWithGestureState:(long long)a0 location:(struct CGPoint { double x0; double x1; })a1 locationOfFirstTouch:(struct CGPoint { double x0; double x1; })a2 forTouchType:(long long)a3;
- (BOOL)_shouldDisplayLoupeForTouchType:(long long)a0;
- (id)initWithAdjustmentDelegate:(id)a0 gestureHostView:(id)a1;
- (void)updateBaseAndExtentPointsFromEdges;
- (BOOL)_shouldApplyOffsetForTouchType:(long long)a0;
- (id)gestureRecognizerHostView;
- (struct CGPoint { double x0; double x1; })_convertPointToViewCoordinateSpace:(struct CGPoint { double x0; double x1; })a0;
- (id)_gestureView;
- (BOOL)_gestureTuningEnabledForTouches:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)_adjustmentInteractionCancelled;

@end
