@class NSMutableDictionary, GKBasicCollectionViewDataSource;

@interface GKSplittingDataSource : GKCollectionViewDataSource

@property (retain, nonatomic) NSMutableDictionary *sectionToSectionInfo;
@property (retain, nonatomic) GKBasicCollectionViewDataSource *underlyingDataSource;
@property (readonly, nonatomic) long long sectionCount;

- (void)configureDataSource;
- (id)init;
- (void)removeSection:(long long)a0;
- (id)itemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)titleForSection:(long long)a0;
- (void)removeAllSections;
- (id)_gkDescriptionWithChildren:(long long)a0;
- (void)addSectionWithTitle:(id)a0 sortDescriptors:(id)a1;
- (void)collectionViewDidBecomeInactive:(id)a0;
- (id)filteredItemsForRawItems:(id)a0;
- (id)indexPathsForItem:(id)a0;
- (id)itemsForSection:(long long)a0;
- (void)refreshAdditionalInfoForDataType:(unsigned int)a0 updateNotifier:(id)a1;
- (void)refreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1 updateNotifier:(id)a2;
- (void)removeItemAtIndexPath:(id)a0 completionHandler:(id /* block */)a1;
- (id)sectionInfoForSection:(long long)a0;
- (void)setFilterPredicate:(id)a0 forSection:(long long)a1;
- (void)setItems:(id)a0 forSection:(long long)a1;
- (void)setSortDescriptors:(id)a0 forSection:(long long)a1;
- (void)willUpdateSectionsWithItems:(id)a0;

@end
