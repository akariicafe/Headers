@class SidecarRequest, NSString, CMContinuityCaptureTransportSidecarDevice, NSDate, CMContinuityCaptureTimeSyncClock, NSObject;
@protocol OS_dispatch_queue, ContinuityCaptureTaskDelegate, ContinuityCaptureTransportDevice;

@interface CMContinuityCaptureSidecarServer : CMContinuityCaptureSidecarTransportBase <ContinuityCaptureDeviceServer> {
    SidecarRequest *_activeRequest;
    unsigned long long _currentSessionID;
    CMContinuityCaptureTransportSidecarDevice *_device;
    CMContinuityCaptureTimeSyncClock *_timeSyncClock;
    NSObject<OS_dispatch_queue> *_queue;
    id<ContinuityCaptureTaskDelegate> _delegate;
}

@property unsigned long long currentSessionID;
@property (readonly, retain) NSDate *sessionActivationStartTime;
@property (readonly) long long clientDeviceModel;
@property (readonly, retain) CMContinuityCaptureTimeSyncClock *timeSyncClock;
@property (readonly) long long currentTransport;
@property (readonly, retain) id<ContinuityCaptureTransportDevice> localDevice;
@property (weak) id<ContinuityCaptureTaskDelegate> delegate;
@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cancel;
- (void)_activate;
- (void)activate;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)_resetRequest:(id)a0;
- (void)relayTerminationComplete;
- (void)resetRequest:(id)a0;
- (void)setupMediaSidecarStreamForIdentifier:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void)setupSidebandSidecarStreamForIdentifier:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void)setupSidecarStreams;
- (void)teardownSidecarStreams;

@end
