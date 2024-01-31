@interface IntelligencePlatform._GDSwiftAppleMusicEventContext : IntelligencePlatform._GDSwiftGraphObjectContext {
    void /* unknown type, empty encoding */ swiftContext;
}

- (void).cxx_destruct;
- (id)initAndReturnError:(id *)a0;
- (id)earliestEntryForSongEventAndReturnError:(id *)a0;
- (id)earliestSongEventAndReturnError:(id *)a0;
- (BOOL)enumerateEntriesForSongEventsThatOverlapWith:(id)a0 ascending:(BOOL)a1 error:(id *)a2 block:(id /* block */)a3;
- (BOOL)enumerateEntriesForSongEventsWhoseEndDatesAreIn:(id)a0 ascending:(BOOL)a1 error:(id *)a2 block:(id /* block */)a3;
- (BOOL)enumerateEntriesForSongEventsWhoseStartDatesAreIn:(id)a0 ascending:(BOOL)a1 error:(id *)a2 block:(id /* block */)a3;
- (BOOL)enumerateEntriesForSongEventsWithAscending:(BOOL)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)enumerateSongEventsThatOverlapWith:(id)a0 ascending:(BOOL)a1 error:(id *)a2 block:(id /* block */)a3;
- (BOOL)enumerateSongEventsWhoseEndDatesAreIn:(id)a0 ascending:(BOOL)a1 error:(id *)a2 block:(id /* block */)a3;
- (BOOL)enumerateSongEventsWhoseStartDatesAreIn:(id)a0 ascending:(BOOL)a1 error:(id *)a2 block:(id /* block */)a3;
- (BOOL)enumerateSongEventsWithAscending:(BOOL)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)latestEntryForSongEventAndReturnError:(id *)a0;
- (id)latestSongEventAndReturnError:(id *)a0;

@end
