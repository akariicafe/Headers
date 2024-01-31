@interface NATouchInsetsButton : UIButton

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } touchInsets;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
