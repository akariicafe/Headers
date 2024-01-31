@interface ATXHeuristicTimeUtilities : NSObject

+ (id)enabledAlarmsFromTS:(double)a0 toTS:(double)a1 environment:(id)a2;
+ (double)timestampAtDayOfTimestamp:(double)a0 hour:(long long)a1 minute:(long long)a2;
+ (double)timestampByOffsettingDays:(double)a0 dayOffset:(long long)a1;
+ (double)timestampByOffsettingStartOfTodayByNumberOfDays:(long long)a0;
+ (double)timestampWithHour:(unsigned long long)a0 minute:(unsigned long long)a1 atDayOfTimestamp:(double)a2;
+ (id)usualAlarmTimeOfDayDataSourceWithEnvironment:(id)a0;

@end
