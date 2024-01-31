@class HKCalendarCache, HKDisplayTypeController, HKDataMetadataDataSource, HKUnitPreferenceController, NSObject;
@protocol HKDataMetadataObject;

@interface HKDataMetadataDetailSection : HKDataMetadataSimpleSection <HKDataMetadataDetailSectionDataReceiver> {
    HKDataMetadataDataSource *_metadataDataSource;
}

@property (readonly, nonatomic) NSObject<HKDataMetadataObject> *object;
@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController;
@property (readonly, nonatomic) HKUnitPreferenceController *unitController;
@property (readonly, nonatomic) HKCalendarCache *calendarCache;

- (void).cxx_destruct;
- (id)sectionFooter;
- (void)addSampleDetailValues;
- (id)initWithSample:(id)a0 displayTypeController:(id)a1 unitController:(id)a2;
- (id)initWithWorkoutActivity:(id)a0 displayTypeController:(id)a1 unitController:(id)a2;
- (id)initWithWorkoutEvent:(id)a0;
- (void)_addDetailValues;
- (void)_addMetadataDataSourceDetailValues;

@end
