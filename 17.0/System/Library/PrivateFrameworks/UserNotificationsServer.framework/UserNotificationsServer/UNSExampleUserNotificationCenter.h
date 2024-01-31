@class UNUserNotificationCenter, PTTestRecipe;

@interface UNSExampleUserNotificationCenter : NSObject {
    UNUserNotificationCenter *_userNotificationCenter;
    PTTestRecipe *_basicTestRecipe;
}

- (void)publish;
- (id)init;
- (void)publish:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)publish:(unsigned long long)a0 numberOfUniqueThreads:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)update;
- (id)_basicPostUpdateRecipe;
- (id)sectionIdentifier;
- (void)publishWithNumberOfUniqueThreads:(unsigned long long)a0;
- (id)_userNotificationCenter;
- (void).cxx_destruct;
- (void)removeAllNotifications;
- (id)_newNotificationRequest:(id)a0 threadIdentifier:(id)a1;
- (id)latestNotificationRequestIdentifier;
- (void)_postNotificationWithID:(id)a0 threadIdentifier:(id)a1;
- (id)_existingNotificationRequestForIdentifier:(id)a0;

@end
