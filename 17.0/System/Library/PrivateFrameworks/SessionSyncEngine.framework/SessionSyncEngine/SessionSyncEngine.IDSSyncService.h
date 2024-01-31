@interface SessionSyncEngine.IDSSyncService : NSObject {
    void /* unknown type, empty encoding */ idsServiceWrapper;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ _queue_delegates;
    void /* unknown type, empty encoding */ _queue_pairedDevice;
    void /* unknown type, empty encoding */ pairedDeviceNotificationToken;
}

- (void)pairedDeviceStateChangedWithNotification:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
