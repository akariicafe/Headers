@class NSTimeZone, NSArray, NSCalendar, NSDate;

@interface CalRecurrenceGenerator : NSObject {
    NSCalendar *_calendar;
}

@property (copy, nonatomic) NSDate *eventStartDate;
@property (copy, nonatomic) NSDate *eventEndDate;
@property (copy, nonatomic) NSTimeZone *eventTimeZone;
@property (nonatomic) BOOL allDay;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSArray *daysOfTheWeek;
@property (copy, nonatomic) NSArray *daysOfTheMonth;
@property (copy, nonatomic) NSArray *daysOfTheYear;
@property (copy, nonatomic) NSArray *weeksOfTheYear;
@property (copy, nonatomic) NSArray *monthsOfTheYear;
@property (copy, nonatomic) NSArray *setPositions;
@property (nonatomic) int interval;
@property (nonatomic) int frequency;
@property (nonatomic) unsigned long long weekStart;
@property (nonatomic) BOOL shouldPinMonthDays;
@property (nonatomic) BOOL onlyIncludeInitialDateIfItMatchesRecurrence;

- (id)init;
- (void).cxx_destruct;
- (double)duration;
- (id)_copyMonthlyOccurrencesWithInitialDate:(id)a0 startDate:(id)a1 endDate:(id)a2 count:(unsigned long long)a3;
- (id)_copyDailyOccurrencesWithInitialDate:(id)a0 startDate:(id)a1 endDate:(id)a2 count:(unsigned long long)a3;
- (id)_copyWeeklyOccurrencesWithInitialDate:(id)a0 startDate:(id)a1 endDate:(id)a2 count:(unsigned long long)a3;
- (id)_copyYearlyOccurrencesWithInitialDate:(id)a0 startDate:(id)a1 endDate:(id)a2 count:(unsigned long long)a3;
- (BOOL)_isSimpleYearlyRecurrence;
- (BOOL)_validateCalDate:(struct { int x0; char x1; char x2; char x3; char x4; double x5; })a0 pinned:(BOOL)a1;
- (id)computeRecurrenceEndDate:(unsigned long long)a0;
- (double)convertAbsoluteTime:(double)a0 fromTimeZone:(id)a1 toTimeZone:(id)a2;
- (id)copyOccurrenceDatesBetweenStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 limit:(long long)a3;
- (id)copyOccurrenceDatesWithInitialDate:(id)a0 allDay:(BOOL)a1 rangeStart:(id)a2 rangeEnd:(id)a3 timeZone:(id)a4 limit:(long long)a5;
- (BOOL)requiresEndDateConversionFromGMTToEventTimeZone;

@end
