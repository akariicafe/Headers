@class UITouch, UIEvent;
@protocol _UIMultiSelectOneFingerPanGestureDelegate;

@interface _UIMultiSelectOneFingerPanGesture : UIPanGestureRecognizer

@property (readonly, nonatomic) UITouch *activeTouch;
@property (readonly, nonatomic) UIEvent *activeEvent;
@property (weak, nonatomic) id<_UIMultiSelectOneFingerPanGestureDelegate> oneFingerPanDelegate;

- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)_affectedByGesture:(id)a0;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)reset;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (BOOL)_preventsDragInteractionGestures;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;

@end
