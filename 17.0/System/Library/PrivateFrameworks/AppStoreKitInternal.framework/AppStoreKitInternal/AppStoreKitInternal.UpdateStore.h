@interface AppStoreKitInternal.UpdateStore : ASDSoftwareUpdatesStore {
    void /* unknown type, empty encoding */ notificationQueue;
    void /* unknown type, empty encoding */ coalesceUpdateNotifications;
    void /* unknown type, empty encoding */ notificationWorkItem;
}

- (id)init;
- (void)dealloc;
- (void)reloadFromServerWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)broadcastChangeNotificationIfNotCoalescing;

@end
