@class NSString;

@interface MapsSuggestions.MapsSuggestionsContactActivity : NSObject <MapsSuggestionsObject> {
    void /* unknown type, empty encoding */ _biome;
    void /* unknown type, empty encoding */ _contacts;
    void /* unknown type, empty encoding */ _findMy;
    void /* unknown type, empty encoding */ _networkRequester;
    void /* unknown type, empty encoding */ _queue;
    void /* unknown type, empty encoding */ _cacheForMapItems;
    void /* unknown type, empty encoding */ uniqueName;
}

@property (nonatomic, copy) NSString *uniqueName;
@property (nonatomic, weak) void /* unknown type, empty encoding */ contactActivityDelegate;

- (id)init;
- (id)initFromResourceDepot:(id)a0;
- (void).cxx_destruct;
- (void)contactActivityEntriesWith:(id /* block */)a0;

@end
