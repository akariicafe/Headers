@interface MenstrualCyclesAppPlugin.CycleFactorsDaySummaryCollectionViewController : UICollectionViewController <HKMCAnalysisProviderObserver, HKMCViewModelProviderObserver> {
    void /* unknown type, empty encoding */ analysisProvider;
    void /* unknown type, empty encoding */ viewModelProvider;
    void /* unknown type, empty encoding */ featureSettings;
    void /* unknown type, empty encoding */ deviationsFeatureStatus;
    void /* unknown type, empty encoding */ providedHealthStore;
    void /* unknown type, empty encoding */ cycleDay;
    void /* unknown type, empty encoding */ gregorianCalendar;
    void /* unknown type, empty encoding */ notificationImpactFactory;
    void /* unknown type, empty encoding */ ongoingCycleFactors;
    void /* unknown type, empty encoding */ collectionViewSource;
}

- (void)analysisProvider:(id)a0 didUpdateAnalysis:(id)a1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewModelProviderDidUpdate:(id)a0;
- (void)pushAddFactorView;

@end
