@class NSString, NSArray, CMContinuityCaptureTransportSidecarDevice, NSObject;
@protocol OS_dispatch_queue, ContinuityCaptureTaskDelegate;

@interface CMContinuityCaptureSidecarTransportBase : NSObject <CMContinuityCaptureTransportMessaging> {
    NSObject<OS_dispatch_queue> *_queue;
    id<ContinuityCaptureTaskDelegate> _delegate;
    BOOL _pendingTimeSyncCallback;
    NSArray *_sidebandIdentfiers;
    NSArray *_mediaIdentfiers;
}

@property (readonly, retain) CMContinuityCaptureTransportSidecarDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugInfo;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setTaskDelegate:(id)a0;
- (void)sendMessage:(id)a0 message:(id)a1 completion:(id /* block */)a2;
- (void)_enqueueResponse:(id)a0 identifier:(id)a1;
- (void)createTimeSyncClockForSession:(id)a0 completion:(id /* block */)a1;
- (void)enqueueResponse:(id)a0 identifier:(id)a1;
- (id)initWithDevice:(id)a0 queue:(id)a1 taskDelegate:(id)a2;
- (void)resetDevice:(id)a0;
- (void)setupMediaSidecarStreamForIdentifier:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void)setupSidebandSidecarStreamForIdentifier:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void)setupSidecarStreams;
- (void)teardownSidecarStreams;

@end
