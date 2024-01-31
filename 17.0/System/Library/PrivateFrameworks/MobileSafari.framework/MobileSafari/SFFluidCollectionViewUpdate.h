@class NSArray, NSSet, NSMutableSet, NSMutableDictionary, SFFluidCollectionViewLayout;
@protocol SFFluidCollectionLayoutContainer;

@interface SFFluidCollectionViewUpdate : NSObject {
    NSMutableDictionary *_cachedAfterToBeforeIndexPathMappings;
    NSMutableDictionary *_cachedBeforeToAfterIndexPathMappings;
}

@property (nonatomic) unsigned long long pendingBatchUpdateCount;
@property (retain, nonatomic) NSMutableSet *pendingUpdateItems;
@property (retain, nonatomic) id<SFFluidCollectionLayoutContainer> layoutContainerForPreviousLayout;
@property (copy, nonatomic) NSArray *numberOfItemsBeforeUpdate;
@property (retain, nonatomic) SFFluidCollectionViewLayout *previousTabSwitcherLayout;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousBounds;
@property (readonly, nonatomic) NSSet *insertedIndexPaths;
@property (readonly, nonatomic) NSSet *deletedIndexPaths;
@property (readonly, nonatomic) NSSet *reloadedIndexPaths;
@property (readonly, nonatomic) BOOL hasIndexPathChanges;
@property (readonly, nonatomic) unsigned long long numberOfSectionsBeforeUpdate;
@property (copy, nonatomic) NSSet *updates;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_adjustIndex:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (id)_indexPathAfterUpdateOfImplicitlyMovedItemAtIndexPath:(id)a0;
- (id)_indexPathBeforeUpdateOfImplicitlyMovedItemAtIndexPath:(id)a0;
- (id)indexPathAfterUpdateOfItemAtIndexPath:(id)a0;
- (id)indexPathBeforeUpdateOfItemAtIndexPath:(id)a0;
- (unsigned long long)numberOfItemsBeforeUpdateInSection:(unsigned long long)a0;

@end
