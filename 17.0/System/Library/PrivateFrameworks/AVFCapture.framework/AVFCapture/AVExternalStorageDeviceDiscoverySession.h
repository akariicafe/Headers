@class NSMutableArray, AVWeakReference;

@interface AVExternalStorageDeviceDiscoverySession : NSObject {
    struct OpaqueFigSimpleMutex { } *_lock;
    AVWeakReference *_weakReference;
    struct OpaqueFigExternalStorageDeviceManager { } *_externalStorageDeviceManager;
    NSMutableArray *_uuidOfExternalStorageDevice;
}

@property (class, readonly) AVExternalStorageDeviceDiscoverySession *sharedSession;
@property (class, readonly, getter=isSupported) BOOL supported;

@property (readonly) NSMutableArray *externalStorageDevices;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (int)_checkAuthorizationStatus;
- (void)_reconnectToServer;
- (void)_requestAuthorization:(id /* block */)a0;
- (int)_setupExternalStorageDeviceDiscoverySession;
- (void)_tearDownExternalStorageDeviceDiscoverySessionToReconnectToServer:(BOOL)a0;

@end
