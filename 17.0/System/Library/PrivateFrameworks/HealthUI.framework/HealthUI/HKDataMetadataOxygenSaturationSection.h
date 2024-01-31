@class HKQuantitySample, NSString, HKHealthStore, HKSample, HKDisplayTypeController, HKUnitPreferenceController, HKDataMetadataSimpleTableViewCell;
@protocol HKDataMetadataSubsampleDelegate;

@interface HKDataMetadataOxygenSaturationSection : HKDataMetadataSection <HKDataMetadataViewControllerDelegate> {
    HKSample *_sample;
    HKHealthStore *_healthStore;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitController;
    id<HKDataMetadataSubsampleDelegate> _subsampleDelegate;
    HKDataMetadataSimpleTableViewCell *_cell;
    HKQuantitySample *_heartRateSample;
}

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)sectionTitle;
- (id)displayTypeController;
- (id)unitController;
- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)a0 tableView:(id)a1;
- (id)displayNameForSampleType:(id)a0 displayTypeController:(id)a1;
- (id)formattedHeartRateFromSample:(id)a0;
- (id)heartRateFromSample:(id)a0;
- (id)initWithSample:(id)a0 healthStore:(id)a1 displayTypeController:(id)a2 unitController:(id)a3 subsampleDelegate:(id)a4;
- (void)queryForData;
- (void)selectCellForIndex:(unsigned long long)a0 navigationController:(id)a1 animated:(BOOL)a2;

@end
