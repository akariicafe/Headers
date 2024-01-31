@class NSString, BKSProcessAssertion;

@interface _UIBackgroundTaskInfo : NSObject {
    unsigned long long _taskId;
    id /* block */ _expireHandler;
    BKSProcessAssertion *_processAssertion;
    NSString *_taskName;
    long long _creationTime;
    BOOL _alreadyWarnedAboutExpiration;
}

+ (id)backgroundTaskAssertionQueue;

- (void)dealloc;
- (void)invalidate;
- (void)fireExpirationHandler;
- (id)description;
- (void).cxx_destruct;
- (id)initWithProcessAssertion:(id)a0 taskName:(id)a1 expirationHandler:(id /* block */)a2;

@end
