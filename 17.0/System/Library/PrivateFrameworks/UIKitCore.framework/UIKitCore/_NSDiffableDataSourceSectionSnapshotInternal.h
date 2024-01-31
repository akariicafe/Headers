@interface _NSDiffableDataSourceSectionSnapshotInternal : _NSDiffableDataSourceSectionSnapshot

- (BOOL)containsItem:(id)a0;
- (id)items;
- (void)deleteItems:(id)a0;
- (void)appendItems:(id)a0;
- (void)appendItems:(id)a0 intoParent:(id)a1;
- (id)childrenOfParent:(id)a0;
- (id)childrenOfParent:(id)a0 recursive:(BOOL)a1;
- (void)collapseItems:(id)a0;
- (void)expandItems:(id)a0;
- (void)insertItems:(id)a0 afterItem:(id)a1;
- (void)insertItems:(id)a0 beforeItem:(id)a1;
- (BOOL)isExpanded:(id)a0;
- (id)parentOfChild:(id)a0;
- (id)visibleItems;

@end
