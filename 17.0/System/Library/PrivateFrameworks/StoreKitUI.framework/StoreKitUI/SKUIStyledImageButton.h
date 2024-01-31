@class SKUIImageView;

@interface SKUIStyledImageButton : UIControl {
    BOOL _didInitialHighlightForTouch;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } bigHitInsets;
@property (readonly, nonatomic) SKUIImageView *imageView;
@property (readonly, nonatomic) SKUIImageView *additionalImageView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitRectInsets;
@property (nonatomic) BOOL useBigHitTarget;

- (void)setBackgroundColor:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
