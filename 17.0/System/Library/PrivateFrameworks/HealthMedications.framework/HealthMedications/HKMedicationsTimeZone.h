@interface HKMedicationsTimeZone : NSObject

+ (BOOL)didChange;
+ (id)_medicationDefaults;
+ (BOOL)_timeZoneDidChangeWithLocalTimeZone:(id)a0;
+ (id)lastChangeEndOfDay;
+ (long long)secondsAheadOfPreviousTimeZoneForTimeZone:(id)a0;
+ (void)updateLastChangeInfoWithDate:(id)a0 fromTimeZoneName:(id)a1;
+ (void)updateSystemTimeZoneName;

@end
