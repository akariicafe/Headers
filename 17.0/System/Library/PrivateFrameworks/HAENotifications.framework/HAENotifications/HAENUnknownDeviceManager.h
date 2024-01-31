@class NSString;

@interface HAENUnknownDeviceManager : NSObject {
    BOOL _alertSupported;
    struct __CFUserNotification { } *_notification;
    NSString *_deviceName;
    NSString *_deviceUID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _connectionCnt;
    BOOL _alertPending;
    unsigned long long _adamSessionID;
    BOOL _isWiredUnknown;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isAlertSupported;
- (void)registerDevice:(id)a0;
- (id)getDeviceUID;
- (id)getDeviceName;
- (void)deviceSessionCreated:(id)a0 SessionID:(unsigned long long)a1;
- (void)surfaceAlertBox;
- (void)_processPrompt:(id)a0;
- (void)deviceSessionDestroyed:(id)a0 isWired:(BOOL)a1;
- (BOOL)_isUnknownWiredHeadset:(id)a0;
- (void)_processWiredDevice:(id)a0;
- (void)_resetWiredStatus;
- (BOOL)_shouldSurfaceAlert:(id)a0;
- (void)_updateMXVolumeLimitStatus:(id)a0;
- (void)_wiredDeviceSessionCreated:(id)a0 SessionID:(unsigned long long)a1;
- (void)_wiredDeviceSessionDestroyed:(id)a0;
- (void)_wiredDeviceSessionInit:(id)a0;
- (BOOL)isDeviceHeadphoneJack:(id)a0;
- (BOOL)isUSBCPort;
- (void)setDeviceConnectionState:(id)a0 isConnected:(BOOL)a1;
- (void)unknownWiredConnectionDidChange:(BOOL)a0;
- (BOOL)unknownWiredHeadsetConnectedThroughB204;
- (void)updateWiredDeviceStatus;

@end
