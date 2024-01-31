@class NSMutableDictionary, NSDate;

@interface HKRemoteDateIntervals : NSObject {
    NSMutableDictionary *_dateIntervals;
    long long _calendarDayAlignment;
    NSDate *_endDate;
}

- (void).cxx_destruct;
- (id)_dateIntervalFromDate:(id)a0 forUnit:(unsigned long long)a1 withValue:(long long)a2 queryAlignment:(long long)a3 gregorianCalendar:(id)a4;
- (id)dateIntervalForTimeScope:(long long)a0 withGregorianCalendar:(id)a1 error:(id *)a2;
- (id)initWithDisplayType:(id)a0 fromEndDate:(id)a1;

@end
