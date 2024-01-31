@class UIScrollView;

@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer {
    SEL _scrollViewAction;
    unsigned char _hasParentScrollView : 1;
}

@property (weak, nonatomic) UIScrollView *scrollView;

- (double)_hysteresis;
- (void)removeTarget:(id)a0 action:(SEL)a1;
- (BOOL)_analyticsIsGestureHandled;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_transformChangedWithEvent:(id)a0;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;

@end
