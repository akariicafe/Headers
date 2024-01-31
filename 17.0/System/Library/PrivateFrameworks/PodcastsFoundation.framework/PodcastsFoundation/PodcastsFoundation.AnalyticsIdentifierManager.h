@class NSString, _TtC18PodcastsFoundation26AnalyticsIdentifierManager;

@interface PodcastsFoundation.AnalyticsIdentifierManager : NSObject {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ promiseLock;
}

@property (class, nonatomic, readonly) NSString *kMTResetIdentifierKey;
@property (class, nonatomic, readonly) _TtC18PodcastsFoundation26AnalyticsIdentifierManager *sharedInstance;

@property (nonatomic) void /* unknown type, empty encoding */ accountsMatch;
@property (nonatomic, retain) void /* unknown type, empty encoding */ identifierPromise;

- (id)init;
- (void).cxx_destruct;
- (void)resetIfNeeded;
- (void)resetIdentifiers;
- (void)updateIdentifiers;

@end
