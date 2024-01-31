@interface _DKSyncErrors : NSObject

+ (id)disabled;
+ (id)domain;
+ (id)invalidResponse;
+ (id)internalFailure;
+ (id)couldNotSaveForSync;
+ (id)failedToApplyRemoteChanges;
+ (id)failedToFetchChanges;
+ (id)invalidData;
+ (id)invalidRequest;
+ (id)missingHighWaterMark;
+ (id)temporaryFailure;
+ (id)unavailableForCurrentUser;

@end
