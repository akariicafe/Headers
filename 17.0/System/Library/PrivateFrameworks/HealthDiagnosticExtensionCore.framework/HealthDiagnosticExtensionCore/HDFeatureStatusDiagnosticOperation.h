@interface HDFeatureStatusDiagnosticOperation : HDDiagnosticOperation

- (void)run;
- (void)_reportFeatureStatusByFeature;
- (void)_reportFeatureStatusForFeature:(id)a0 healthStore:(id)a1;
- (void)_reportRegionAvailabilityByFeature;
- (void)_reportRegionAvailabilityForFeature:(id)a0 healthStore:(id)a1;
- (void)_reportRequirementSatisfactionOverridesByFeature;
- (id)reportFilename;

@end
