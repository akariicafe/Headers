@class NSString, NSDictionary, AVWeakReference, AVAudioSession, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_semaphore;

@interface AVCaptureFigAudioDevice : AVCaptureDevice {
    NSObject<OS_dispatch_queue> *_fcsQueue;
    struct OpaqueFigCaptureSource { } *_fcs;
    NSDictionary *_attributes;
    BOOL _levelMeteringEnabled;
    BOOL _isConnected;
    BOOL _isSoonToBeDisconnected;
    NSObject<OS_dispatch_queue> *_localizedNameFirstQueryQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _localizedNameLock;
    NSObject<OS_dispatch_group> *_localizedNameFirstQueryGroup;
    NSString *_localizedName;
    NSObject<OS_dispatch_queue> *_audioRoutesInfoUpdateQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _audioRoutesInfoLock;
    NSObject<OS_dispatch_group> *_audioRoutesInfoFirstQueryGroup;
    BOOL _audioInputRouteIsBuiltInMic;
    AVWeakReference *_weakReference;
    NSObject<OS_dispatch_semaphore> *_serverConnectionDiedSemaphore;
    NSString *_clientAudioClockDeviceUID;
    struct OpaqueCMClock { } *_sharedAVAudioSessionClock;
    AVAudioSession *_auxiliarySession;
}

+ (void)_reconnectDevices:(id)a0;
+ (id)_devices;
+ (void)initialize;
+ (id)_newFigCaptureSources;
+ (id)_devicesWithPriorRegisteredDevices:(id)a0;

- (struct OpaqueFigCaptureSource { } *)figCaptureSource;
- (id)init;
- (void)dealloc;
- (BOOL)isConnected;
- (id)_copyFigCaptureSourceProperty:(struct __CFString { } *)a0;
- (BOOL)supportsAVCaptureSessionPreset:(id)a0;
- (BOOL)currentAudioInputRouteIsBuiltInMic:(id)a0;
- (id)modelID;
- (id)figCaptureSourceAudioSettingsForSessionPreset:(id)a0;
- (void)setClientAudioClockDeviceUID:(id)a0;
- (BOOL)isAudioInputRouteBuiltInMic;
- (id)uniqueID;
- (BOOL)isBuiltInStereoAudioCaptureSupported;
- (BOOL)isSoonToBeDisconnected;
- (id)_initWithFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (BOOL)isAudioCaptureModeSupported:(long long)a0;
- (id)localizedName;
- (long long)fallbackAudioCaptureModeIfApplicableForCurrentRoute:(long long)a0;
- (BOOL)hasMediaType:(id)a0;
- (id)clientAudioClockDeviceUID;
- (BOOL)startUsingDevice:(id *)a0;
- (void)_handleNotification:(struct __CFString { } *)a0 payload:(id)a1;
- (void)_setFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (void)stopUsingDevice;
- (struct OpaqueCMClock { } *)deviceClock;
- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id)a0;
- (void)audioInputDevicesDidChangeHandler:(id)a0;
- (id)deviceType;
- (void)_reconnectToFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (BOOL)shouldAudioCaptureModeTriggerGraphRebuildOnAudioRouteChange:(long long)a0;

@end
