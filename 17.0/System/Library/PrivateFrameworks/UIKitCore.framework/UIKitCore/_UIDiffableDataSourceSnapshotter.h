@interface _UIDiffableDataSourceSnapshotter : _UIDiffableDataSource

- (void)applySnapshot:(id)a0;
- (void)applyDifferencesFromSnapshot:(id)a0 completion:(id /* block */)a1;
- (void)reloadFromSnapshot:(id)a0 completion:(id /* block */)a1;
- (id)snapshot;
- (id)emptySnapshot;
- (void)reloadFromSnapshot:(id)a0;
- (void)applyDifferencesFromSnapshot:(id)a0;

@end
