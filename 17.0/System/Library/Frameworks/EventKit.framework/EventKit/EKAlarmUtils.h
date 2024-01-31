@interface EKAlarmUtils : NSObject

+ (void)adjustRelativeAlarmsForEvent:(id)a0 whenConvertingToIsAllDay:(BOOL)a1;
+ (id)adjustedRelativeAlarmOffset:(double)a0 isAllDay:(BOOL)a1;
+ (id)adjustedRelativeAlarmOffsetFromAllDayToTimed:(double)a0;
+ (id)adjustedRelativeAlarmOffsetFromTimedToAllDay:(double)a0;

@end
