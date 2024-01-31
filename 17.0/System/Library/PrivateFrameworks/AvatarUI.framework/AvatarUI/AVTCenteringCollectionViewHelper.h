@interface AVTCenteringCollectionViewHelper : NSObject

+ (struct CGPoint { double x0; double x1; })contentOffsetForCenteringPoint:(struct CGPoint { double x0; double x1; })a0 collectionView:(id)a1;
+ (id)indexPathForItemBeingScrolledTowardFromOffset:(struct CGPoint { double x0; double x1; })a0 currentOffset:(struct CGPoint { double x0; double x1; })a1 nearestItemToCenter:(id)a2 itemCount:(unsigned long long)a3 itemOffsetProvider:(id /* block */)a4 ratio:(double *)a5;
+ (id)indexPathForNearestItemToCenterWithOffset:(struct CGPoint { double x0; double x1; })a0 collectionView:(id)a1;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insetsForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withFirstCellSize:(struct CGSize { double x0; double x1; })a1 lastCellSize:(struct CGSize { double x0; double x1; })a2;

@end
