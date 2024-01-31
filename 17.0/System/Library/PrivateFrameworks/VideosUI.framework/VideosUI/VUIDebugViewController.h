@class VUIDebugViewDataSource, NSArray, UICollectionView, NSString, VUIDebugContainerView;

@interface VUIDebugViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) VUIDebugContainerView *containerView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL requiresRelayout;
@property (retain, nonatomic) VUIDebugViewDataSource *dataSource;
@property (retain, nonatomic) NSArray *additionalMetricsTitles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)init;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)collectionView:(id)a0 didUpdateFocusInContext:(id)a1 withAnimationCoordinator:(id)a2;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (id)preferredFocusEnvironments;
- (void)loadView;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_dismissViewController;

@end
