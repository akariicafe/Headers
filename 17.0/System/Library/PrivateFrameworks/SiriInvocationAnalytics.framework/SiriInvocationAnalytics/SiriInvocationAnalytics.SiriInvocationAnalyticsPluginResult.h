@class NSString, NSArray, NSDictionary;

@interface SiriInvocationAnalytics.SiriInvocationAnalyticsPluginResult : NSObject {
    void /* unknown type, empty encoding */ bookmarkName;
    void /* unknown type, empty encoding */ conversationIds;
    void /* unknown type, empty encoding */ vtEventIds;
    void /* unknown type, empty encoding */ vtEventSummaries;
}

@property (class, nonatomic, readonly) NSString *numConversationsKey;
@property (class, nonatomic, readonly) NSString *numVTEventsKey;
@property (class, nonatomic, readonly) NSString *bookmarkNameKey;
@property (class, nonatomic, readonly) NSString *conversationIdsKey;
@property (class, nonatomic, readonly) NSString *vtEventIdsKey;
@property (class, nonatomic, readonly) NSString *vtEventSummariesKey;
@property (class, nonatomic, readonly) NSString *bookmarkSavedKey;

@property (nonatomic) void /* unknown type, empty encoding */ numFeaturizedConversations;
@property (nonatomic) void /* unknown type, empty encoding */ numFeaturizedVoiceTriggerEvents;
@property (nonatomic, copy) NSString *bookmarkName;
@property (nonatomic, copy) NSArray *conversationIds;
@property (nonatomic, copy) NSArray *vtEventIds;
@property (nonatomic, copy) NSDictionary *vtEventSummaries;
@property (nonatomic) void /* unknown type, empty encoding */ bookmarkSaved;

- (id)init;
- (void).cxx_destruct;

@end
