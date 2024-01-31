@class RBSProcessMonitor, RBSDomainAttribute, NSMutableDictionary, NSObject, RBSAssertion;
@protocol OS_os_transaction, OS_dispatch_queue;

@interface CMPhotoProcessMonitor : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic) BOOL gotRBSConnectionError;
@property (retain, nonatomic) RBSDomainAttribute *domainAttribute;
@property (retain, nonatomic) RBSProcessMonitor *processMonitor;
@property (retain, nonatomic) RBSAssertion *latestAssertion;
@property (retain, nonatomic) NSObject<OS_os_transaction> *latestTransaction;
@property (nonatomic) unsigned long long assertionHeldToTime;
@property (retain, nonatomic) NSMutableDictionary *heldAssertions;
@property (retain, nonatomic) NSMutableDictionary *backgroundNotificationBlocks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processMonitorSyncQueue;

+ (BOOL)isManagedByRunningBoard;
+ (BOOL)isForegroundApp;
+ (id)getShared;

- (id)init;
- (void)dealloc;
- (int)takeAssertionUntilTime:(unsigned long long)a0 forContext:(void *)a1;
- (void)waitForPendingNotifications;
- (int)unregisterBackgroundNotificationForContext:(void *)a0;
- (int)registerBackgroundNotificationHandlerForContext:(void *)a0 handler:(id /* block */)a1;
- (void)_createRBSMonitorIfNeeded;
- (void)_takeRBSAssertionForContext:(void *)a0 until:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (int)releaseAssertionForContext:(void *)a0;
- (void)_handleBackgroundingNotification;
- (void)_takeOSTransactionForContext:(void *)a0;

@end
