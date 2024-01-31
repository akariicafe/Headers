@class NSSet, NSArray, PKPaymentTransactionIconGenerator, NSMutableSet, NSString, UITableView;
@protocol WFWalletMerchantSelectionTableViewControllerDelegate;

@interface WFWalletMerchantSelectionTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate>

@property (readonly, nonatomic) NSSet *cardIdentifiers;
@property (readonly, nonatomic) NSArray *merchants;
@property (readonly, nonatomic) PKPaymentTransactionIconGenerator *generator;
@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableSet *selectedMerchantIdentifiers;
@property (readonly, nonatomic) NSMutableSet *previouslySelectedMerchants;
@property (weak, nonatomic) id<WFWalletMerchantSelectionTableViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)done:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)clear:(id)a0;
- (void)fetchTransactions;
- (id)filteredMerchants;
- (id)initWithTransactionIdentifiers:(id)a0 selectedMerchants:(id)a1;

@end
