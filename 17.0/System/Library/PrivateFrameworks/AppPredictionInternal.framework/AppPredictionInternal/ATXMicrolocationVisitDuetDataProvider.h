@interface ATXMicrolocationVisitDuetDataProvider : ATXDuetDataProvider

+ (Class)supportedDuetEventClass;
+ (long long)supportedCoreDuetStream;

- (void)adjustDatesForMicrolocationEvents:(id)a0;
- (id)fetchEventsBetweenStartDate:(id)a0 andEndDate:(id)a1 withPredicates:(id)a2;

@end
