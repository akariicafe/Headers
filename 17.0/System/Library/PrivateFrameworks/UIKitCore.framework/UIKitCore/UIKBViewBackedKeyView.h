@class UIKBBackdropView, UIView;
@protocol UIKBKeyViewContentView;

@interface UIKBViewBackedKeyView : UIKBKeyView

@property (retain, nonatomic) UIKBBackdropView *backdropView;
@property (retain, nonatomic) UIView<UIKBKeyViewContentView> *contentView;
@property (weak, nonatomic) UIView *touchForwardingView;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setRenderConfig:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (BOOL)retestSelectedVariantIndexForKey:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 phase:(long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 keyplane:(id)a1 key:(id)a2;
- (id)renderFlagsForTraits:(id)a0;
- (void)setDrawFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateForKeyplane:(id)a0 key:(id)a1;

@end
