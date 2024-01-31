@interface WDElectrocardiogramListDataProvider : WDSampleListDataProvider

@property (nonatomic) long long mode;
@property (nonatomic) BOOL shouldConsiderRequeryDueToDeletedObjects;
@property (nonatomic) unsigned long long recentSampleLimit;

- (unsigned long long)numberOfSections;
- (id)sampleTypes;
- (long long)cellStyle;
- (id)titleForSection:(unsigned long long)a0;
- (id)initWithDisplayType:(id)a0 profile:(id)a1;
- (id)textForObject:(id)a0;
- (id)viewControllerForItemAtIndexPath:(id)a0;
- (void)updateController:(id)a0 didReceiveUpdateForType:(id)a1 samplesAdded:(id)a2 objectsRemoved:(id)a3 recoveringFromError:(BOOL)a4;
- (id)_cellForSample:(id)a0 indexPath:(id)a1 tableView:(id)a2 activeAlgorithmVersion:(long long)a3;
- (id)_compactCellForSample:(id)a0 indexPath:(id)a1 tableView:(id)a2 activeAlgorithmVersion:(long long)a3;
- (id)_waveCellForSample:(id)a0 indexPath:(id)a1 tableView:(id)a2 activeAlgorithmVersion:(long long)a3;
- (id)activeECGAlgorithmVersion;
- (BOOL)calendarDateSelectorVisible;
- (BOOL)canEditRowAtIndexPath:(id)a0;
- (id)createQueryForSampleType:(id)a0 predicate:(id)a1 limit:(long long)a2 sortDescriptors:(id)a3 resultsHandler:(id /* block */)a4;
- (id)customCellForObject:(id)a0 indexPath:(id)a1 tableView:(id)a2;
- (double)customCellHeight;
- (double)customEstimatedCellHeight;
- (id)customLoadingCellForRowAtIndexPath:(id)a0 tableView:(id)a1;
- (void)customizeTableView:(id)a0;
- (id)initWithDisplayType:(id)a0 profile:(id)a1 mode:(long long)a2;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)a0;
- (id)placeholderCellAtIndexPath:(id)a0 tableView:(id)a1;
- (id)queryDateForSelectedDate:(id)a0;
- (void)refineSamplesWithCompletion:(id /* block */)a0;

@end
