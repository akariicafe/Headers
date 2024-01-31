@class NSString;

@interface ATXHeuristicEarlyEventAlarm : NSObject <ATXContextHeuristicProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)permanentRefreshTriggers;
- (id)heuristicResultWithEnvironment:(id)a0;
- (id)_enabledAlarmsFromTS:(double)a0 toTS:(double)a1 environment:(id)a2;
- (double)_timestampAtDayOfTimestamp:(double)a0 hour:(long long)a1 minute:(long long)a2;
- (double)_timestampByOffsettingDays:(double)a0 dayOffset:(long long)a1;
- (double)_timestampByOffsettingStartOfTodayByNumberOfDays:(long long)a0;
- (double)_timestampWithHour:(unsigned long long)a0 minute:(unsigned long long)a1 atDayOfTimestamp:(double)a2;
- (id)_usualAlarmTimeOfDayDataSourceWithEnvironment:(id)a0;
- (BOOL)_willAlarm:(id)a0 fireFrom:(double)a1 to:(double)a2;
- (BOOL)isEventInterestingForSettingAlarm:(id)a0;
- (BOOL)shouldShowSuggestionForEarlyEvent:(id)a0 alarms:(id)a1 environment:(id)a2;

@end
