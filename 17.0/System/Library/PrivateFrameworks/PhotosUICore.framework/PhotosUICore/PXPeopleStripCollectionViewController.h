@class PXPeopleDataSource, PXPeopleStripCollectionViewCell, NSString;
@protocol PXPeopleStripCollectionViewControllerDelegate;

@interface PXPeopleStripCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSourcePrefetching>

@property (weak, nonatomic) id<PXPeopleStripCollectionViewControllerDelegate> delegate;
@property (weak, nonatomic) PXPeopleDataSource *dataSource;
@property (retain, nonatomic) PXPeopleStripCollectionViewCell *preloadedCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_formattedPeopleForMember:(id)a0;

- (void)collectionView:(id)a0 prefetchItemsAtIndexPaths:(id)a1;
- (struct CGPoint { double x0; double x1; })collectionView:(id)a0 targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)viewDidLoad;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)initWithDataSource:(id)a0 delegate:(id)a1;
- (void)contentWidthChanged;

@end
