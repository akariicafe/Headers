@class BMStreamDatastore;

@interface BMStreamTombstoneEventDatastore : BMStreamDatastoreBase {
    BMStreamDatastore *_streamDatastore;
}

- (id)newEnumeratorFromBookmark:(id)a0;
- (id)initWithStream:(id)a0 streamPath:(id)a1 permission:(unsigned long long)a2 config:(id)a3 eventDataClass:(Class)a4 useCase:(id)a5;
- (id)newEnumeratorFromStartTime:(double)a0 options:(unsigned long long)a1;
- (id)newEnumeratorFromBookmark:(id)a0 options:(unsigned long long)a1;
- (BOOL)writeEventWithEventBody:(id)a0 timestamp:(double)a1 outBookmark:(id *)a2;
- (BOOL)deleteEventAtBookmark:(id)a0 outTombstoneBookmark:(id *)a1;
- (void)enumerateEventsFrom:(double)a0 to:(double)a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (id)newEnumeratorFromStartTime:(double)a0;
- (BOOL)writeTombstoneEvent:(id)a0 outTombstoneBookmark:(id *)a1;
- (id)originalEventFromTombstoneEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithStream:(id)a0 streamPath:(id)a1 permission:(unsigned long long)a2 config:(id)a3 streamDatastore:(id)a4;

@end
