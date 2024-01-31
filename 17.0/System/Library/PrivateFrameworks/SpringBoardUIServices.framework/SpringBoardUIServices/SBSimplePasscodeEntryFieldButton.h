@class UIColor, UIView;

@interface SBSimplePasscodeEntryFieldButton : UIView {
    BOOL _useLightStyle;
    BOOL _revealed;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _paddingOutsideRing;
    UIColor *_color;
    UIView *_ringView;
}

@property (nonatomic, getter=isAnimatingUnreveal) BOOL animatingUnreveal;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setRevealed:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 paddingOutsideRing:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 useLightStyle:(BOOL)a2;
- (void)setRevealed:(BOOL)a0 animated:(BOOL)a1 delay:(double)a2;

@end
