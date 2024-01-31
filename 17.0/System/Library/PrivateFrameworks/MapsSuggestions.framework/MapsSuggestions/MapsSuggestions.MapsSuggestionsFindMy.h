@class NSArray, NSString, MapsSuggestionsEntry, CLLocation;

@interface MapsSuggestions.MapsSuggestionsFindMy : NSObject {
    void /* unknown type, empty encoding */ _connector;
}

- (id)init;
- (id)initFromResourceDepot:(id)a0;
- (void).cxx_destruct;
- (void)locationOf:(MapsSuggestionsEntry *)a0 completionHandler:(void (^)(CLLocation *))a1;
- (void)verifyFriendshipWith:(NSArray *)a0 completionHandler:(void (^)(NSString *))a1;

@end
