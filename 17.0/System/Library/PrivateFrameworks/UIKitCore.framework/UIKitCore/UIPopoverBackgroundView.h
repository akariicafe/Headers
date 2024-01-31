@interface UIPopoverBackgroundView : UIView <UIPopoverBackgroundViewMethods>

@property (class, readonly, nonatomic) BOOL wantsDefaultContentAppearance;

@property (nonatomic, setter=_setChromeHidden:) BOOL _chromeHidden;
@property (nonatomic) double arrowOffset;
@property (nonatomic) unsigned long long arrowDirection;

+ (double)arrowHeight;
+ (double)cornerRadius;
+ (double)arrowBase;
+ (double)_contentViewCornerRadiusForArrowDirection:(unsigned long long)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentViewInsets;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentViewFrame;
- (struct CGSize { double x0; double x1; })_shadowOffset;
- (void)_updateShadow;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (long long)backgroundStyle;
- (double)_shadowRadius;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_shadowInsets;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (double)_shadowOpacity;
- (id)_shadowPath;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundContentViewFrame;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentViewInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentViewInsetsForArrowDirection:(unsigned long long)a0;
- (id)_shadowPathForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 arrowDirection:(unsigned long long)a1;
- (void)_updateChrome;

@end
