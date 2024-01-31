@interface UICollectionViewTableLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext

@property (nonatomic) BOOL invalidateTableLayoutDelegateMetrics;
@property (nonatomic) BOOL skipSectionInvalidation;

@end
