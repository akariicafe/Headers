@class PXPeopleCollectionViewCell, UIVisualEffect, NSIndexPath;
@protocol PXPeopleDragAndDropCollectionViewDelegate;

@interface PXPeopleDragAndDropCollectionView : UICollectionView

@property (nonatomic) BOOL validDrop;
@property (retain, nonatomic) UIVisualEffect *blurEffect;
@property (weak, nonatomic) id<PXPeopleDragAndDropCollectionViewDelegate> dragDropDelegate;
@property (nonatomic) BOOL interactiveMode;
@property (retain, nonatomic) PXPeopleCollectionViewCell *dragSourceCell;
@property (retain, nonatomic) NSIndexPath *dragSourceIndexPath;

- (void)reloadData;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)cancelInteractiveMovement;
- (void)endInteractiveMovement;
- (long long)sectionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_footerAttributes;
- (double)_highestVisibleCellZOrder;
- (BOOL)beginInteractiveMovementAtLocation:(struct CGPoint { double x0; double x1; })a0 forItemAtIndexPath:(id)a1;
- (void)resetTransformForSourceIndex:(id)a0;
- (id)sortedIndexPathsForSelectedItems;

@end
