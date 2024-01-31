@interface CDPKeychainSync : NSObject

+ (void)setUserVisibleKeychainSyncEnabled:(BOOL)a0 withCompletion:(id /* block */)a1;
+ (void)removeNonViewAwarePeersFromCircleWithContext:(id)a0 completion:(id /* block */)a1;
+ (BOOL)isUserVisibleKeychainSyncEnabled;
+ (void)synchronizeKeychainSyncForContext:(id)a0 withCompletion:(id /* block */)a1;

@end
