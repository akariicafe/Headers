@class NSString, PHFetchResult, NSDictionary, PHPhotosHighlight;

@interface PUCurationTripKeyAssetBrowserDebugViewController : PUPhotosAlbumViewController {
    NSString *_tripKeyAssetUUID;
    PHFetchResult *_childHighlights;
    NSDictionary *_iconicSceneScores;
}

@property (retain, nonatomic) PHPhotosHighlight *tripHighlight;

- (void)_update;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)iconicSceneScores:(id)a0;
- (BOOL)updateSpec;

@end
