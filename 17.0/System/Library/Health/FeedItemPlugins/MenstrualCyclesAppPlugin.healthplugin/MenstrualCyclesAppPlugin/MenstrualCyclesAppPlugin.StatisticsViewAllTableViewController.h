@interface MenstrualCyclesAppPlugin.StatisticsViewAllTableViewController : UITableViewController <HKMCAnalysisProviderObserver> {
    void /* unknown type, empty encoding */ statistics;
    void /* unknown type, empty encoding */ ongoingFactors;
    void /* unknown type, empty encoding */ analysis;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ statisticsRows;
    void /* unknown type, empty encoding */ ongoingFactorRows;
    void /* unknown type, empty encoding */ menstruationPredictionsImpacted;
    void /* unknown type, empty encoding */ fertilityPredictionsImpacted;
    void /* unknown type, empty encoding */ calendarCache;
    void /* unknown type, empty encoding */ analysisProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_yearsMonthsDaysFormatter;
    void /* unknown type, empty encoding */ standaloneDaysFormatter;
}

- (void)analysisProvider:(id)a0 didUpdateAnalysis:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
