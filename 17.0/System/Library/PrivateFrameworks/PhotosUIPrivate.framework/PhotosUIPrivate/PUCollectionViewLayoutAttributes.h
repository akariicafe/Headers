@interface PUCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes

@property (nonatomic) struct CGPoint { double x; double y; } parallaxOffset;
@property (nonatomic) struct CGPoint { double x; double y; } edgeParallaxOffset;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
