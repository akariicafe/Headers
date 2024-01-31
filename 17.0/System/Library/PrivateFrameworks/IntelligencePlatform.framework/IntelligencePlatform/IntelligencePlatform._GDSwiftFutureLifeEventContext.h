@interface IntelligencePlatform._GDSwiftFutureLifeEventContext : IntelligencePlatform._GDSwiftGraphObjectContext {
    void /* unknown type, empty encoding */ swiftContext;
}

- (void).cxx_destruct;
- (id)initAndReturnError:(id *)a0;
- (id)earliestEntryForFutureActivityEventAndReturnError:(id *)a0;
- (id)earliestFutureActivityEventAndReturnError:(id *)a0;
- (BOOL)enumerateEntriesForFutureActivityEventsWithAscending:(BOOL)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)enumerateFutureActivityEventsWithAscending:(BOOL)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)latestEntryForFutureActivityEventAndReturnError:(id *)a0;
- (id)latestFutureActivityEventAndReturnError:(id *)a0;

@end
