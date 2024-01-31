@class NSString, PKAccountService, PKRewardsHubSummarySectionController, PKEnhancedMerchantsShelfSectionController, PKAccountEnhancedMerchantsFetcher, PKTransactionSourceCollection, PKDailyCashSelectionSectionController, PKAccount, PKAccountPromotionsSectionController, PKRewardsSummaryFetcher;

@interface PKRewardsHubViewController : PKDynamicCollectionViewController <PKRewardsHubSectionControllerDelegate, PKViewControllerPreflightable> {
    PKAccount *_account;
    PKAccountService *_accountService;
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKRewardsSummaryFetcher *_rewardsFetcher;
    PKAccountEnhancedMerchantsFetcher *_enhancedMerchantsFetcher;
    PKRewardsHubSummarySectionController *_summariesSectionController;
    PKEnhancedMerchantsShelfSectionController *_enhancedMerchantsShelfSectionController;
    PKAccountPromotionsSectionController *_promotionsSectionController;
    PKDailyCashSelectionSectionController *_dailyCashSelectionSectionController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)willMoveToParentViewController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)preflightWithCompletion:(id /* block */)a0;
- (id)_nonNilSections;
- (id)initWithAccount:(id)a0 transactionSourceCollection:(id)a1 accountService:(id)a2;
- (void)navigateToRewardsHubDestination:(long long)a0;
- (void)openLinkedApplication:(id)a0;
- (void)openURL:(id)a0 sensitive:(BOOL)a1 preferInApp:(BOOL)a2;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)presentEducationViewController;
- (void)presentEnhancedMerchant:(id)a0;
- (void)presentEnhancedMerchantsListWithCompletion:(id /* block */)a0;
- (void)reportEventIfNecessary:(id)a0;
- (id)rewardsHubCollectionView;
- (void)scrollToPromotionWithProgramIdentifier:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
