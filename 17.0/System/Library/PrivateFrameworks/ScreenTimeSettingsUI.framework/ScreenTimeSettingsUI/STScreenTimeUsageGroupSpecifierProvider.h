@class PSSpecifier;

@interface STScreenTimeUsageGroupSpecifierProvider : STUsageGroupSpecifierProvider

@property (retain, nonatomic) PSSpecifier *usageSummaryGraphSpecifier;
@property (retain, nonatomic) PSSpecifier *weeklyTotalSpecifier;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setCoordinator:(id)a0;
- (void)_headerButtonPressed:(id)a0;
- (void)_lastUpdatedDateDidChangeFrom:(id)a0 to:(id)a1;
- (void)_refreshingDidChange:(BOOL)a0;
- (void)_selectedUsageReportDidChangeFrom:(id)a0 to:(id)a1;
- (void)_specifierIdentifierDidChange:(id)a0;
- (id)_usageDetailsCoordinator:(id)a0;
- (id)_weeklyTotal:(id)a0;

@end
