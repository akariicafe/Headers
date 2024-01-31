@class NSDateComponents;

@interface _UICalendarDateRange : NSObject

@property (readonly, nonatomic) NSDateComponents *startDate;
@property (readonly, nonatomic) NSDateComponents *endDate;

- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (void).cxx_destruct;
- (id)allDatesInRangeForCalendar:(id)a0;

@end
