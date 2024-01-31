@interface HealthExperienceUI.SourcesViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController <HKAdaptiveModalPresented> {
    void /* unknown type, empty encoding */ sourceType;
    void /* unknown type, empty encoding */ profileName;
}

- (void)viewControllerDidLeaveAdaptiveModal;
- (void)viewControllerWillEnterAdaptiveModal;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)a0;
- (id)initWithCoder:(id)a0;

@end
