@class NSMutableArray;

@interface VCBTNotificationMonitor : NSObject {
    NSMutableArray *_handlerArray;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _btNotificationHandlerLock;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)processBTNotification:(struct { char *x0; unsigned long long x1; } *)a0;
- (int)registerBTNotificationHandler:(id /* block */)a0;
- (void)registerDarwinNotification:(id)a0;
- (void)registerForBluetoothImmediateNotifications;
- (void)setupBTEventHandler;
- (void)unregisterAllBTNotificationHandlers;
- (void)unregisterBTNotificationHandler:(int)a0;
- (void)unregisterBluetoothImmediateNotifications;
- (void)unregisterDarwinNotification:(id)a0;

@end
