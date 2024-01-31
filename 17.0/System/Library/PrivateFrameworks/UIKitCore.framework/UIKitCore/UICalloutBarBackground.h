@class _UICalloutBarVisualStyle, UIVisualEffectView, UIImageView;

@interface UICalloutBarBackground : UIView {
    UIVisualEffectView *_blurView;
    UIImageView *_selectionTintView;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } highlightRect;
@property (retain, nonatomic) _UICalloutBarVisualStyle *visualStyle;

- (void).cxx_destruct;
- (double)cornerRadius;
- (void)layoutSubviews;
- (id)blurViewBackgroundEffects;
- (id)containerBackgroundColor;
- (id)initWithVisualStyle:(id)a0;
- (BOOL)prefersCustomSelection;
- (void)setHighlighted:(BOOL)a0 forFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
