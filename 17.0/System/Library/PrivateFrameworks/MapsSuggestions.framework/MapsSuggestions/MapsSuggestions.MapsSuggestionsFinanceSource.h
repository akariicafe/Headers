@interface MapsSuggestions.MapsSuggestionsFinanceSource : MapsSuggestionsBaseSource <MapsSuggestionsObject> {
    void /* unknown type, empty encoding */ _delegate;
    void /* unknown type, empty encoding */ _financeKit;
    void /* unknown type, empty encoding */ _updateCompleteHandler;
    void /* unknown type, empty encoding */ queue;
}

+ (BOOL)isEnabled;
+ (unsigned long long)disposition;

- (char)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;
- (id)init;
- (id)initWithDelegate:(id)a0 name:(id)a1;
- (id)initFromResourceDepot:(id)a0 name:(id)a1;
- (double)updateSuggestionEntriesOfType:(long long)a0 handler:(id /* block */)a1;
- (id)initFromResourceDepot:(id)a0;
- (void)start;
- (void)stop;
- (void).cxx_destruct;

@end
