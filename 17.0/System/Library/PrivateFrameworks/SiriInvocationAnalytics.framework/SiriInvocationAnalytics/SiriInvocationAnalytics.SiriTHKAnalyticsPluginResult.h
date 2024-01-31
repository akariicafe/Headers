@class NSString, NSDictionary;

@interface SiriInvocationAnalytics.SiriTHKAnalyticsPluginResult : NSObject {
    void /* unknown type, empty encoding */ thkEventSummaries;
}

@property (class, nonatomic, readonly) NSString *numTHKEventsKey;
@property (class, nonatomic, readonly) NSString *thkEventSummariesKey;

@property (nonatomic) void /* unknown type, empty encoding */ numTHKEvents;
@property (nonatomic, copy) NSDictionary *thkEventSummaries;

- (id)init;
- (void).cxx_destruct;

@end
