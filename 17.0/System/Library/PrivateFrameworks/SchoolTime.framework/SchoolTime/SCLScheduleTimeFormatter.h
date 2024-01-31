@class NSDateFormatter, NSCalendar;

@interface SCLScheduleTimeFormatter : NSFormatter {
    NSDateFormatter *_dateFormatter;
    NSCalendar *_calendar;
}

- (id)init;
- (id)stringForObjectValue:(id)a0;
- (void).cxx_destruct;
- (id)stringForScheduleTime:(id)a0;

@end
