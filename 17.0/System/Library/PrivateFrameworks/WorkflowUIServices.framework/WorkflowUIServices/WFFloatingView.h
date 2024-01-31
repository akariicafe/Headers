@class WFFloatingLayer, WFGradient;

@interface WFFloatingView : UIView

@property (readonly, nonatomic) WFFloatingLayer *layer;
@property (copy, nonatomic) WFGradient *gradient;
@property (nonatomic, getter=isPressed) BOOL pressed;

+ (Class)layerClass;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithConfiguration:(id)a0;
- (void)setPressed:(BOOL)a0 animated:(BOOL)a1;
- (void)applyConfiguration:(id)a0;
- (id)initWithConfiguration:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
