@class UIBezierPath, UIView;

@interface SURoundedCornersButton : SUSubtitledButton {
    UIBezierPath *_bezierPath;
    UIView *_highlightedBackgroundView;
    UIBezierPath *_shadowPath;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_highlightedBackgroundView;

@end
