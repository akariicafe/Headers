@interface IntelligencePlatform._GDSwiftLifeEventContext : IntelligencePlatform._GDSwiftGraphObjectContext {
    void /* unknown type, empty encoding */ swiftContext;
}

- (void).cxx_destruct;
- (id)initAndReturnError:(id *)a0;
- (id)earliestActivityEventAndReturnError:(id *)a0;
- (id)earliestEntryForActivityEventAndReturnError:(id *)a0;
- (BOOL)enumerateActivityEventsThatOverlapWith:(id)a0 ascending:(BOOL)a1 error:(id *)a2 block:(id /* block */)a3;
- (BOOL)enumerateActivityEventsWhoseEndDatesAreIn:(id)a0 ascending:(BOOL)a1 error:(id *)a2 block:(id /* block */)a3;
- (BOOL)enumerateActivityEventsWhoseStartDatesAreIn:(id)a0 ascending:(BOOL)a1 error:(id *)a2 block:(id /* block */)a3;
- (BOOL)enumerateActivityEventsWithAscending:(BOOL)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)enumerateEntriesForActivityEventsThatOverlapWith:(id)a0 ascending:(BOOL)a1 error:(id *)a2 block:(id /* block */)a3;
- (BOOL)enumerateEntriesForActivityEventsWhoseEndDatesAreIn:(id)a0 ascending:(BOOL)a1 error:(id *)a2 block:(id /* block */)a3;
- (BOOL)enumerateEntriesForActivityEventsWhoseStartDatesAreIn:(id)a0 ascending:(BOOL)a1 error:(id *)a2 block:(id /* block */)a3;
- (BOOL)enumerateEntriesForActivityEventsWithAscending:(BOOL)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)latestActivityEventAndReturnError:(id *)a0;
- (id)latestEntryForActivityEventAndReturnError:(id *)a0;

@end
