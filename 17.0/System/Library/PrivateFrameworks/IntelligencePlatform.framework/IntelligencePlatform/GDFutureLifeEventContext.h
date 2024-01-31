@class _TtC20IntelligencePlatform30_GDSwiftFutureLifeEventContext;

@interface GDFutureLifeEventContext : GDGraphObjectContext {
    _TtC20IntelligencePlatform30_GDSwiftFutureLifeEventContext *gdSwiftContext;
}

+ (id)subscribeToUpdateNotificationWithSystemwideUniqueSubscriptionIdentifier:(id)a0 targetQueue:(id)a1 onReceiveUpdateNotificationBlock:(id /* block */)a2;

- (id)context;
- (void).cxx_destruct;
- (id)initAndReturnError:(id *)a0;
- (BOOL)enumerateFutureActivityEventsInAscendingOrder:(BOOL)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (id)earliestFutureActivityEventAndReturnError:(id *)a0;
- (id)earliestFutureActivityEventWithEntityIdentifierType:(Class)a0 outStartDate:(id *)a1 outEndDate:(id *)a2 error:(id *)a3;
- (id)entryForEarliestFutureActivityEventAndReturnError:(id *)a0;
- (id)entryForLatestFutureActivityEventAndReturnError:(id *)a0;
- (BOOL)enumerateEntriesForFutureActivityEventsInAscendingOrder:(BOOL)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (id)extremeFutureActivityEventWithEntityIdentifierType:(Class)a0 ascending:(BOOL)a1 outStartDate:(id *)a2 outEndDate:(id *)a3 error:(id *)a4;
- (id)initWithGDSwiftContext:(id)a0;
- (id)latestFutureActivityEventAndReturnError:(id *)a0;
- (id)latestFutureActivityEventWithEntityIdentifierType:(Class)a0 outStartDate:(id *)a1 outEndDate:(id *)a2 error:(id *)a3;

@end
