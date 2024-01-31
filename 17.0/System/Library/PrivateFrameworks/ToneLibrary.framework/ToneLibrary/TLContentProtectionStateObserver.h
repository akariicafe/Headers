@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TLContentProtectionStateObserver : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSMutableDictionary *_blocksScheduledForProtectedContentUnlockedEvent;
    long long _contentProtectionStatus;
    long long _unlockedSinceBootStatus;
    int _firstUnlockNotifyToken;
}

@property (class, readonly) TLContentProtectionStateObserver *sharedContentProtectionStateObserver;

- (id)init;
- (void)_updateUnlockedSinceBootStatus;
- (void)dealloc;
- (void)_handleFirstUnlockNotification;
- (void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)a0;
- (void)_registerFirstUnlockNotifyToken;
- (void)_assertNotRunningOnAccessQueue;
- (id)performBlockAfterProtectedContentUnlocked:(id /* block */)a0;
- (void)_cancelFirstUnlockNotifyToken;
- (void).cxx_destruct;
- (void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)a0;
- (void)_loadUnlockedSinceBootStatusIfNeeded;
- (void)_loadContentProtectionStatusIfNeeded;
- (id)_performBlockAfterProtectedContentUnlocked:(id /* block */)a0;
- (long long)_queryCurrentUnlockedSinceBootStatus;
- (void)_assertRunningOnAccessQueue;

@end
