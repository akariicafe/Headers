@interface UICollectionViewDiffableDataSourceSectionSnapshotHandlers : NSObject <NSCopying>

@property (copy, nonatomic) id /* block */ shouldExpandItemHandler;
@property (copy, nonatomic) id /* block */ willExpandItemHandler;
@property (copy, nonatomic) id /* block */ shouldCollapseItemHandler;
@property (copy, nonatomic) id /* block */ willCollapseItemHandler;
@property (copy, nonatomic) id /* block */ snapshotForExpandingParentItemHandler;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithShouldExpandItemHandler:(id /* block */)a0 willExpandItemHandler:(id /* block */)a1 shouldCollapseItemHandler:(id /* block */)a2 willCollapseItemHandler:(id /* block */)a3 snapshotForExpandingParentItemHandler:(id /* block */)a4;

@end
