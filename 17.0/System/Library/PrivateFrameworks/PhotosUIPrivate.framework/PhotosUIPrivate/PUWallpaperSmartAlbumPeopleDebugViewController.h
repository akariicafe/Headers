@class PXPassiveContentPeoplePickerDataSourceBase, NSArray, NSString, PUWallpaperDebugViewSpec;

@interface PUWallpaperSmartAlbumPeopleDebugViewController : UICollectionViewController <PXPassiveContentPeoplePickerDataSourceChangeObserver>

@property (retain, nonatomic) PUWallpaperDebugViewSpec *spec;
@property (nonatomic) short contentMode;
@property (retain, nonatomic) PXPassiveContentPeoplePickerDataSourceBase *dataSource;
@property (retain, nonatomic) NSArray *dataSourceEntries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)viewDidLoad;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)passiveContentPeoplePickerDataSourceChanged:(id)a0;
- (void)_updateDisplayDataSource;
- (id)initWithSpec:(id)a0 contentMode:(short)a1;

@end
