@class NSString, CLLocation, NSArray;

@interface MapsSuggestions.MapsSuggestionsRealFindMyConnector : NSObject <MapsSuggestions.MapsSuggestionsFindMyConnector> {
    void /* unknown type, empty encoding */ uniqueName;
    void /* unknown type, empty encoding */ findMySession;
}

@property (nonatomic, copy) NSString *uniqueName;

- (id)init;
- (void).cxx_destruct;
- (void)latestLocationFor:(NSString *)a0 completionHandler:(void (^)(CLLocation *))a1;
- (void)listOfFriendsWithCompletionHandler:(void (^)(NSArray *))a0;
- (void)locationFor:(NSString *)a0 completionHandler:(void (^)(CLLocation *))a1;

@end
