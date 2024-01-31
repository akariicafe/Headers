@class _UIBarCustomizationChiclet, UIView;

@interface _UIBarCustomizationChicletAnchorView : UIView

@property (retain, nonatomic) UIView *positionAdaptorView;
@property (nonatomic) BOOL debugUIEnabled;
@property (nonatomic) long long state;
@property (nonatomic) double contentPadding;
@property (nonatomic) BOOL jiggling;
@property (retain, nonatomic) _UIBarCustomizationChiclet *chiclet;

+ (id)_jitterXTranslationAnimationWithStrength:(double)a0;
+ (id)_jitterXTranslationAnimationWithAmount:(double)a0;
+ (id)_jitterRotationAnimationWithStrength:(double)a0;
+ (id)_jitterYTranslationAnimationWithStrength:(double)a0;
+ (id)_jitterYTranslationAnimationWithAmount:(double)a0;
+ (id)_jitterRotationAnimationWithAmount:(double)a0;

- (id)init;
- (BOOL)isUserInteractionEnabled;
- (id)description;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
