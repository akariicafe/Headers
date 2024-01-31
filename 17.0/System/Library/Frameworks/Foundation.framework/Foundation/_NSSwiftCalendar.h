@class NSString, NSTimeZone, NSLocale;

@interface _NSSwiftCalendar : _NSCalendarBridge {
    void /* unknown type, empty encoding */ _lock;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) Class classForCoder;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *calendarIdentifier;
@property (nonatomic, copy) NSLocale *locale;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic) long long firstWeekday;
@property (nonatomic) long long minimumDaysInFirstWeek;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)getEra:(long long *)a0 year:(long long *)a1 month:(long long *)a2 day:(long long *)a3 fromDate:(id)a4;
- (id)_componentsInTimeZone:(id)a0 fromDate:(id)a1;
- (id)_components:(unsigned long long)a0 fromDate:(id)a1;
- (id)_dateFromComponents:(id)a0;
- (void)_enumerateDatesStartingAfterDate:(id)a0 matchingComponents:(id)a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (long long)compareDate:(id)a0 toDate:(id)a1 toUnitGranularity:(unsigned long long)a2;
- (long long)component:(unsigned long long)a0 fromDate:(id)a1;
- (id)components:(unsigned long long)a0 fromDate:(id)a1 toDate:(id)a2 options:(unsigned long long)a3;
- (id)components:(unsigned long long)a0 fromDateComponents:(id)a1 toDateComponents:(id)a2 options:(unsigned long long)a3;
- (BOOL)date:(id)a0 matchesComponents:(id)a1;
- (id)dateByAddingComponents:(id)a0 toDate:(id)a1 options:(unsigned long long)a2;
- (id)dateByAddingUnit:(unsigned long long)a0 value:(long long)a1 toDate:(id)a2 options:(unsigned long long)a3;
- (id)dateBySettingHour:(long long)a0 minute:(long long)a1 second:(long long)a2 ofDate:(id)a3 options:(unsigned long long)a4;
- (id)dateBySettingUnit:(unsigned long long)a0 value:(long long)a1 ofDate:(id)a2 options:(unsigned long long)a3;
- (id)dateWithEra:(long long)a0 year:(long long)a1 month:(long long)a2 day:(long long)a3 hour:(long long)a4 minute:(long long)a5 second:(long long)a6 nanosecond:(long long)a7;
- (id)dateWithEra:(long long)a0 yearForWeekOfYear:(long long)a1 weekOfYear:(long long)a2 weekday:(long long)a3 hour:(long long)a4 minute:(long long)a5 second:(long long)a6 nanosecond:(long long)a7;
- (void)getEra:(long long *)a0 yearForWeekOfYear:(long long *)a1 weekOfYear:(long long *)a2 weekday:(long long *)a3 fromDate:(id)a4;
- (void)getHour:(long long *)a0 minute:(long long *)a1 second:(long long *)a2 nanosecond:(long long *)a3 fromDate:(id)a4;
- (id)initWithCheckedCalendarIdentifier:(id)a0;
- (BOOL)isDate:(id)a0 equalToDate:(id)a1 toUnitGranularity:(unsigned long long)a2;
- (BOOL)isDate:(id)a0 inSameDayAsDate:(id)a1;
- (BOOL)isDateInToday:(id)a0;
- (BOOL)isDateInTomorrow:(id)a0;
- (BOOL)isDateInWeekend:(id)a0;
- (BOOL)isDateInYesterday:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })maximumRangeOfUnit:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })minimumRangeOfUnit:(unsigned long long)a0;
- (id)nextDateAfterDate:(id)a0 matchingComponents:(id)a1 options:(unsigned long long)a2;
- (id)nextDateAfterDate:(id)a0 matchingHour:(long long)a1 minute:(long long)a2 second:(long long)a3 options:(unsigned long long)a4;
- (id)nextDateAfterDate:(id)a0 matchingUnit:(unsigned long long)a1 value:(long long)a2 options:(unsigned long long)a3;
- (BOOL)nextWeekendStartDate:(id *)a0 interval:(double *)a1 options:(unsigned long long)a2 afterDate:(id)a3;
- (long long)ordinalityOfUnit:(unsigned long long)a0 inUnit:(unsigned long long)a1 forDate:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfUnit:(unsigned long long)a0 inUnit:(unsigned long long)a1 forDate:(id)a2;
- (BOOL)rangeOfUnit:(unsigned long long)a0 startDate:(id *)a1 interval:(double *)a2 forDate:(id)a3;
- (BOOL)rangeOfWeekendStartDate:(id *)a0 interval:(double *)a1 containingDate:(id)a2;
- (id)startOfDayForDate:(id)a0;

@end
