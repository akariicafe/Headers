@interface HealthExperienceUI.ProfileOverviewViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController <HealthExperienceUI.VibrantNavigationBarItemsPresenting> {
    void /* unknown type, empty encoding */ providedHealthStore;
    void /* unknown type, empty encoding */ providedHealthExperienceStore;
    void /* unknown type, empty encoding */ syncHandler;
    void /* unknown type, empty encoding */ profileAllDataDataSource;
    void /* unknown type, empty encoding */ navigationBarTitleView;
    void /* unknown type, empty encoding */ gradientView;
    void /* unknown type, empty encoding */ gradientSubscriber;
    void /* unknown type, empty encoding */ gradientColorProvider;
}

- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)restoreUserActivityState:(id)a0;
- (void)backButtonTapped:(id)a0;

@end
