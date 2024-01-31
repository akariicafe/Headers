@interface WDAtrialFibrillationEventListDataProvider : WDSampleListDataProvider

- (id)sampleTypes;
- (long long)cellStyle;
- (id)viewControllerForItemAtIndexPath:(id)a0;
- (id)customCellForObject:(id)a0 indexPath:(id)a1 tableView:(id)a2;
- (double)customCellHeight;
- (double)customEstimatedCellHeight;

@end
