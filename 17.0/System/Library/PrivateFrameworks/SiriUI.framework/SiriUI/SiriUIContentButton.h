@class UIColor;

@interface SiriUIContentButton : UIButton {
    BOOL _isRenderingImageTemplate;
    UIColor *_defaultColorForTemplate;
    UIColor *_highlightColorForTemplate;
    UIColor *_overrideTextColor;
}

@property (nonatomic) BOOL usePlatterStyle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestEdgeInsets;

+ (id)button;
+ (id)buttonWithImageTemplate:(id)a0 style:(long long)a1;
+ (id)eyesFreeButtonWithImageTemplate:(id)a0 style:(long long)a1;
+ (id)buttonWithRole:(long long)a0;
+ (id)buttonWithImageMask:(id)a0;
+ (id)buttonWithImageMask:(id)a0 style:(long long)a1;
+ (id)buttonWithImageTemplate:(id)a0;
+ (id)buttonWithLightWeightFont;
+ (id)buttonWithMediumWeightFont;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setRole:(long long)a0;
- (void)_updateTintColor;
- (void).cxx_destruct;
- (void)setOverrideTextColor:(id)a0;
- (void)setDefaultColorForTemplate:(id)a0;
- (void)setHighlightColorForTemplate:(id)a0;
- (void)_setIsRenderingImageTemplate:(BOOL)a0;
- (void)_updateStyling;
- (void)configureRoleForConfirmationOptions:(id)a0;

@end
