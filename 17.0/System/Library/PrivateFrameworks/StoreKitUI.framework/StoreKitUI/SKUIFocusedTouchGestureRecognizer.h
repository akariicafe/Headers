@class NSMutableSet, UIView;

@interface SKUIFocusedTouchGestureRecognizer : UIGestureRecognizer {
    NSMutableSet *_activeTouches;
    BOOL _didTouchOutside;
}

@property (readonly, nonatomic) UIView *focusedView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } touchAllowance;

- (void)reset;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFocusedView:(id)a0 touchAllowance:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
