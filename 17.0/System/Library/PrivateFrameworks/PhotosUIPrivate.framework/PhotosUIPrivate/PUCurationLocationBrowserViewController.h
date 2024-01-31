@class NSArray, PHPhotoLibrary, PNScoreConfiguration, PUCurationAssetBrowserViewController;

@interface PUCurationLocationBrowserViewController : UITableViewController

@property (retain, nonatomic) NSArray *availableLocations;
@property (retain, nonatomic) PNScoreConfiguration *scoreConfiguration;
@property (retain, nonatomic) PUCurationAssetBrowserViewController *assetBrowserViewController;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)assetUUIDsByGeoHash;
- (id)cityNameForGeoHashWithAsseUUIDsByGeoHash:(id)a0;
- (id)geoHashContainers;
- (id)initWithScoreConfiguration:(id)a0;
- (BOOL)saveToPlistForScoreDictionary:(id)a0 dataType:(long long)a1;

@end
