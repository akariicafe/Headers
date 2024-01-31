@interface NewsSubscription.FlexiblePaywallCollectionViewDataSource : NSObject <UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ layoutProvider;
    void /* unknown type, empty encoding */ feedItemRenderer;
    void /* unknown type, empty encoding */ feedItemSupplementaryRenderer;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ subscribeButtonDebouncer;
}

- (id)init;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;

@end
