@class NSString, NSArray, NSMutableArray;

@interface PUCurationKeyAssetComparisonDebugViewController : PUPhotosAlbumViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    NSArray *_highlights;
    NSMutableArray *_currentKeyAssets;
    NSMutableArray *_legacyKeyAssets;
    NSMutableArray *_modernKeyAssets;
    NSMutableArray *_keyAssetReasons;
    NSMutableArray *_indexMap;
    NSArray *_visibleAssets;
    BOOL _showsDifferentOnly;
    BOOL _showsMeaningsOnly;
    BOOL _canLiveUpdate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)shouldShowSectionHeaders;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)updateData;
- (void)didTapHeaderView:(id)a0;
- (void)_fetchHighlights;
- (void)toggleShowsDifferentOnly:(id)a0;
- (void)toggleShowsMeaningsOnly:(id)a0;

@end
