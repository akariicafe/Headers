@class NSArray, NSDictionary, VUIAppSpinnerView, VUIAccessView_iOS, NSMutableArray;

@interface _VUIAccessViewController : UIViewController {
    VUIAccessView_iOS *_accessView;
    VUIAppSpinnerView *_loadingView;
    NSArray *_channels;
    NSMutableArray *_bundleIDs;
    NSDictionary *_options;
    BOOL _hasCalledCompletion;
    NSArray *_appInfos;
    NSArray *_appChannels;
    NSMutableArray *_channelIds;
    BOOL _shouldDenyOnCancel;
}

@property (copy, nonatomic) id /* block */ completionHandler;

- (id)init;
- (void)_init;
- (void)viewDidLoad;
- (id)preferredFocusEnvironments;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)_handleMenuGesture:(id)a0;
- (void)_setupNavigationBar;
- (void)_allow:(id)a0;
- (void)_completeWithStatus:(unsigned long long)a0;
- (void)_disallow:(id)a0;
- (void)_fetchRemoteAppInfo;
- (void)_handleNackButton:(id)a0;
- (void)_handleSeeAllButton:(id)a0;
- (id)_imageForBundleID:(id)a0;
- (void)_presentGenericErrorWithCompletion:(id /* block */)a0;
- (void)_setupAccessViews;
- (void)_toggleLoadingScreen;
- (id)_watchListAppIcon;
- (id)cappedTraitCollection;
- (id)initWithBundleIDs:(id)a0 channels:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;

@end
