@class EKEventStore;

@interface MKCalendarMigrator : MKMigrator {
    EKEventStore *_eventStore;
}

- (id)init;
- (void).cxx_destruct;
- (void)import:(id)a0;
- (void)importiCal:(id)a0;

@end
