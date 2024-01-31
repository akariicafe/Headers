@class NSLock;

@interface SUScriptNotificationObserver : NSObject {
    NSLock *_lock;
    struct __CFSet { } *_receivers;
}

- (id)init;
- (void)dealloc;
- (void)_subscriptionStatusDidChangeNotification:(id)a0;
- (void)_accessibilityPerformEscape;
- (void)_memoryWarningNotification:(id)a0;
- (void)_purchaseRequestDidSucceedNotification:(id)a0;
- (void)_restrictionsChangedNotification:(id)a0;
- (void)_beginObservingNotifications;
- (void)_accessibilityPerformScrollLeft;
- (void)_accessibilityPerformScrollDown;
- (void)_storeBagDidChangeNotification:(id)a0;
- (void)_accessibilityPerformScrollRight;
- (void)_accessibilityPerformScrollUp;
- (void)_audioSessionsChangedNotification:(id)a0;
- (id)_copySafariQueryDictionaryFromURL:(id)a0;
- (void)_dispatchEvent:(id)a0 forName:(id)a1;
- (void)_dispatchEventWithDictionary:(id)a0 forName:(id)a1;
- (void)_dispatchSafariEventWithDictionary:(id)a0 andIdentifier:(id)a1;
- (void)_endObservingNotifications;
- (void)_enumerateReceiversUsingBlock:(id /* block */)a0;
- (void)_networkTypeChangedNotification:(id)a0;
- (void)_safariViewControllerDataUpdate:(id)a0;
- (void)_softwareMapChangedNotification:(id)a0;
- (void)addEventReceiver:(id)a0;
- (void)removeEventReceiver:(id)a0;

@end
