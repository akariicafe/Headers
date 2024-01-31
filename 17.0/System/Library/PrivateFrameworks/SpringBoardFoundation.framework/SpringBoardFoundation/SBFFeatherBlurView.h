@class MTMaterialView;

@interface SBFFeatherBlurView : UIView

@property (readonly, nonatomic) MTMaterialView *backgroundBlurView;
@property (nonatomic) double intrinsicHeight;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })gradientMaskLayerInsetsForFeatherBlurRecipe:(unsigned long long)a0;
+ (id)configureGradientMaskForFeatherBlurRecipe:(unsigned long long)a0 onContentView:(id)a1;
+ (BOOL)_requiresLowQualityFeatherBlur:(unsigned long long)a0;
+ (id)matchMoveAnimationForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 relativeToView:(id)a1;

- (id)initWithRecipe:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
