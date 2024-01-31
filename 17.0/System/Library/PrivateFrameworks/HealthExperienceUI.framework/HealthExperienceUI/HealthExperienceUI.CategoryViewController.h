@interface HealthExperienceUI.CategoryViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController {
    void /* unknown type, empty encoding */ typeGroup;
    void /* unknown type, empty encoding */ healthExperienceStore;
    void /* unknown type, empty encoding */ providedHealthStore;
    void /* unknown type, empty encoding */ categoryViewDataSource;
    void /* unknown type, empty encoding */ gradientView;
    void /* unknown type, empty encoding */ gradientSubscriber;
    void /* unknown type, empty encoding */ gradientColorProvider;
    void /* unknown type, empty encoding */ navigationBarStyle;
}

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewIsAppearing:(BOOL)a0;
- (void)restoreUserActivityState:(id)a0;
- (void)observedTraitsDidChangeWithTraitEnvironment:(id)a0 previousTraitCollection:(id)a1;

@end
