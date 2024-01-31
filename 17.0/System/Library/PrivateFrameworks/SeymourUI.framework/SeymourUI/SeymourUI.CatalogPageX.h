@interface SeymourUI.CatalogPageX : NSObject <UICollectionViewDataSourcePrefetching, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ impressionsTracker;
    void /* unknown type, empty encoding */ shelves;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ layoutProvider;
    void /* unknown type, empty encoding */ viewFactory;
    void /* unknown type, empty encoding */ dataSource;
}

- (void)collectionView:(id)a0 prefetchItemsAtIndexPaths:(id)a1;
- (void)_collectionView:(id)a0 orthogonalScrollViewDidScroll:(id)a1 section:(long long)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
