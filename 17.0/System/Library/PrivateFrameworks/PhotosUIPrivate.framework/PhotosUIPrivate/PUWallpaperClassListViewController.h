@class NSArray, NSMutableDictionary, PUProgressIndicatorView, NSString, PUWallpaperDebugViewSpec;

@interface PUWallpaperClassListViewController : UICollectionViewController <UINavigationControllerDelegate, PUPassiveContentDataSourceDelegate>

@property (retain, nonatomic) PUWallpaperDebugViewSpec *spec;
@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) NSMutableDictionary *keyAssetBySuggestionUUID;
@property (retain, nonatomic) PUProgressIndicatorView *progressIndicator;
@property (readonly, nonatomic) short contentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)contextMenuConfigurationForItemAtIndexPath:(id)a0;
- (id)createDataSources;
- (void)dataSourceChanged:(id)a0;
- (void)hideProgressIndicator;
- (id)initWithSpec:(id)a0 contentMode:(short)a1;
- (void)showProgressIndicator:(id)a0;

@end
