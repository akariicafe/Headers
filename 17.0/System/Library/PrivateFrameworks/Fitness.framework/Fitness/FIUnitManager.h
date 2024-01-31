@class HKHealthStore, NSMutableDictionary;

@interface FIUnitManager : NSObject {
    HKHealthStore *_healthStore;
    NSMutableDictionary *_preferredUnits;
}

- (unsigned long long)userDistanceUnitForDistanceType:(unsigned long long)a0;
- (void)_localeDidChange:(id)a0;
- (double)distanceInDistanceUnit:(unsigned long long)a0 forDistanceInMeters:(double)a1;
- (id)initWithHealthStore:(id)a0;
- (void)_updatePreferredUnits;
- (unsigned long long)userDistanceCyclingUnit;
- (double)distanceInUserDistanceUnitForDistanceInMeters:(double)a0 distanceType:(unsigned long long)a1;
- (void)setUserDistanceCyclingUnit:(unsigned long long)a0;
- (id)_preferredHKUnitForQuantityType:(id)a0;
- (id)userDistanceWalkingRunningHKUnit;
- (unsigned long long)userDistanceWalkingRunningUnit;
- (id)userActiveEnergyBurnedUnit;
- (double)distanceInMetersForDistanceInUserUnit:(double)a0 distanceType:(unsigned long long)a1;
- (void)_userPreferencesDidChange:(id)a0;
- (void)setUserBasalEnergyBurnedUnit:(id)a0;
- (void)setUserDistanceUnit:(unsigned long long)a0 forDistanceType:(unsigned long long)a1;
- (id)userDistanceCyclingHKUnit;
- (id)_loadPreferredUnitsFromDefaults;
- (void).cxx_destruct;
- (void)setUserActiveEnergyBurnedUnit:(id)a0;
- (id)userBasalEnergyBurnedUnit;
- (id)userDistanceElevationHKUnit;
- (id)userDistanceHKUnitForDistanceType:(unsigned long long)a0;
- (unsigned long long)userDistanceElevationUnit;
- (void)setUserDistanceWalkingRunningUnit:(unsigned long long)a0;
- (void)_setPreferredHKUnit:(id)a0 forQuantityType:(id)a1;
- (double)paceWithDistance:(id)a0 overDuration:(double)a1 paceFormat:(long long)a2;
- (void)setPreferredUnitsForTesting:(id)a0;
- (void)_storePreferredUnitsInDefaults:(id)a0;
- (id)userLapLengthHKUnit;
- (void)_notifyUnitPreferencesChanged;
- (id)userDistanceHKUnitForActivityType:(id)a0;

@end
