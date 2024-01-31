@class NSString, PHFetchResult, UITableView;

@interface PXSeenAssetSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) PHFetchResult *fetchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)_fetchSeenAssetsAndReload:(BOOL)a0;
- (void)_markVariationsAsUnseenForAssetAtIndexPath:(id)a0;
- (void)_presentConfirmationForAssetAtIndexPath:(id)a0;
- (long long)_recommendedVariationTypeForAsset:(id)a0;
- (id)_suggestedSeenFetchOptions;

@end
