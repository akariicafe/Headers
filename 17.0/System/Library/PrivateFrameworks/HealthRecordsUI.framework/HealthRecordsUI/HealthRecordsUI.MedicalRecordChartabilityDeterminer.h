@interface HealthRecordsUI.MedicalRecordChartabilityDeterminer : NSObject

- (id)init;
- (void)determineChartabilityForConcept:(id)a0 records:(id)a1 completion:(id /* block */)a2;
- (void)determineChartabilityForUserConcept:(id)a0 records:(id)a1 completion:(id /* block */)a2;

@end
