@interface WLEasyToHitCustomButton : UIButton

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margins;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
