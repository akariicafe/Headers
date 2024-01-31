@interface MenstrualCyclesAppPlugin.CycleChartsCollectionViewDataSource : NSObject <UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ cellProvider;
    void /* unknown type, empty encoding */ supplementaryViewProvider;
    void /* unknown type, empty encoding */ cycles;
}

- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
