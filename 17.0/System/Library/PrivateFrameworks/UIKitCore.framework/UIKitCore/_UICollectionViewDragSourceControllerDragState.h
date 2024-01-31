@class NSArray, NSPointerArray, NSMutableOrderedSet, NSIndexPath;

@interface _UICollectionViewDragSourceControllerDragState : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *dataSourceIndexPathsOfDraggingItems;
@property (retain, nonatomic) NSPointerArray *dragItemsWithRebasableIndexPaths;
@property (readonly, nonatomic) NSIndexPath *dragFromDataSourceIndexPath;
@property (readonly, nonatomic) NSArray *draggingDataSourceIndexPaths;
@property (nonatomic) BOOL dragItemsCreatedForReordering;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addDraggingDataSourceIndexPath:(id)a0;
- (id)dataSourceIndexPathForDragItem:(id)a0 forCollectionView:(id)a1;
- (BOOL)isDraggingFromDataSourceIndexPath:(id)a0;
- (void)rebaseDataSourceIndexPathsWithUpdateMap:(id)a0;
- (void)setDataSourceIndexPath:(id)a0 forDragItem:(id)a1 collectionView:(id)a2;

@end
