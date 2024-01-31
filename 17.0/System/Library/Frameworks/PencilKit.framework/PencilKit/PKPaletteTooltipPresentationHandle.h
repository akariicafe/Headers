@class UIView;

@interface PKPaletteTooltipPresentationHandle : NSObject {
    UIView *_hostingView;
    UIView *_floatingLabel;
}

- (void).cxx_destruct;
- (id)initWithHostingView:(id)a0;
- (void)hideFloatingLabel;
- (void)showWithText:(id)a0 fromView:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 atEdge:(unsigned long long)a3 offset:(double)a4 traitCollection:(id)a5;

@end
