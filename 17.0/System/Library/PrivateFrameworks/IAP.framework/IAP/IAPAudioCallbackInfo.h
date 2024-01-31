@class CPDistributedNotificationCenter, NSLock;

@interface IAPAudioCallbackInfo : NSObject {
    void /* function */ *_deviceStateChangedCallback;
    void *_deviceStateChangedContext;
    void /* function */ *_volumeChangedCallback;
    void *_volumeChangedContext;
    void /* function */ *_pauseOnHeadphoneDisconnectChangedCallback;
    void *_pauseOnHeadphoneDisconnectChangedContext;
    void /* function */ *_volumeControlSupportChangedCallback;
    void *_volumeControlSupportChangedContext;
    CPDistributedNotificationCenter *_dnCenter;
    CPDistributedNotificationCenter *_dnCenteriAP2;
    struct __CFRunLoop { } *_dnCenterRunLoop;
    NSLock *_lock;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)clearDeviceStateChangedCallback;
- (void)_volumeChanged:(id)a0;
- (void)_deviceStateChanged:(id)a0;
- (void)_handleiAPDaemonDied:(id)a0;
- (void)_pauseOnHeadphoneDisconnectChanged:(id)a0;
- (void)_volumeControlSupportChanged:(id)a0;
- (void)clearPauseOnHeadphoneDisconnectChangedCallback;
- (void)clearVolumeChangedCallback;
- (void)clearVolumeControlSupportChangedCallback;
- (void)setupDeviceStateChangedCallback:(void /* function */ *)a0 withContext:(void *)a1 andRunLoop:(struct __CFRunLoop { } *)a2;
- (void)setupPauseOnHeadphoneDisconnectChangedCallback:(void /* function */ *)a0 withContext:(void *)a1 andRunLoop:(struct __CFRunLoop { } *)a2;
- (void)setupVolumeChangedCallback:(void /* function */ *)a0 withContext:(void *)a1 andRunLoop:(struct __CFRunLoop { } *)a2;
- (void)setupVolumeControlSupportChangedCallback:(void /* function */ *)a0 withContext:(void *)a1 andRunLoop:(struct __CFRunLoop { } *)a2;
- (void)startNotificationCenterOnRunLoop:(struct __CFRunLoop { } *)a0;

@end
