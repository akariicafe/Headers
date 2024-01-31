@interface STDevicePickupsUsageGroupSpecifierProvider : STShowMoreUsageGroupSpecifierProvider

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setCoordinator:(id)a0;
- (id)getPickupsInfo:(id)a0;
- (void)_selectedUsageReportDidChangeFrom:(id)a0 to:(id)a1;
- (void)_specifierIdentifierDidChange:(id)a0;
- (id)_usageDetailsCoordinator:(id)a0;
- (id)newSpecifierWithUsageItem:(id)a0;
- (void)showMostUsedDetailListController:(id)a0;
- (void)updateSpecifier:(id)a0 usageItem:(id)a1;

@end
