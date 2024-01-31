@class NSError, CKDLogicalDeviceContext, NSObject;
@protocol OS_dispatch_queue, NSObject;

@interface CKDAccountDataSecurityObserver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusQueue;
@property (nonatomic, setter=_lockedSetManateeAvailableForLoggedInAccount:) long long manateeAvailableForLoggedInAccount;
@property (copy, nonatomic) NSError *lastCDPErrorForManateeStatus;
@property (nonatomic) long long cachedWalrusStatusForLoggedInAccount;
@property (copy, nonatomic) NSError *lastCDPErrorForWalrusStatus;
@property (retain, nonatomic) id<NSObject> walrusStatusChangeObserver;
@property (weak, nonatomic) CKDLogicalDeviceContext *deviceContext;

+ (id)sharedWalrusController;

- (BOOL)isWalrusEnabledForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 error:(id *)a2;
- (void)dealloc;
- (BOOL)isManateeAvailableForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 error:(id *)a2;
- (void)handleWalrusStateChanged;
- (long long)_fetchManateeAvailability:(id *)a0;
- (void)postClouddWalrusUpdateNotification;
- (id)initWithDeviceContext:(id)a0;
- (void)handleManateeStatusUpdateNotificationWithAvailability:(id)a0;
- (void).cxx_destruct;
- (void)manateeStatusForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)walrusStatusForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 checkCache:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_lockedFetchAndUpdateManateeAvailability;
- (BOOL)isWalrusEnabledForAccount:(id)a0;
- (BOOL)accountSupportsManatee:(id)a0;

@end
