@interface _UIPopoverSlidingChromeView : UIPopoverBackgroundView

+ (double)arrowHeight;
+ (double)cornerRadius;
+ (double)arrowBase;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentViewInsets;

- (struct CGSize { double x0; double x1; })_shadowOffset;
- (double)_shadowRadius;
- (unsigned long long)arrowDirection;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_shadowInsets;
- (void)setArrowOffset:(double)a0;
- (double)_shadowOpacity;
- (double)arrowOffset;
- (void)setArrowDirection:(unsigned long long)a0;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentViewInsets;
- (id)_shadowPathForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 arrowDirection:(unsigned long long)a1;

@end
