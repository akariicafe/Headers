@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDPCSKeySyncManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *keySyncTrackerByServiceNameByAccount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *keySyncQueue;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)_on_queue_createSyncTrackerForAccount:(id)a0 requestorOperationID:(id)a1 service:(id)a2 manatee:(BOOL)a3;
- (id)_on_queue_getKeySyncTrackerByServicenameForAccount:(id)a0;
- (void)_on_queue_performKeySyncWithSyncTracker:(id)a0 testableSyncConfig:(unsigned long long)a1 shouldThrottle:(BOOL)a2 testOverrideProvider:(id)a3 requestorOperationID:(id)a4 completionHandler:(id /* block */)a5;
- (id)_on_queue_syncTrackerForAccount:(id)a0 requestorOperationID:(id)a1 service:(id)a2 manatee:(BOOL)a3 shortThrottlePeriod:(BOOL)a4;
- (id)createSyncTrackerForAccount:(id)a0 requestorOperationID:(id)a1 service:(id)a2 manatee:(BOOL)a3;
- (void)getKeySyncEligibilityForService:(id)a0 isManatee:(BOOL)a1 account:(id)a2 lastModifiedDate:(id)a3 testOverrideProvider:(id)a4 completionHandler:(id /* block */)a5;
- (void)performKeySyncWithSyncTracker:(id)a0 testableSyncConfig:(unsigned long long)a1 shouldThrottle:(BOOL)a2 testOverrideProvider:(id)a3 requestorOperationID:(id)a4 completionHandler:(id /* block */)a5;
- (id)syncTrackerForAccount:(id)a0 requestorOperationID:(id)a1 service:(id)a2 manatee:(BOOL)a3 shortThrottlePeriod:(BOOL)a4;
- (void)syncUserKeysForService:(id)a0 context:(id)a1 bundleID:(id)a2 serviceIsManatee:(BOOL)a3 account:(id)a4 shouldThrottle:(BOOL)a5 testOverrideProvider:(id)a6 requestorOperationID:(id)a7 completionHandler:(id /* block */)a8;

@end
