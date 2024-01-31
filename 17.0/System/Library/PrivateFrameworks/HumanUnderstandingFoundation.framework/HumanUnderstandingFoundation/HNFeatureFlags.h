@interface HNFeatureFlags : NSObject

+ (BOOL)isContextualUnderstandingEnabled;
+ (BOOL)isContextualUnderstandingNotificationsEnabled;
+ (BOOL)isHumanUnderstandingDataCollectionEnabled;
+ (BOOL)isHumanUnderstandingEvidenceEnabled;

- (id)init;

@end
