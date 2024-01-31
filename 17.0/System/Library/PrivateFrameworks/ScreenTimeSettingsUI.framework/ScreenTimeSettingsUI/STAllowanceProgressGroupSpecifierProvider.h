@class NSSet, PSSpecifier, NSString, STUsageItem;

@interface STAllowanceProgressGroupSpecifierProvider : STUsageGroupSpecifierProvider <STAllowanceDetailListControllerDelegate>

@property (readonly, copy, nonatomic) NSSet *budgetedIdentifiers;
@property (readonly, nonatomic) STUsageItem *usageItem;
@property (readonly, copy) PSSpecifier *addAllowanceSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setCoordinator:(id)a0;
- (id)_allowanceDetailText:(id)a0;
- (void)_allowancesByIdentifierDidChangeFrom:(id)a0 to:(id)a1;
- (void)_didFetchAppInfo:(id)a0;
- (void)_showAllowanceDetailListController:(id)a0;
- (void)_showAllowanceSetupListController:(id)a0;
- (id)_specifierForAllowance:(id)a0;
- (void)allowanceDetailController:(id)a0 didDeleteAllowance:(id)a1;
- (void)allowanceDetailController:(id)a0 didSaveAllowance:(id)a1;
- (void)allowanceDetailControllerDidCancel:(id)a0;
- (id)initWithBudgetedIdentifiers:(id)a0 usageItem:(id)a1;

@end
