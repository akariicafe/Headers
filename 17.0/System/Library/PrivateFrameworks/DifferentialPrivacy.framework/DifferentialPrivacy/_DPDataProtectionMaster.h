@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _DPDataProtectionMaster : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly, nonatomic) BOOL deviceFormatedForContentProtection;
@property (readonly, nonatomic) NSMutableDictionary *handlers;
@property (readonly, nonatomic) NSMutableDictionary *availableState;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (readonly, nonatomic) int notifyToken;
@property (readonly, nonatomic) BOOL notifyEnabled;

+ (id)sharedInstance;

- (id)init;
- (BOOL)deviceIsPasswordConfigured;
- (void)dealloc;
- (void)deregisterStateChangeHandler:(id)a0;
- (BOOL)isDataAvailableFor:(id)a0;
- (void).cxx_destruct;
- (id)registerStateChangeHandler:(id /* block */)a0;
- (BOOL)isDataAvailableForClassC;
- (BOOL)deviceHasBeenUnlockedSinceBoot;
- (void)handleKeyBagLockNotification;
- (BOOL)isDataAvailableForClassA;
- (BOOL)deviceIsLocked;

@end
