@interface UITextRangeAdjustmentGestureRecognizer : UIPanGestureRecognizer

@property (readonly, nonatomic) struct CGPoint { double x; double y; } startPoint;

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;

@end
