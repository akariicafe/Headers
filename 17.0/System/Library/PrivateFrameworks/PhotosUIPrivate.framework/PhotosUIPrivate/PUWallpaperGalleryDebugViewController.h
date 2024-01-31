@class NSDictionary, NSArray, PUWallpaperDebugViewSpec;

@interface PUWallpaperGalleryDebugViewController : UICollectionViewController

@property (retain, nonatomic) PUWallpaperDebugViewSpec *spec;
@property (retain, nonatomic) NSDictionary *keyAssetBySuggestionUUID;
@property (retain, nonatomic) NSArray *suggestions;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithSpec:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;

@end
