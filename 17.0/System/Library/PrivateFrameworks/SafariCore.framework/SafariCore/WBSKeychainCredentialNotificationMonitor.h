@class NSString, NSMutableDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WBSKeychainCredentialNotificationMonitor : NSObject <WBSKeychainCredentialNotificationMonitor> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_observers;
    int _keychainChangedNotificationToken;
    double _coalescingInterval;
    NSDate *_lastNotificationTime;
    NSObject<OS_dispatch_source> *_coalescingTimer;
    id _keybagUnlockStatusChangedToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_notifyObservers;
- (void)removeObserverForToken:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)triggerExternalNotification;
- (void)_cancelCoalescingTimer;
- (void)_notifyKeybagUnlocked;
- (void)_notifyKeychainUpdated;
- (id)addObserverWithBlock:(id /* block */)a0;
- (id)initWithCoalescingInterval:(double)a0;
- (void)notifyModernKeychainUpdated;

@end
