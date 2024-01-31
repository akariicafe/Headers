@class NSString, GKGameRecord, UIViewController;

@interface GKGameLayerCollectionDataSource : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) GKGameRecord *gameRecord;
@property (readonly, nonatomic) NSString *title;
@property (weak, nonatomic) UIViewController *presentationViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)itemCount;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (double)cellSpacing;
- (void)prepareCell:(id)a0 forItemAtIndexPath:(id)a1;
- (void)handleSelectionInCollectionView:(id)a0 forItemAtIndexPath:(id)a1;
- (id)initWithGameRecord:(id)a0;
- (void)setupCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })standardCellSizeForCollectionView:(id)a0;

@end
