@class UIView, HKClinicalProviderServiceStore, HRProfile, NSArray, NSString, HKClinicalProvider, HRWDSpinnerView, HKClinicalProviderSearchResult, NSLayoutConstraint, NSCache;

@interface WDClinicalProviderDetailsViewController : HKTableViewController <HRWDUserActivityResponder> {
    BOOL _noGatewaysFound;
}

@property (retain, nonatomic) HRProfile *profile;
@property (readonly, nonatomic) HKClinicalProviderServiceStore *providerServiceStore;
@property (retain, nonatomic) HKClinicalProviderSearchResult *searchResult;
@property (nonatomic) long long fetchesInFlight;
@property (retain, nonatomic) HKClinicalProvider *provider;
@property (retain, nonatomic) NSCache *providerCache;
@property (copy, nonatomic) NSArray *connectedGateways;
@property (copy, nonatomic) NSArray *unconnectedGateways;
@property (copy, nonatomic) NSArray *unavailableGateways;
@property (copy, nonatomic) NSArray *internalOnlyVisibleGateways;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) HRWDSpinnerView *spinnerView;
@property (retain, nonatomic) UIView *noContentParentView;
@property (weak, nonatomic) NSLayoutConstraint *noContentTopConstraint;
@property (weak, nonatomic) NSLayoutConstraint *noContentBottomConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewDidChangeAdjustedContentInset:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)_presentError:(id)a0;
- (void)_updateNoContentViewConstraints;
- (void)_computeSections;
- (id)_createNoContentParentView;
- (id)_createSpinnerView;
- (void)_fetchDetailsForSearchResult:(id)a0;
- (id)_filterGatewaysForDisplay:(id)a0;
- (id)_gatewayAtIndexPath:(id)a0;
- (void)_handleTapForActivateGateway:(id)a0;
- (void)_hideSpinnerView;
- (id)_initWithProfile:(id)a0;
- (id)_orderGatewaysForDisplay:(id)a0;
- (void)_presentUnavailableAlertForGatewayTitle:(id)a0;
- (void)_showNoContentView:(id)a0;
- (void)_showSpinnerView;
- (void)applyChangeActivity:(id)a0;
- (id)applyTransitionActivity:(id)a0;
- (void)clearLoginBusyIndicator;
- (id)initWithProfile:(id)a0 provider:(id)a1;
- (id)initWithProfile:(id)a0 searchResult:(id)a1;
- (id)latestSupportedVersionOfGateway:(id)a0 fromGateways:(id)a1;

@end
