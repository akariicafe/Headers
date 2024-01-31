@class PKAccountService, NSString, PKAccountEnhancedMerchantsFetcher, PKEnhancedMerchantsListSectionController, PKAccount;

@interface PKEnhancedMerchantsViewController : PKDynamicCollectionViewController <PKRewardsHubSectionControllerDelegate, PKViewControllerPreflightable> {
    PKAccount *_account;
    PKAccountService *_accountService;
    PKAccountEnhancedMerchantsFetcher *_enhancedMerchantsFetcher;
    PKEnhancedMerchantsListSectionController *_enhancedMerchantsListSectionController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)preflightWithCompletion:(id /* block */)a0;
- (id)_nonNilSections;
- (id)initWithAccount:(id)a0 accountService:(id)a1 enhancedMerchantsFetcher:(id)a2;
- (void)navigateToRewardsHubDestination:(long long)a0;
- (void)openLinkedApplication:(id)a0;
- (void)openURL:(id)a0 sensitive:(BOOL)a1 preferInApp:(BOOL)a2;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)presentDisplayableError:(id)a0;
- (void)reportEventIfNecessary:(id)a0;
- (id)rewardsHubCollectionView;
- (void)scrollToMerchantWithPrivateIdentifier:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
