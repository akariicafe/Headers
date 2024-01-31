@class NSPredicate;

@interface HealthMedicationsUI.MedicationListAllDataProvider : WDSampleListDataProvider {
    void /* unknown type, empty encoding */ medication;
    void /* unknown type, empty encoding */ predicate;
}

@property (nonatomic, retain) NSPredicate *defaultQueryPredicate;

- (id)init;
- (void).cxx_destruct;
- (id)sampleTypes;
- (id)detailSectionForSample:(id)a0;
- (id)initWithDisplayType:(id)a0 profile:(id)a1;
- (id)textForObject:(id)a0;
- (id)viewControllerForItemAtIndexPath:(id)a0;

@end
