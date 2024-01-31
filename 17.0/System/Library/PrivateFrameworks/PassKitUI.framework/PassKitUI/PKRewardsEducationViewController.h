@class PKAccountService, NSString, PKAccountEnhancedMerchantsFetcher, NSArray, PKAccount;

@interface PKRewardsEducationViewController : PKSectionTableViewController <UITableViewDataSource, PKRewardsTierTableViewCellDelegate> {
    PKAccount *_account;
    PKAccountService *_accountService;
    PKAccountEnhancedMerchantsFetcher *_enhancedMerchantsFetcher;
    NSArray *_tiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)_close:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)didPressLinkInCell:(id)a0;
- (id)initWithAccount:(id)a0 accountService:(id)a1 enhancedMerchantsFetcher:(id)a2;

@end
