@class _TtC20IntelligencePlatform24_GDSwiftLifeEventContext;

@interface GDLifeEventContext : GDGraphObjectContext {
    _TtC20IntelligencePlatform24_GDSwiftLifeEventContext *gdSwiftContext;
}

- (id)context;
- (void).cxx_destruct;
- (id)initAndReturnError:(id *)a0;
- (id)earliestActivityEventAndReturnError:(id *)a0;
- (id)earliestActivityEventWithEntityIdentifierType:(Class)a0 outStartDate:(id *)a1 outEndDate:(id *)a2 error:(id *)a3;
- (id)entryForEarliestActivityEventAndReturnError:(id *)a0;
- (id)entryForLatestActivityEventAndReturnError:(id *)a0;
- (BOOL)enumerateActivityEventsInAscendingOrder:(BOOL)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (BOOL)enumerateActivityEventsThatOverlapWithDateInterval:(id)a0 ascending:(BOOL)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (BOOL)enumerateActivityEventsWhoseEndDatesAreInDateInterval:(id)a0 ascending:(BOOL)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (BOOL)enumerateActivityEventsWhoseStartDatesAreInDateInterval:(id)a0 ascending:(BOOL)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (BOOL)enumerateEntriesForActivityEventsInAscendingOrder:(BOOL)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (BOOL)enumerateEntriesForActivityEventsThatOverlapWithDateInterval:(id)a0 ascending:(BOOL)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (BOOL)enumerateEntriesForActivityEventsWhoseEndDatesAreInDateInterval:(id)a0 ascending:(BOOL)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (BOOL)enumerateEntriesForActivityEventsWhoseStartDatesAreInDateInterval:(id)a0 ascending:(BOOL)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (id)extremeActivityEventWithEntityIdentifierType:(Class)a0 ascending:(BOOL)a1 outStartDate:(id *)a2 outEndDate:(id *)a3 error:(id *)a4;
- (id)initWithGDSwiftContext:(id)a0;
- (id)latestActivityEventAndReturnError:(id *)a0;
- (id)latestActivityEventWithEntityIdentifierType:(Class)a0 outStartDate:(id *)a1 outEndDate:(id *)a2 error:(id *)a3;

@end
