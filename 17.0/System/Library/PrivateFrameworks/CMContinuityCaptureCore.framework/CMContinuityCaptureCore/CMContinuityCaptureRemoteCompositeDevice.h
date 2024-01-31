@class AVCaptureVideoPreviewLayer, NSString, NSArray, NSDate, NSMutableDictionary, CMContinuityCaptureEventQueue, NSObject, NSMutableSet, NSMutableArray;
@protocol ContinuityCaptureDeviceServer, OS_dispatch_queue;

@interface CMContinuityCaptureRemoteCompositeDevice : NSObject <CMContinuityCaptureEventQueueActionDelegate, ContinuityCaptureTaskDelegate, CMContinuityCaptureCompositeDeviceDelegate> {
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_captureDeviceByEntityType;
    NSMutableDictionary *_cmControlByName;
    id<ContinuityCaptureDeviceServer> _server;
    CMContinuityCaptureEventQueue *_eventQueue;
    long long _state;
    long long _currentTransport;
    NSMutableSet *_remoteClientDisconnectNotifiedByEntityType;
    NSMutableSet *_pendingSidebandStreamIdentifiers;
    NSMutableArray *_pendingEventToBePostedQueue;
    _Atomic BOOL _sessionInvalidated;
    _Atomic BOOL _observingVideoSessionState;
    _Atomic BOOL _observingAudioSessionState;
    _Atomic BOOL _observingActiveStreamState;
    _Atomic BOOL _observingTimeSyncState;
    unsigned int _legacyConnectionResetDelay;
}

@property (readonly, retain) id<ContinuityCaptureDeviceServer> server;
@property (readonly) long long state;
@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, retain) CMContinuityCaptureEventQueue *eventQueue;
@property (readonly, retain) NSArray *controls;
@property (readonly, retain) NSArray *continuityCaptureDevices;
@property (readonly) unsigned long long currentSessionID;
@property (readonly) unsigned long long lastSessionID;
@property (readonly) NSDate *currentSessionActivationStartTime;

+ (void)setWombatMode:(BOOL)a0;

- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_invalidate;
- (void)invalidate;
- (id)debugInfo;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)_avcaptureDeviceSupportsDockKit;
- (void)_startStream:(id)a0 option:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)_aggregateEventPairInAnyState:(id)a0 entryEventName:(id)a1 exitEventName:(id)a2;
- (void)_postEvent:(id)a0 entity:(long long)a1 data:(id)a2;
- (void)_stopStream:(long long)a0 option:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)captureStillImage:(id)a0 entity:(long long)a1 completion:(id /* block */)a2;
- (void)connectionInterrupted:(id)a0 forDevice:(id)a1;
- (id)controlWithName:(id)a0;
- (void)device:(id)a0 updatedValueForControl:(id)a1;
- (void)didCaptureStillImage:(id)a0 entity:(long long)a1;
- (void)dispatchFrame:(struct opaqueCMSampleBuffer { } *)a0 entity:(long long)a1 completion:(id /* block */)a2;
- (void)enqueueReactionEffect:(id)a0 entity:(long long)a1;
- (void)handleAVCNegotiation:(long long)a0 data:(id)a1;
- (void)handleSynchronizeAudioClockCompletion;
- (id)initWithTransportServer:(id)a0 videoPreviewLayer:(id)a1;
- (void)postAggregatedCachedEventsIfApplicable;
- (void)postEvent:(id)a0 entity:(long long)a1 data:(id)a2;
- (BOOL)postEventAction:(unsigned long long)a0 args:(id)a1;
- (void)postEventOnAllEntities:(id)a0 data:(id)a1;
- (void)setValueForControl:(id)a0 completion:(id /* block */)a1;
- (BOOL)setupCaptureDevices;
- (void)setupControls;
- (void)startStream:(id)a0 option:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)stopStream:(long long)a0 option:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)synchronizeAudioClockWithSampleTime:(unsigned long long)a0 networkTime:(unsigned long long)a1 clockGrandMasterIdentifier:(unsigned long long)a2;
- (void)terminateCompleteForDevice:(id)a0;
- (void)updateStreamConnectStatus;
- (void)updateSystemState;

@end
