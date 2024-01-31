@class NSMutableDictionary, PUCurationAssetBrowserViewController, PNScoreConfiguration;

@interface PUCurationPeopleBrowserViewController : PXPeopleDetailSettingsViewController

@property (retain, nonatomic) PNScoreConfiguration *scoreConfiguration;
@property (retain, nonatomic) PUCurationAssetBrowserViewController *assetBrowserViewController;
@property (retain, nonatomic) NSMutableDictionary *facesByPersonLocalIdentifier;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithScoreConfiguration:(id)a0;

@end
