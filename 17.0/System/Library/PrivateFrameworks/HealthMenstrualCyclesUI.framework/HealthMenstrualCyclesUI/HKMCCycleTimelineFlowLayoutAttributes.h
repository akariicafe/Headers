@interface HKMCCycleTimelineFlowLayoutAttributes : UICollectionViewLayoutAttributes

@property (nonatomic) double shrinkFactor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pillFrame;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
