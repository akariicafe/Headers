@class NSString, NSArray, CLLocation;

@interface MapsSuggestions.MapsSuggestionsFakeFindMyConnector : NSObject <MapsSuggestions.MapsSuggestionsFindMyConnector> {
    void /* unknown type, empty encoding */ uniqueName;
    void /* unknown type, empty encoding */ friends;
}

@property (nonatomic, copy) NSString *uniqueName;
@property (nonatomic, copy) NSArray *friends;
@property (nonatomic, retain) void /* unknown type, empty encoding */ cachedLocation;
@property (nonatomic, retain) void /* unknown type, empty encoding */ refreshedLocation;

- (id)init;
- (void).cxx_destruct;
- (void)expireCachedLocation;
- (void)latestLocationFor:(NSString *)a0 completionHandler:(void (^)(CLLocation *))a1;
- (void)listOfFriendsWithCompletionHandler:(void (^)(NSArray *))a0;
- (void)locationFor:(NSString *)a0 completionHandler:(void (^)(CLLocation *))a1;
- (void)nilCachedLocation;
- (void)setCachedLocation;
- (void)setTestFriends;

@end
