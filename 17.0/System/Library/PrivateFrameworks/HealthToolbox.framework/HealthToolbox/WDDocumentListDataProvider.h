@interface WDDocumentListDataProvider : WDSampleListDataProvider

- (id)sampleTypes;
- (long long)cellStyle;
- (id)titleForSection:(unsigned long long)a0;
- (id)createQueryForSampleType:(id)a0 predicate:(id)a1 limit:(long long)a2 sortDescriptors:(id)a3 resultsHandler:(id /* block */)a4;
- (id)customCellForObject:(id)a0 indexPath:(id)a1 tableView:(id)a2;
- (double)customCellHeight;
- (double)customEstimatedCellHeight;
- (void)refineSamplesWithCompletion:(id /* block */)a0;

@end
