@interface SFFluidTabOverviewLayoutAttributes : SFFluidCollectionViewLayoutAttributes

@property (nonatomic) double borrowedContentAlpha;
@property (nonatomic) double controlsAlpha;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double blurRadius;
@property (nonatomic) double alphaMultiplierForScroll;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
