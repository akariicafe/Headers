@class NSArray, NSCalendar;

@interface SCLScheduleFormatterItem : NSObject {
    long long _days;
}

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, copy, nonatomic) NSArray *timeIntervals;

- (void).cxx_destruct;
- (void)addDay:(long long)a0;
- (long long)days;
- (id)initWithCalendar:(id)a0 timeIntervals:(id)a1;
- (id)dayRanges;
- (long long)earliestWeekdayInCalendar;

@end
