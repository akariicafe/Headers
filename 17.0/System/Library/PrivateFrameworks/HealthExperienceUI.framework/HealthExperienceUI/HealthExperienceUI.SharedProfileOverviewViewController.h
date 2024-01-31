@interface HealthExperienceUI.SharedProfileOverviewViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController <CNContactViewControllerDelegate, HealthExperienceUI.TapToRadarButtonDisplaying, HealthExperienceUI.VibrantNavigationBarItemsPresenting> {
    void /* unknown type, empty encoding */ providedHealthStore;
    void /* unknown type, empty encoding */ providedHealthExperienceStore;
    void /* unknown type, empty encoding */ providedPresentation;
    void /* unknown type, empty encoding */ sharedProfileOverviewDataSource;
    void /* unknown type, empty encoding */ navigationBarTitleView;
    void /* unknown type, empty encoding */ gradientView;
    void /* unknown type, empty encoding */ gradientSubscriber;
    void /* unknown type, empty encoding */ gradientColorProvider;
}

- (void)optionsButtonTapped:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)restoreUserActivityState:(id)a0;
- (void)ttrButtonTapped;
- (void)backButtonTapped:(id)a0;

@end
