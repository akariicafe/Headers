@class NSMutableDictionary, RCUnfairLock;

@interface RCURLSession : NSObject

@property (retain, nonatomic) NSMutableDictionary *backgroundSessions;
@property (retain, nonatomic) RCUnfairLock *backgroundSessionsLock;

+ (id)_sharedSession;
+ (void)_configureURLSessionConfiguration:(id)a0;
+ (id)backgroundSessionForFetchConfig:(id)a0 delegateReference:(id *)a1;
+ (id)backgroundSessionWithIdentifier:(id)a0 sharedContainerIdentifier:(id)a1 timeout:(double)a2 delegateReference:(id *)a3;
+ (id)backgroundSessionsLock;
+ (void)cancelAllTasksOnBackgroundSessionWithFetchConfig:(id)a0 completion:(id /* block */)a1;
+ (id)sharedForegroundSession;

- (id)init;
- (void).cxx_destruct;

@end
