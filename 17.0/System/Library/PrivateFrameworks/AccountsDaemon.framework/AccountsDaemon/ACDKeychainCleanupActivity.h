@class NSObject, ACAccountStore;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface ACDKeychainCleanupActivity : NSObject {
    ACAccountStore *_accountStore;
    NSObject<OS_xpc_object> *_xpcActivity;
    NSObject<OS_dispatch_queue> *_activityQueue;
}

@property (class, readonly) ACDKeychainCleanupActivity *sharedActivity;

- (id)init;
- (void)_activityQueue_configureXPCActivityWithCriteria:(id)a0;
- (void)_activityQueue_checkIn;
- (BOOL)_removeExpiredCredentials;
- (void)_activityQueue_removeCredentialItem:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_activityQueue_removeExpiredCredentials;
- (void)checkInIfNecessary;
- (void).cxx_destruct;
- (void)_activityQueue_queueCredentialItemWithAccount:(id)a0 serviceName:(id)a1;
- (void)_activityQueue_registerXPCActivityWithCriteria:(id)a0;
- (void)queueNonPersistentCredentialRemoval:(id)a0;
- (void)_activityQueue_unregisterActivity;

@end
