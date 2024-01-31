@interface PXSmallCollectionLayoutMetrics : PXLayoutMetrics

@property (nonatomic) unsigned long long style;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsets;
@property (nonatomic) unsigned long long edgesForExtendedLayout;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) double headerAspectRatio;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
