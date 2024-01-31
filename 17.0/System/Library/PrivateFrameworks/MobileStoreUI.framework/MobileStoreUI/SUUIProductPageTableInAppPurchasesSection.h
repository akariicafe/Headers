@class SUUIColorScheme, SUUIClientContext, NSArray, NSNumberFormatter, SUUIProductPageTableExpandableHeaderView;

@interface SUUIProductPageTableInAppPurchasesSection : SUUIProductPageTableSection {
    SUUIClientContext *_clientContext;
    SUUIProductPageTableExpandableHeaderView *_headerView;
    NSArray *_inAppPurchases;
    NSNumberFormatter *_numberFormatter;
}

@property (retain, nonatomic) SUUIColorScheme *colorScheme;

- (void)setExpanded:(BOOL)a0;
- (void).cxx_destruct;
- (void)_reloadHeaderView;
- (id)headerViewForTableView:(id)a0;
- (double)heightForCellInTableView:(id)a0 indexPath:(id)a1;
- (id)initWithInAppPurchases:(id)a0 clientContext:(id)a1;
- (long long)numberOfRowsInSection;
- (id)tableViewCellForTableView:(id)a0 indexPath:(id)a1;

@end
