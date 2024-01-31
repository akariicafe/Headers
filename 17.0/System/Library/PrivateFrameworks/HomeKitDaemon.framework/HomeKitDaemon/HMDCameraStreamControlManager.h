@class HMDCameraStreamSessionID, NSString, HMDAccessory, HMDCameraStreamMetrics, HMDCameraStreamSnapshotHandler, NSObject, HMDService;
@protocol OS_dispatch_queue, HMDCameraStreamControlManagerDelegate;

@interface HMDCameraStreamControlManager : HMFObject <HMFLogging>

@property (weak) id<HMDCameraStreamControlManagerDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (weak) HMDAccessory *accessory;
@property (readonly, nonatomic) HMDService *streamManagementService;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID;
@property (readonly, nonatomic) HMDCameraStreamSnapshotHandler *streamSnapshotHandler;
@property (readonly, nonatomic) HMDCameraStreamMetrics *streamMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)managerProtocol;
- (void)_cleanUpStreamSessionWithError:(id)a0;
- (void)_callStreamFirstFrameReceived;
- (void)_callStreamNegotiated:(id)a0;
- (void)_callStreamReconfigured;
- (void)_callStreamRemoteConnectionSetup;
- (void)_callStreamStarted;
- (void)_callStreamStoppedWithError:(id)a0;
- (void)_reportErrorCode:(long long)a0;
- (void)_reportInternalErrorCode:(long long)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 streamSnapshotHandler:(id)a2 delegate:(id)a3 delegateQueue:(id)a4 accessory:(id)a5 streamManagementService:(id)a6 isLocal:(BOOL)a7;

@end
