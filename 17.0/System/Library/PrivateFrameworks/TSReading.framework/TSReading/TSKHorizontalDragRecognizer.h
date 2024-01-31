@class UIScrollView;

@interface TSKHorizontalDragRecognizer : UIGestureRecognizer {
    struct CGPoint { double x; double y; } mStartPoint;
}

@property (nonatomic) UIScrollView *containingScrollView;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;

@end
