@interface HKMedicationLoggingAnalytics : NSObject

+ (BOOL)shouldSubmit;
+ (BOOL)_isAllowed;
+ (BOOL)_isMetricEnabled;
+ (void)submitLogMetricWith:(long long)a0 provenance:(long long)a1 context:(long long)a2 loggingMultipleMeds:(BOOL)a3 hoursAgoLoggedForMax:(id)a4 hoursAgoLoggedForMin:(id)a5 hoursFromScheduledTimeLoggedMax:(id)a6 hoursFromScheduledTimeLoggedMin:(id)a7 hoursFromScheduledToTakenOrSkippedMax:(id)a8 hoursFromScheduledToTakenOrSkippedMin:(id)a9 isPartiallyLoggingScheduledMeds:(id)a10 dataSource:(id)a11;

@end
