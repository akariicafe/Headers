@interface HFTimerTriggerCalendarEventAdapter : HFTimerTriggerTimeEventAdapter

+ (BOOL)hasWeekdayRecurrenceInRecurrences:(id)a0;

- (id)createTriggerWithName:(id)a0 timeZone:(id)a1 recurrences:(id)a2;
- (id)updateTrigger:(id)a0;
- (void)updateTriggerBuilder:(id)a0 recurrences:(id)a1 inHome:(id)a2;

@end
