@class NSString, NSMutableDictionary, NSMutableSet, NSObject, MapsSuggestionsSuppressor;
@protocol OS_dispatch_queue, MapsSuggestionsSourceDelegate, OS_dispatch_source;

@interface MapsSuggestionsCompositeSource : MapsSuggestionsBaseSource <MapsSuggestionsSource, MapsSuggestionsSourceDelegate> {
    NSMutableSet *_sources;
    NSMutableDictionary *_nextUpdateTimes;
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    NSObject<OS_dispatch_source> *_updateTimer;
    MapsSuggestionsSuppressor *_suppressor;
    NSMutableDictionary *_hasStarted;
}

@property BOOL running;
@property (weak, nonatomic) id<MapsSuggestionsSourceDelegate> delegate;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEnabled;
+ (unsigned long long)disposition;

- (char)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (void)feedbackForEntry:(id)a0 action:(long long)a1;
- (id)children;
- (id)sources;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;
- (void)feedbackForContact:(id)a0 action:(long long)a1;
- (void)feedbackForMapItem:(id)a0 action:(long long)a1;
- (id)initWithDelegate:(id)a0 name:(id)a1;
- (id)initFromResourceDepot:(id)a0 name:(id)a1;
- (void)dealloc;
- (double)updateSuggestionEntriesOfType:(long long)a0 handler:(id /* block */)a1;
- (void)start;
- (id)test_dateUntilSuppressedEntry:(id)a0;
- (id).cxx_construct;
- (double)test_suppressionDurationForBehavior:(long long)a0 type:(long long)a1;
- (void)stop;
- (void).cxx_destruct;
- (BOOL)attachSource:(id)a0;
- (BOOL)detachSource:(id)a0;
- (BOOL)addChildSource:(id)a0;
- (void)test_awaitQueue;
- (void)test_resetSuppressions;
- (unsigned long long)addOrUpdateSuggestionEntries:(id)a0 source:(id)a1;
- (BOOL)removeChildSource:(id)a0;
- (void)test_sync;

@end
