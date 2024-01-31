@interface CAMAnimationHelper : NSObject

+ (void)configurePowerSensitiveAnimation:(id)a0;
+ (id)_animationWithKeyPath:(id)a0;
+ (id)highlightTransformAnimation;
+ (void)setLayer:(id)a0 highlighted:(BOOL)a1 inverted:(BOOL)a2 animated:(BOOL)a3 layoutStyle:(long long)a4;
+ (double)highlightScaleForLayoutStyle:(long long)a0;
+ (void)animateLayer:(id)a0 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fromCurrentState:(BOOL)a2;
+ (void)animateLayer:(id)a0 forButtonHighlighted:(BOOL)a1 layoutStyle:(long long)a2;

@end
