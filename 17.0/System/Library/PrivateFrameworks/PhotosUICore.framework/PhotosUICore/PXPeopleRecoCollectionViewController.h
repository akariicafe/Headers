@class PXPeopleRecoDataSource, NSString, UICollectionViewSupplementaryRegistration;

@interface PXPeopleRecoCollectionViewController : UICollectionViewController <UICollectionViewDataSourcePrefetching, PXPeopleRecoCollectionViewDelegate, PXPeopleRecoDataSourceDelegate>

@property (readonly, nonatomic) PXPeopleRecoDataSource *dataSource;
@property (readonly, nonatomic) UICollectionViewSupplementaryRegistration *headerRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recoControllerForPerson:(id)a0;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 prefetchItemsAtIndexPaths:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_cancelTapped:(id)a0;
- (void)_doneTapped:(id)a0;
- (id)_initWithPerson:(id)a0;
- (void)_reviewMoreTapped:(id)a0;
- (void)collectionView:(id)a0 frameDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)recoDataSourceDataChanged:(id)a0;

@end
