@class NSLayoutConstraint, NSLayoutDimension;

@interface SFSizeObservingView : UIView {
    struct CGSize { double width; double height; } _lastLayoutSize;
    NSLayoutConstraint *_heightConstraint;
}

@property (retain, nonatomic) NSLayoutDimension *observedHeightDimension;
@property (copy, nonatomic) id /* block */ sizeChangeCallback;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;

@end
