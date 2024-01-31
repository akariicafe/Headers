@class UIColor, UIImageView;

@interface FIUIActionButton : UIButton

@property (retain, nonatomic) UIColor *imageViewTintColor;
@property (retain, nonatomic) UIColor *backgroundImageColor;
@property (nonatomic) BOOL animatingTouchDown;
@property (retain, nonatomic) UIImageView *transformingImageView;
@property (copy, nonatomic) id /* block */ touchUpAnimationCompleteHandler;

+ (id)buttonWithTitle:(id)a0 color:(id)a1 icon:(id)a2;

- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backgroundRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_touchDown;
- (struct CGSize { double x0; double x1; })FIUIActionButtonSize;
- (void)_animateHighlighted:(BOOL)a0;
- (void)_setupInternalTouchActions;
- (void)_touchUp;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backgroundImageFrame;
- (void)turnIntoSolidDotWithDuration:(double)a0 completion:(id /* block */)a1;

@end
