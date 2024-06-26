@class NSUUID, NSString, NSArray, CMContinuityCaptureCapabilities, RPRemoteDisplayDevice, CMContinuityCaptureMagicStateMonitor, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CMContinuityCaptureTransportRapportDevice : NSObject <ContinuityCaptureTransportDevice> {
    RPRemoteDisplayDevice *_device;
    CMContinuityCaptureCapabilities *_capabilities;
    BOOL _remote;
    unsigned long long _deviceMajorVersion;
    unsigned long long _deviceMinorVersion;
    BOOL _nearby;
    BOOL _allFeaturesSupported;
    BOOL _userDisconnected;
    NSMutableDictionary *_activeStreams;
    CMContinuityCaptureMagicStateMonitor *_magicStateMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_sidebandQueue;
    BOOL _active;
    NSUUID *_deviceUUID;
    BOOL _sessionInterrupted;
    BOOL _streamIntent;
    BOOL _placementStepSkipped;
    NSMutableArray *_rpCompanionSidebandSessions;
    BOOL _terminationDeferred;
    BOOL _disconnectedWhileWired;
}

@property (readonly, retain) RPRemoteDisplayDevice *device;
@property (readonly, retain) NSUUID *deviceIdentifier;
@property (readonly, retain) NSString *deviceName;
@property (readonly) unsigned long long deviceStatus;
@property (readonly, retain) NSString *deviceModel;
@property (readonly) long long deviceModelType;
@property (readonly) BOOL usable;
@property unsigned long long deviceMajorVersion;
@property unsigned long long deviceMinorVersion;
@property (retain) CMContinuityCaptureCapabilities *capabilities;
@property BOOL nearby;
@property (readonly) BOOL wired;
@property (readonly) BOOL allFeaturesSupported;
@property BOOL userDisconnected;
@property (readonly) BOOL wifiP2pActive;
@property (readonly, retain) NSArray *activeStreams;
@property (readonly) BOOL active;
@property (readonly, retain) CMContinuityCaptureMagicStateMonitor *magicStateMonitor;
@property (readonly) BOOL remote;
@property (nonatomic) BOOL sessionInterrupted;
@property (readonly) BOOL guest;
@property (nonatomic, getter=hasStreamIntent) BOOL streamIntent;
@property (nonatomic, getter=isPlacementStepSkipped) BOOL placementStepSkipped;
@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property BOOL terminationDeferred;
@property (readonly) BOOL canDeferTermination;
@property (readonly) BOOL canReconnect;
@property (nonatomic) BOOL legacyReconnectRecovery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)queryCameraCapabilitiesFromRemoteDevice:(id)a0 transport:(long long)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addStream:(id)a0;
- (void)_startStream:(id)a0 option:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_setValueForControl:(id)a0 completion:(id /* block */)a1;
- (void)_didCaptureStillImage:(id)a0 entity:(long long)a1;
- (void)_handleAVCNegotiation:(long long)a0 data:(id)a1;
- (void)_postEvent:(id)a0 entity:(long long)a1 data:(id)a2;
- (void)_relaySidebandMessageType:(id)a0 overTransport:(long long)a1;
- (void)_stopStream:(long long)a0 option:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_synchronizeAudioClockWithSampleTime:(unsigned long long)a0 networkTime:(unsigned long long)a1 clockGrandMasterIdentifier:(unsigned long long)a2;
- (id)activeStreamForIdentifier:(id)a0;
- (void)captureStillImage:(id)a0 entity:(long long)a1 completion:(id /* block */)a2;
- (void)connectionInterrupted:(id)a0 forDevice:(id)a1;
- (void)didCaptureStillImage:(id)a0 entity:(long long)a1;
- (BOOL)disconnectedWhileWired;
- (void)dispatchFrame:(struct opaqueCMSampleBuffer { } *)a0 entity:(long long)a1 completion:(id /* block */)a2;
- (void)enqueueReactionEffect:(id)a0 entity:(long long)a1;
- (void)handleAVCNegotiation:(long long)a0 data:(id)a1;
- (void)handleSynchronizeAudioClockCompletion;
- (id)initWithRapportDevice:(id)a0 capabilities:(id)a1 remote:(BOOL)a2;
- (void)notifyDeviceStateChange;
- (void)postEvent:(id)a0 entity:(long long)a1 data:(id)a2;
- (void)postEvent:(id)a0 entity:(long long)a1 data:(id)a2 forTransport:(long long)a3;
- (void)preLaunchShieldUIForTransport:(long long)a0 data:(id)a1;
- (void)relaySkipPlacementStepForTranport:(long long)a0;
- (void)relayUserDisconnectForTransport:(long long)a0 reason:(id)a1 shieldSessionID:(id)a2;
- (void)removeStream:(id)a0;
- (void)resetDevice:(id)a0;
- (void)setValueForControl:(id)a0 completion:(id /* block */)a1;
- (void)startStream:(id)a0 option:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)stopStream:(long long)a0 option:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)synchronizeAudioClockWithSampleTime:(unsigned long long)a0 networkTime:(unsigned long long)a1 clockGrandMasterIdentifier:(unsigned long long)a2;
- (void)teardownActiveRapportStreams;
- (void)updateSystemState;

@end
