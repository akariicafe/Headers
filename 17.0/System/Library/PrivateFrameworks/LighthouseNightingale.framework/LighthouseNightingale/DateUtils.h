@interface DateUtils : NSObject

+ (id)dateOnDayIndex:(long long)a0 atHour:(long long)a1 calendar:(id)a2;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })getHeartRateDateRangeUpToJulianDay:(long long)a0 withAdditionalDayCount:(long long)a1;
+ (long long)getJulianDayFromNSDate:(id)a0;
+ (id)getNSDateComponentsFromJulianDay:(unsigned long long)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })getStandardDateRangeUpToJulianDay:(long long)a0 withAdditionalDayCount:(long long)a1;
+ (id)modifiedJulianStartDate;
+ (id)sleepDayIntervalForMorningIndex:(long long)a0 calendar:(id)a1;
+ (id)sleepDayStartForMorningIndex:(long long)a0 calendar:(id)a1;

@end
