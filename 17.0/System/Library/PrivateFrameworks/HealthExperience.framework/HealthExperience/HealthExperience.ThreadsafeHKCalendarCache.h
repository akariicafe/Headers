@interface HealthExperience.ThreadsafeHKCalendarCache : HKCalendarCache {
    void /* unknown type, empty encoding */ lock;
}

- (id)init;
- (id)currentCalendar;
- (void).cxx_destruct;
- (id)calendarForTimeZone:(id)a0;

@end
