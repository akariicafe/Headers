@interface MenstrualCyclesAppPlugin.CycleFactorsHistoryCollectionViewController : UICollectionViewController <HKMCAnalysisProviderObserver> {
    void /* unknown type, empty encoding */ analysisProvider;
    void /* unknown type, empty encoding */ providedHealthStore;
    void /* unknown type, empty encoding */ collectionViewSections;
    void /* unknown type, empty encoding */ launchSource;
    void /* unknown type, empty encoding */ numOngoingFactors;
    void /* unknown type, empty encoding */ notificationImpactFactory;
    void /* unknown type, empty encoding */ collectionViewSource;
}

- (void)analysisProvider:(id)a0 didUpdateAnalysis:(id)a1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)pushAddFactorView;

@end
