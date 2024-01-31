@interface _UIViewServiceDummyPopoverBackgroundView : UIPopoverBackgroundView {
    double arrowOffset;
    unsigned long long arrowDirection;
}

+ (double)arrowHeight;
+ (double)arrowBase;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentViewInsets;
+ (BOOL)wantsDefaultContentAppearance;

- (struct CGSize { double x0; double x1; })_shadowOffset;
- (double)_shadowRadius;
- (unsigned long long)arrowDirection;
- (void)setArrowOffset:(double)a0;
- (double)_shadowOpacity;
- (double)arrowOffset;
- (void)setArrowDirection:(unsigned long long)a0;

@end
