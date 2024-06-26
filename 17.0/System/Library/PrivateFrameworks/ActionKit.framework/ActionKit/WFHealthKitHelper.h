@interface WFHealthKitHelper : NSObject

+ (id)localizedDisplayNameForUnit:(id)a0 value:(id)a1;
+ (long long)enumFromReadableVO2MaxTestType:(id)a0;
+ (id)readableVO2MaxTestTypeFromEnum:(long long)a0;
+ (id)boolFromReadableSexualActivity:(id)a0;
+ (id)readableAppleStandingHourValues;
+ (id)readableSexualActivityFromBool:(BOOL)a0;
+ (id)boolFromReadableMenstrualFlowIsStartOfCycle:(id)a0;
+ (id)characteristicTypeIdentifierFromReadableTypeIdentifier:(id)a0;
+ (long long)enumFromReadableAppleStandingHour:(id)a0;
+ (long long)enumFromReadableBloodGlucoseMealTime:(id)a0;
+ (long long)enumFromReadableCervicalMucusQuality:(id)a0;
+ (long long)enumFromReadableInsulinDeliveryReason:(id)a0;
+ (long long)enumFromReadableMenstrualFlow:(id)a0;
+ (long long)enumFromReadableOvulationTestResult:(id)a0;
+ (long long)enumFromReadableSleepAnalysis:(id)a0;
+ (id)extractHKDataFromContentQuery:(id)a0;
+ (id)localizedDisplayNameForUnit:(id)a0 quantityTypeIdentifier:(id)a1;
+ (id)localizedDisplayNameForUnit:(id)a0 value:(id)a1 quantityTypeIdentifier:(id)a2;
+ (id)localizedSampleTypes;
+ (id)readableAppetiteChangesValueFromEnum:(long long)a0;
+ (id)readableAppleStandingHourFromEnum:(long long)a0;
+ (id)readableBiologicalSexFromEnum:(long long)a0;
+ (id)readableBloodGlucoseMealTimeFromEnum:(long long)a0;
+ (id)readableBloodGlucoseMealTimeValues;
+ (id)readableBloodTypeFromEnum:(long long)a0;
+ (id)readableCervicalMucusQualityFromEnum:(long long)a0;
+ (id)readableCervicalMucusQualityValues;
+ (id)readableCharacteristicTypes;
+ (id)readableInsulinDeliveryReasonFromEnum:(long long)a0;
+ (id)readableInsulinDeliveryReasonValues;
+ (id)readableMenstrualFlowFromEnum:(long long)a0;
+ (id)readableMenstrualFlowIsStartOfCycleFromBool:(BOOL)a0;
+ (id)readableMenstrualFlowIsStartOfCycleValues;
+ (id)readableMenstrualFlowValues;
+ (id)readableOvulationTestResultFromEnum:(long long)a0;
+ (id)readableOvulationTestResultValues;
+ (id)readablePresenceValueFromEnum:(long long)a0;
+ (id)readableSampleTypeIdentifierFromSampleTypeIdentifier:(id)a0;
+ (id)readableSampleTypes;
+ (id)readableSeverityValueFromEnum:(long long)a0;
+ (id)readableSexualActivityValues;
+ (id)readableSleepAnalysisFromEnum:(long long)a0;
+ (id)readableSleepAnalysisValues;
+ (id)readableTypeIdentifierFromCharacteristicTypeIdentifier:(id)a0;
+ (id)readableVO2MaxTestTypeValues;
+ (id)readableWorkoutActivityTypeFromWorkoutActivityType:(unsigned long long)a0;
+ (BOOL)readableWorkoutActivityTypeIsValid:(id)a0;
+ (id)readableWorkoutActivityTypes;
+ (id)sampleTypeIdentifierFromReadableTypeIdentifier:(id)a0;
+ (void)sourcesForSampleType:(id)a0 completion:(id /* block */)a1;
+ (void)sourcesWithName:(id)a0 ofSampleType:(id)a1 completion:(id /* block */)a2;
+ (void)validUnitsForQuantityType:(id)a0 completion:(id /* block */)a1;
+ (unsigned long long)workoutActivityTypeFromReadableWorkoutActivityType:(id)a0;

@end
