@class HMDCameraStreamMetrics, NSUUID, HMDCameraMediaConfigGenerator, HMDCameraRemoteStreamSession, NSString, NSNumber, HMDCameraResidentMessageHandler;

@interface HMDCameraRemoteStreamControlManager : HMDCameraStreamControlManager <HMDStreamingManagerDelegate, HMDCameraIDSSessionReceiverDelegate, HMDCameraIDSDeviceConnectionReceiverDelegate, HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraStreamControlManagerProtocol>

@property (readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier;
@property (readonly, copy, nonatomic) HMDCameraResidentMessageHandler *residentMessageHandler;
@property (readonly) HMDCameraMediaConfigGenerator *configGenerator;
@property (retain) HMDCameraRemoteStreamSession *streamSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long audioStreamSetting;
@property (readonly, copy) NSNumber *aspectRatio;
@property (readonly, copy) NSNumber *slotIdentifier;
@property (readonly) HMDCameraStreamMetrics *streamMetrics;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_streamStarted;
- (void)_dispatchReconfigureToResident:(id)a0;
- (void)negotiateStream;
- (void)_cleanUpStreamSessionWithError:(id)a0;
- (void)_startStreamWithRemoteSettings:(id)a0;
- (void)_dispatchStartRequestToResidentWithVideoSSRC:(id)a0 audioSSRC:(id)a1;
- (void)_idsSessionCreatedAndConfigNegotiated;
- (void)_negotiateStream;
- (void)_reconfigureStream:(id)a0;
- (void)_reconfigureStreams;
- (void)_relaySessionStarted:(id)a0;
- (void)_sendStopMessageToResident;
- (void)_sendUpdatedConfiguration;
- (void)_setParametersSelected:(id)a0;
- (void)_setUpRemoteConnectionWithDevice:(id)a0;
- (void)_stopCurrentStreamSessionWithError:(id)a0;
- (void)deviceConnectionReceiver:(id)a0 didEndSessionWithError:(id)a1;
- (void)deviceConnectionReceiver:(id)a0 didSetUpWithError:(id)a1;
- (void)deviceConnectionSender:(id)a0 didEndSessionWithError:(id)a1;
- (void)deviceConnectionSender:(id)a0 didSetUpWithError:(id)a1;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 streamSnapshotHandler:(id)a2 delegate:(id)a3 delegateQueue:(id)a4 accessory:(id)a5 streamManagementService:(id)a6 profileUniqueIdentifier:(id)a7 residentMessageHandler:(id)a8 streamSession:(id)a9;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 streamSnapshotHandler:(id)a2 reachabilityPath:(unsigned long long)a3 device:(id)a4 delegate:(id)a5 delegateQueue:(id)a6 accessory:(id)a7 streamManagementService:(id)a8 remoteCapabilities:(id)a9 profileUniqueIdentifier:(id)a10 residentMessageHandler:(id)a11 remoteAccessDevice:(id)a12 streamPreference:(id)a13;
- (void)reconfigureStream:(id)a0;
- (void)sessionReceiver:(id)a0 didEndSessionWithError:(id)a1;
- (void)sessionReceiver:(id)a0 didSetUpWithError:(id)a1;
- (void)setUpRemoteConnectionWithDevice:(id)a0;
- (void)startStreamWithRemoteSettings:(id)a0;
- (void)stopStreamWithError:(id)a0;
- (void)streamingManager:(id)a0 didStartStreamWithError:(id)a1;
- (void)streamingManagerDidNetworkDeteriorate:(id)a0;
- (void)streamingManagerDidNetworkImprove:(id)a0;
- (void)streamingManagerDidReceiveFirstFrame:(id)a0;
- (void)streamingManagerDidStopStream:(id)a0 error:(id)a1;
- (void)streamingManagerDidUpdateConfiguration:(id)a0;
- (void)updateAudioSetting:(unsigned long long)a0;
- (void)updateAudioVolume:(id)a0 callback:(id /* block */)a1;

@end
