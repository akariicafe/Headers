@class NSString;
@protocol MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsBaseSource : NSObject <MapsSuggestionsSource> {
    NSString *_name;
}

@property (weak, nonatomic) id<MapsSuggestionsSourceDelegate> delegate;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEnabled;
+ (unsigned long long)disposition;

- (BOOL)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (void)feedbackForEntry:(id)a0 action:(long long)a1;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;
- (void)feedbackForContact:(id)a0 action:(long long)a1;
- (void)feedbackForMapItem:(id)a0 action:(long long)a1;
- (id)initWithDelegate:(id)a0 name:(id)a1;
- (id)initFromResourceDepot:(id)a0 name:(id)a1;
- (double)updateSuggestionEntriesOfType:(long long)a0 handler:(id /* block */)a1;
- (id)initFromResourceDepot:(id)a0;
- (void)start;
- (unsigned long long)addOrUpdateMySuggestionEntries:(id)a0;
- (void)stop;
- (void).cxx_destruct;

@end
