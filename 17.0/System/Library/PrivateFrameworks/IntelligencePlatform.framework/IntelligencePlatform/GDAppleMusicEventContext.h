@class _TtC20IntelligencePlatform30_GDSwiftAppleMusicEventContext;

@interface GDAppleMusicEventContext : GDGraphObjectContext {
    _TtC20IntelligencePlatform30_GDSwiftAppleMusicEventContext *gdSwiftContext;
}

- (id)context;
- (void).cxx_destruct;
- (id)initAndReturnError:(id *)a0;
- (BOOL)enumerateEntriesForSongEventsInAscendingOrder:(BOOL)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (id)earliestSongEventAndReturnError:(id *)a0;
- (id)entryForEarliestSongEventAndReturnError:(id *)a0;
- (id)entryForLatestSongEventAndReturnError:(id *)a0;
- (BOOL)enumerateEntriesForSongEventsThatOverlapWithDateInterval:(id)a0 ascending:(BOOL)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (BOOL)enumerateEntriesForSongEventsWhoseEndDatesAreInDateInterval:(id)a0 ascending:(BOOL)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (BOOL)enumerateEntriesForSongEventsWhoseStartDatesAreInDateInterval:(id)a0 ascending:(BOOL)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (BOOL)enumerateSongEventsInAscendingOrder:(BOOL)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (BOOL)enumerateSongEventsThatOverlapWithDateInterval:(id)a0 ascending:(BOOL)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (BOOL)enumerateSongEventsWhoseEndDatesAreInDateInterval:(id)a0 ascending:(BOOL)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (BOOL)enumerateSongEventsWhoseStartDatesAreInDateInterval:(id)a0 ascending:(BOOL)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (id)initWithGDSwiftContext:(id)a0;
- (id)latestSongEventAndReturnError:(id *)a0;

@end
