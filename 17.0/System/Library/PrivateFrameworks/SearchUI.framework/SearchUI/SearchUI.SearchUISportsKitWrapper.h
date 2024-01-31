@interface SearchUI.SearchUISportsKitWrapper : NSObject

+ (void)checkForSessionWithCanonicalId:(id)a0 completionBlock:(id /* block */)a1;
+ (void)createSessionWithCanonicalId:(id)a0 completionBlock:(id /* block */)a1;
+ (void)destroySessionWithCanonicalId:(id)a0 completionBlock:(id /* block */)a1;
+ (void)liveActivitiesEnabledWithCompletionBlock:(id /* block */)a0;

- (id)init;

@end
