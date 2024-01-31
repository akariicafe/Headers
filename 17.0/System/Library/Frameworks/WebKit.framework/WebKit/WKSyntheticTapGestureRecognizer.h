@class NSNumber, UIWebTouchEventsGestureRecognizer, UIScrollView;

@interface WKSyntheticTapGestureRecognizer : UITapGestureRecognizer {
    id _gestureIdentifiedTarget;
    SEL _gestureIdentifiedAction;
    id _gestureFailedTarget;
    SEL _gestureFailedAction;
    id _resetTarget;
    SEL _resetAction;
    struct RetainPtr<NSNumber> { void *m_ptr; } _lastActiveTouchIdentifier;
    UIScrollView *_lastTouchedScrollView;
}

@property (weak, nonatomic) UIWebTouchEventsGestureRecognizer *supportingWebTouchEventsGestureRecognizer;
@property (readonly, nonatomic) NSNumber *lastActiveTouchIdentifier;
@property (readonly, weak, nonatomic) UIScrollView *lastTouchedScrollView;

- (void)setResetTarget:(id)a0 action:(SEL)a1;
- (void)reset;
- (id).cxx_construct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setState:(long long)a0;
- (void)setGestureFailedTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)setGestureIdentifiedTarget:(id)a0 action:(SEL)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
