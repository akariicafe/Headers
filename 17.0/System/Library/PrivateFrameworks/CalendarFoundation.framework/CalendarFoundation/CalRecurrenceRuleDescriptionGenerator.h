@interface CalRecurrenceRuleDescriptionGenerator : NSObject

+ (id)localizedOfMonthStringForMonth:(id)a0;
+ (id)_andDaysOfWeekString:(id)a0;
+ (id)_customDayCombinationDescription:(id)a0;
+ (id)_dayOfMonthAsString:(long long)a0;
+ (id)_daysOfWeek;
+ (id)_numberedWeekDayString:(id)a0;
+ (id)_orDaysOfWeekString:(id)a0;
+ (id)_weekDayPositionAsString:(long long)a0;
+ (long long)daysTypeForDayArray:(id)a0;
+ (id)humanReadableDescriptionWithStartDate:(id)a0 ofRecurrenceRuleICSString:(id)a1 isConcise:(BOOL)a2;

@end
