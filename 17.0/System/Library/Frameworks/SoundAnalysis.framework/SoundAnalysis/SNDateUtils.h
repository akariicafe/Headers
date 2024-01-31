@interface SNDateUtils : NSObject

+ (double)timeIntervalDay;
+ (id)basicISO8601DateFormatter;
+ (id)basicISO8601StringFromDate:(id)a0;
+ (id)dateForYear:(long long)a0 month:(long long)a1 day:(long long)a2 hour:(long long)a3 minute:(long long)a4 second:(long long)a5 nanosecond:(long long)a6 timeZone:(id)a7 error:(id *)a8;
+ (id)dateForYear:(long long)a0 month:(long long)a1 day:(long long)a2 timeZone:(id)a3 error:(id *)a4;
+ (id)dateFromBasicISO8601String:(id)a0 error:(id *)a1;
+ (id)dateFromExtendedISO8601String:(id)a0 error:(id *)a1;
+ (id)dateFromStartDate:(id)a0 addingSeconds:(double)a1 minutes:(double)a2 hours:(double)a3 days:(double)a4 weeks:(double)a5;
+ (id)dateLastWeek;
+ (id)dateRelativeToNowAddingSeconds:(double)a0 minutes:(double)a1 hours:(double)a2 days:(double)a3 weeks:(double)a4;
+ (id)dateYesterday;
+ (id)extendedISO8601DateFormatter;
+ (id)extendedISO8601StringFromDate:(id)a0;
+ (double)timeIntervalForSeconds:(double)a0 minutes:(double)a1 hours:(double)a2 days:(double)a3 weeks:(double)a4;
+ (double)timeIntervalHour;
+ (double)timeIntervalMinute;
+ (double)timeIntervalWeek;

- (id)init;

@end
