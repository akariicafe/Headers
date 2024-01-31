@class NSDate, EKEventStore;

@interface DNDSCalendarEventLifetimeMonitor : DNDSBaseLifetimeMonitor {
    EKEventStore *_eventStore;
    NSDate *_lifetimeTimerFireDate;
}

+ (Class)lifetimeClass;

- (id)init;
- (void)_calendarEventStoreChangedWithNotification:(id)a0;
- (id)_eventStore;
- (id)_eventForCalendarEventLifetime:(id)a0 assertionStartDate:(id)a1;
- (id)updateForModeAssertions:(id)a0 date:(id)a1;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (id)_eventStoreCreatingIfNeeded;
- (id)activeDateIntervalForCalendarEventLifetime:(id)a0 assertionStartDate:(id)a1;

@end
