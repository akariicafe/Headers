@class NSDictionary;

@interface STMostUsedGroupSpecifierProvider : STShowMoreUsageGroupSpecifierProvider

@property (copy, nonatomic) NSDictionary *allowancesByActiveBudgetedIdentifier;
@property (nonatomic) unsigned long long selectedItemType;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setCoordinator:(id)a0;
- (void)_allowancesByIdentifierDidChangeFrom:(id)a0 to:(id)a1;
- (void)_selectedUsageReportDidChangeFrom:(id)a0 to:(id)a1;
- (id)allowanceIconForUsageItem:(id)a0;
- (id)getUsageItem:(id)a0;
- (void)loadActiveBudgetedIdentifiers;
- (id)newSpecifierWithUsageItem:(id)a0;
- (void)reloadMostUsedSpecifiers;
- (void)showMostUsedDetailListController:(id)a0;
- (void)toggleSelectedItemType:(id)a0;
- (void)updateSpecifier:(id)a0 usageItem:(id)a1;

@end
