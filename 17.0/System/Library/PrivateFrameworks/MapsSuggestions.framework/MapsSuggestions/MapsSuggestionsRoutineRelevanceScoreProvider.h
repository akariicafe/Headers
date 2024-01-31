@class NSString, NSArray, NSDate, NSObject, MapsSuggestionsRoutine;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsRoutineRelevanceScoreProvider : NSObject <MapsSuggestionsRelevanceScoreProvider> {
    NSDate *_fetchEntriesFromDate;
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    MapsSuggestionsRoutine *_routine;
    NSArray *_routineLocations;
    NSArray *_routineVisits;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (char)relevanceScoreForNames:(id)a0 addresses:(id)a1 mapItems:(id)a2 completion:(id /* block */)a3;
- (id)initWithRoutine:(id)a0;
- (void).cxx_destruct;
- (void)preLoad;

@end
