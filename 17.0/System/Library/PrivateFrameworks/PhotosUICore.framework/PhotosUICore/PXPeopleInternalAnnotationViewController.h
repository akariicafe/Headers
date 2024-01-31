@class PXPeopleInternalAnnotationDataSource, NSString, PHPerson;

@interface PXPeopleInternalAnnotationViewController : UICollectionViewController <PXPeopleInternalAnnotationDataSourceDelegate, PXPeopleSwipeSelectionManagerDelegate>

@property (readonly, nonatomic) id /* block */ dismissCompletion;
@property (readonly, nonatomic) id /* block */ cancelCompletion;
@property (readonly, nonatomic) PHPerson *person;
@property (readonly, nonatomic) PXPeopleInternalAnnotationDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)peopleAnnotationViewControllerForPerson:(id)a0 withDismissCompletion:(id /* block */)a1 withCancelCompletion:(id /* block */)a2;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)swipeSelectionManager:(id)a0 itemIndexPathAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)swipeSelectionManager:(id)a0 indexPathSetFromIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)_nextTapped:(id)a0;
- (void)_cancelTapped:(id)a0;
- (void)_commitChangesAndShowSpinner;
- (id)_initWithPerson:(id)a0 withDismissCompletion:(id /* block */)a1 withCancelCompletion:(id /* block */)a2;
- (void)annotationDataSourceDataChanged:(id)a0;
- (id)getCellRegistrationForCollectionView:(id)a0;
- (id)initialSelectedIndexPathsForSwipeSelectionManager:(id)a0;
- (void)swipeSelectionManager:(id)a0 didSelectIndexPaths:(id)a1;

@end
