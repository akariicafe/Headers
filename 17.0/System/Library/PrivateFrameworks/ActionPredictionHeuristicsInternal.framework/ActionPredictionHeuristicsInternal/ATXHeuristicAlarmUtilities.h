@interface ATXHeuristicAlarmUtilities : NSObject

+ (id)alarmDataWithAlarmDict:(id)a0;
+ (id)alarmTrigger;
+ (id)fireDateWithAlarmDict:(id)a0;
+ (id)firstFiringAmongAlarms:(id)a0;
+ (BOOL)isValidNonRecentlyModifiedAlarm:(id)a0 duringInterval:(id)a1;
+ (id)localizedTimeWithAlarmDict:(id)a0;

@end
