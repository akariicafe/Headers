@class NSString, PHFetchResult;

@interface PUImportSettingsHistoryDebugViewController : UICollectionViewController <UICollectionViewDelegate, UICollectionViewDataSource, PHPhotoLibraryChangeObserver>

@property (retain, nonatomic) PHFetchResult *importSessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_updateFlowLayout:(id)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 traitCollection:(id)a2;

- (id)init;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)_reloadData;
- (void)photoLibraryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateTitle;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)_assetForIndexPath:(id)a0;
- (id)_assetsForSection:(long long)a0;
- (void)_scrollToBottom:(id)a0;

@end
