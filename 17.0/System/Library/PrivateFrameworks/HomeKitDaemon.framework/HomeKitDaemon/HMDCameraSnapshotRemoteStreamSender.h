@class HMDCameraSnapshotLocal, HMDCameraSnapshotIDSStreamInitiator, NSString;
@protocol HMDCameraSnapshotRemoteStreamSenderDelegate;

@interface HMDCameraSnapshotRemoteStreamSender : HMDCameraSnapshotSender <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotSenderProtocol, HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotIDSStreamInitiatorDelegate, HMFLogging>

@property (readonly, nonatomic) HMDCameraSnapshotLocal *snapshotLocal;
@property (readonly, weak, nonatomic) id<HMDCameraSnapshotRemoteStreamSenderDelegate> delegate;
@property (readonly, nonatomic) HMDCameraSnapshotIDSStreamInitiator *streamInitiator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_callDidCompleteSendImageDelegate:(id)a0;
- (void)_callDidStartCaptureImageDelegate:(id)a0;
- (void)getSnapshot:(unsigned long long)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 device:(id)a2 accessory:(id)a3 delegate:(id)a4 delegateQueue:(id)a5 uniqueIdentifier:(id)a6 snapshotRequestHandler:(id)a7;
- (void)sendSnapshotAtPath:(id)a0;
- (void)snapShotTransferComplete;
- (void)snapshotLocal:(id)a0 didSaveSnapshotFile:(id)a1 error:(id)a2 sessionID:(id)a3;
- (void)streamInitiator:(id)a0 didFailToSendFileWithError:(id)a1;

@end
