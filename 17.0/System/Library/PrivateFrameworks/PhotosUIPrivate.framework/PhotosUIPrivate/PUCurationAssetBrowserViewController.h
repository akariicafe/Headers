@class PHPhotoLibrary, NSMutableArray, PNScoreConfiguration;

@interface PUCurationAssetBrowserViewController : PUPhotosAlbumViewController

@property (retain, nonatomic) NSMutableArray *assetContainers;
@property (retain, nonatomic) PNScoreConfiguration *scoreConfiguration;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;

- (void)_update;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)assetContainersForAssets:(id)a0;
- (id)scoreByAssetForPlistPath:(id)a0;
- (void)setScoreConfiguration:(id)a0 forAssetUUIDs:(id)a1;
- (void)setScoreConfiguration:(id)a0 withAssets:(id)a1;
- (void)setScoreConfiguration:(id)a0 withFaces:(id)a1;

@end
