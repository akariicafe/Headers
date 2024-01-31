@class NSObject, _TtC15MapsSuggestions30MapsSuggestionsContactActivity;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsContactActivitySource : MapsSuggestionsBaseSource <MapsSuggestions.MapsSuggestionsContactActivityDelegate> {
    _TtC15MapsSuggestions30MapsSuggestionsContactActivity *_contactActivity;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (BOOL)isEnabled;
+ (unsigned long long)disposition;

- (BOOL)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;
- (id)initFromResourceDepot:(id)a0 name:(id)a1;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)contactActivityUpdated;
- (id)initWithContactActivity:(id)a0 delegate:(id)a1 name:(id)a2;

@end
