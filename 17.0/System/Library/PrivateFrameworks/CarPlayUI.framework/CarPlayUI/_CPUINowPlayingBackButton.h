@class CPUIFocusRingView;

@interface _CPUINowPlayingBackButton : UIButton

@property (retain, nonatomic) CPUIFocusRingView *focusRing;

- (void)willMoveToWindow:(id)a0;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;

@end
