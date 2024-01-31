@class NSArray, NSMutableDictionary, NSString;

@interface WFWalletTransactionTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDelegate, UITableViewDataSource, WFWalletMerchantSelectionTableViewControllerDelegate>

@property (readonly, nonatomic) NSArray *passes;
@property (readonly, nonatomic) NSArray *remotePasses;
@property (readonly, nonatomic) NSMutableDictionary *localPassesToRemotePassesUniqueIdentifierMapping;
@property (readonly, nonatomic) unsigned long long detailSelection;
@property (readonly, nonatomic) NSMutableDictionary *passIcons;
@property (readonly, nonatomic) NSMutableDictionary *merchantIcons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)passIsAppleAccess:(id)a0;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (id)infoForSection:(long long)a0;
- (void)_fetchPassesWithCompletion:(id /* block */)a0;
- (id)allPassIdentifiers;
- (id)customSections;
- (void)filterDuplicatePassesFromLocalPasses:(id)a0 watchPasses:(id)a1;
- (id)initWithTrigger:(id)a0 mode:(unsigned long long)a1;
- (id)merchantIconForMerchantType:(unsigned long long)a0;
- (id)passIconForPaymentPass:(id)a0 preferredIconSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)paymentPassesSelected;
- (void)presentNavControllerWithRootViewController:(id)a0;
- (id)tableViewCellClasses;
- (id)tableViewHeaderString;
- (void)walletMerchantViewController:(id)a0 didFinishWithMerchants:(id)a1;

@end
