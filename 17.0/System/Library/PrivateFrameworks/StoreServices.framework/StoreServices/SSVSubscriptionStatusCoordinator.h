@class NSMutableArray, SSVSubscriptionStatusRequest, NSDate, NSObject, SSVSubscriptionStatus;
@protocol OS_dispatch_queue;

@interface SSVSubscriptionStatusCoordinator : NSObject {
    SSVSubscriptionStatusRequest *_activeRequest;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _didReset;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSVSubscriptionStatus *_lastKnownStatus;
    NSDate *_lastStatusDate;
    int _notificationToken;
    long long _subscriptionStatusAccessPolicy;
    NSMutableArray *_statusBlocks;
}

@property (readonly, copy) SSVSubscriptionStatus *lastKnownStatus;

+ (void)updateUserDefaultsWithStatus:(id)a0;
+ (void)beginSuspendingSubscriptionStatusChangeNotifications;
+ (id)_existingSharedCoordinator;
+ (void)sendChangeNotification;
+ (void)removeUserDefaultsForAccountIdentifier:(id)a0;
+ (id)copyStatusFromUserDefaults;
+ (id)sharedCoordinator;
+ (id)_changeNotificationSuspensionAccessQueue;
+ (void)updateWithResponseDictionary:(id)a0 accountIdentifier:(id)a1;
+ (void)_sendChangeNotification;
+ (void)endSuspendingSubscriptionStatusChangeNotifications;

- (id)init;
- (void)reset;
- (void)dealloc;
- (void)_deviceStoreFrontChangedNotification;
- (void)_updateSubscriptionStatusAccessPolicyAllowingNotification:(BOOL)a0;
- (void)_validateLastKnownStatus;
- (id)_copyValidStatusForStatus:(id)a0;
- (void)_invalidateLastKnownStatus;
- (void).cxx_destruct;
- (void)modifyLastKnownStatusUsingBlock:(id /* block */)a0;
- (void)_accountStoreChangedNotification;
- (id)_copyStatusFromUserDefaults;
- (void)getStatusWithOptions:(id)a0 statusBlock:(id /* block */)a1;
- (void)_handleRequestResponseWithStatus:(id)a0 isFinal:(BOOL)a1 error:(id)a2;
- (void)_externalChangeNotification;
- (id)_copyStatusDateFromUserDefaults;
- (void)_fireStatusBlocksWithStatus:(id)a0 isFinal:(BOOL)a1 error:(id)a2;

@end
