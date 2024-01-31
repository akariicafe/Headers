@protocol HKAnalyticsHealthDataSource;

@interface HKMedicationAnalyticsGenericFieldsProvider : NSObject {
    id<HKAnalyticsHealthDataSource> _dataSource;
}

- (id)activePairedWatchProductType;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)biologicalSex;
- (id)bucketedUserAgeForCurrentDate:(id)a0;
- (BOOL)isOntologySupportedRegion;
- (id)userAgeForCurrentDate:(id)a0;

@end
