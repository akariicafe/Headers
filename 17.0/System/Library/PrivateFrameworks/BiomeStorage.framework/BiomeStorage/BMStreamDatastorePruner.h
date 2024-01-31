@class BMStreamDatastore;
@protocol BMStreamDatastorePruningDelegate;

@interface BMStreamDatastorePruner : NSObject <BMStreamDatastorePruningDelegate> {
    BMStreamDatastore *_inner;
}

@property (weak, nonatomic) id<BMStreamDatastorePruningDelegate> delegate;
@property (readonly, nonatomic) BOOL isDataAccessible;

- (id)newEnumeratorFromBookmark:(id)a0;
- (void)eventsFrom:(double)a0 to:(double)a1 reason:(unsigned long long)a2 shouldDeleteUsingBlock:(id /* block */)a3;
- (id)fetchEventsFrom:(double)a0 to:(double)a1;
- (void)syncMappedFiles;
- (BOOL)deleteEventAtBookmark:(id)a0 outTombstoneBookmark:(id *)a1;
- (Class)eventBodyClass;
- (id)newEnumeratorFromStartTime:(double)a0;
- (id)initWithStream:(id)a0 config:(id)a1 eventDataClass:(Class)a2;
- (id)streamIdentifier;
- (void).cxx_destruct;
- (void)removeEventsFrom:(double)a0 to:(double)a1 reason:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (void)didPruneEvents;
- (id)initWithStream:(id)a0 config:(id)a1;
- (void)willPruneEvent:(id)a0;

@end
