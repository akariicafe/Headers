@interface _TVCollectionViewFlowLayout : UICollectionViewFlowLayout

@property (nonatomic, getter=isHeterogeneous) BOOL heterogeneous;

- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (long long)developmentLayoutDirection;
- (BOOL)flipsHorizontallyInOppositeLayoutDirection;
- (double)contentHeightThatFitsItemCount:(long long)a0 expectedWidth:(double)a1;

@end
