@class NSString;

@interface PLServerChangePublisher : NSObject <PLChangePublisher> {
    _Atomic long long _postCount;
    _Atomic BOOL _hasPendingWatchNotification;
    _Atomic BOOL _suppressWatchNotification;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)pauseLaunchEventNotifications;
- (void)distributeChangeEvent:(id)a0 transaction:(id)a1;
- (void)_postWatchUpdateNotificationIfPending;
- (void)_postWatchUpdateNotificationIfNotPaused;
- (void)_postChangeHubNotification;
- (id)publishChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 transaction:(id)a2;
- (void)unpauseLaunchEventNotifications;
- (void)_postWatchUpdateNotification;

@end
