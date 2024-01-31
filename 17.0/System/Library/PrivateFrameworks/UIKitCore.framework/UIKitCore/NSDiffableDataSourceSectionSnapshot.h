@class NSArray, NSOrderedSet, NSIndexSet, _NSDiffableDataSourceSectionSnapshotState, NSMutableArray;

@interface NSDiffableDataSourceSectionSnapshot : NSObject <NSCopying> {
    _NSDiffableDataSourceSectionSnapshotState *_state;
    NSMutableArray *_expandedItemsUpdates;
    NSMutableArray *_collapsedItemsUpdates;
}

@property (readonly, nonatomic) _NSDiffableDataSourceSectionSnapshotState *_state;
@property (readonly, nonatomic) NSArray *_rootItems;
@property (readonly, nonatomic) NSOrderedSet *_itemsOrderedSet;
@property (readonly, nonatomic) NSOrderedSet *_visibleItemsOrderedSet;
@property (readonly, nonatomic) NSIndexSet *_visibleIndexes;
@property (readonly, nonatomic) NSArray *expandedItemsUpdates;
@property (readonly, nonatomic) NSArray *collapsedItemsUpdates;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSArray *rootItems;
@property (readonly, nonatomic) NSArray *visibleItems;

- (id)init;
- (BOOL)containsItem:(id)a0;
- (id)visualDescription;
- (id)initWithSnapshot:(id)a0;
- (void)deleteAllItems;
- (id)initWithState:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_prepareForApplyToDataSource;
- (void)deleteItems:(id)a0;
- (void)appendItems:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_itemAfterItem:(id)a0;
- (id)_indexesOfChildrenForParent:(id)a0 recursive:(BOOL)a1;
- (id)_indexesOfItems:(id)a0;
- (id)_indexesOfItems:(id)a0 ignoringItemsNotFound:(BOOL)a1;
- (id)_itemBeforeItem:(id)a0;
- (BOOL)_itemHasChildren:(id)a0;
- (void)_replaceItem:(id)a0 withItem:(id)a1;
- (void)appendItems:(id)a0 intoParent:(id)a1;
- (void)appendItems:(id)a0 intoParentItem:(id)a1;
- (id)childSnapshotOfParent:(id)a0;
- (id)childSnapshotOfParent:(id)a0 includingParent:(BOOL)a1;
- (id)childrenOfParent:(id)a0;
- (id)childrenOfParent:(id)a0 recursive:(BOOL)a1;
- (void)collapseItems:(id)a0;
- (void)deleteItems:(id)a0 orphanDisposition:(long long)a1;
- (void)expandItems:(id)a0;
- (id)expandedItems;
- (long long)indexOfItem:(id)a0;
- (void)insertItems:(id)a0 afterItem:(id)a1;
- (void)insertItems:(id)a0 afterItem:(id)a1 insertionMode:(long long)a2;
- (void)insertItems:(id)a0 beforeItem:(id)a1;
- (id)insertSnapshot:(id)a0 afterItem:(id)a1;
- (void)insertSnapshot:(id)a0 beforeItem:(id)a1;
- (BOOL)isExpanded:(id)a0;
- (BOOL)isVisible:(id)a0;
- (long long)levelForItem:(id)a0;
- (long long)levelOfItem:(id)a0;
- (id)parentOfChild:(id)a0;
- (id)parentOfChildItem:(id)a0;
- (void)replaceChildrenOfParentItem:(id)a0 withSnapshot:(id)a1;
- (void)setChildrenWithSnapshot:(id)a0 forParent:(id)a1;
- (id)snapshotOfParentItem:(id)a0;
- (id)snapshotOfParentItem:(id)a0 includingParentItem:(BOOL)a1;
- (id)snapshotter;

@end
