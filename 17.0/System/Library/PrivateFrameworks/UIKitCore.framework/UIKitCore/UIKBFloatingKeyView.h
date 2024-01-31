@class _UIFloatingContentView;

@interface UIKBFloatingKeyView : UIKBContainerKeyView {
    _UIFloatingContentView *_floatingContentView;
}

@property (readonly, nonatomic) _UIFloatingContentView *floatingContentView;

- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 keyplane:(id)a1 key:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 keyplane:(id)a1 key:(id)a2 renderTraits:(id)a3;

@end
