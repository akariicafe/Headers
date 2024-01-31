@interface SUClipCornersImageModifier : SUImageModifier

@property (nonatomic) double cornerRadius;
@property (nonatomic) int corners;

- (BOOL)isEqual:(id)a0;
- (struct CGPath { } *)_copyClippingPathForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawAfterImageForContext:(struct CGContext { } *)a0 imageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 finalSize:(struct CGSize { double x0; double x1; })a2;
- (void)drawBeforeImageForContext:(struct CGContext { } *)a0 imageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 finalSize:(struct CGSize { double x0; double x1; })a2;

@end
