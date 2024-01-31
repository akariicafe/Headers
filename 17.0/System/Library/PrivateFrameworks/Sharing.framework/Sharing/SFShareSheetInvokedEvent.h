@class NSString, NSDictionary;

@interface SFShareSheetInvokedEvent : NSObject <SFCoreAnalyticsEvent>

@property (class, readonly, copy, nonatomic) NSString *eventName;

@property (nonatomic) int daemonPID;
@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSString *suggestionsHash;
@property (nonatomic) long long numberOfSuggestions;
@property (nonatomic) long long durationInMS;
@property (nonatomic) long long cacheFileCount;
@property (nonatomic) long long totalCacheAccessCount;
@property (nonatomic) BOOL isDarkMode;
@property (nonatomic) BOOL isCollaborative;
@property (copy, nonatomic) NSDictionary *cacheAccessInfo;
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)submitEvent;

@end
