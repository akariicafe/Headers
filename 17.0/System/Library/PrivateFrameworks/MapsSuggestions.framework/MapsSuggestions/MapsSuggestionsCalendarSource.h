@class NSString, MapsSuggestionsEventKit, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsCalendarSource : MapsSuggestionsBaseSource <MapsSuggestionsEventKitObserver, MapsSuggestionsPreloadableSource> {
    MapsSuggestionsEventKit *_eventKit;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MapsSuggestionsSourceDelegate> delegate;

+ (BOOL)isEnabled;
+ (unsigned long long)disposition;

- (BOOL)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (id)initWithDelegate:(id)a0 eventKit:(id)a1 name:(id)a2;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;
- (id)initFromResourceDepot:(id)a0 name:(id)a1;
- (void)start;
- (BOOL)suggestionsEntriesAtLocation:(id)a0 period:(id)a1 handler:(id /* block */)a2;
- (void)stop;
- (void).cxx_destruct;
- (void)eventKitDidChange:(id)a0;

@end
