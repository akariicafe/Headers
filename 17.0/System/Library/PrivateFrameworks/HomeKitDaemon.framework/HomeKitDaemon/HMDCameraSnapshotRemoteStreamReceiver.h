@class NSString, HMDCameraSnapshotIDSStreamReceiver;
@protocol HMDCameraSnapshotRemoteStreamReceiverDelegate;

@interface HMDCameraSnapshotRemoteStreamReceiver : HMDCameraSnapshotReceiver <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotIDSStreamReceiverDelegate, HMFLogging>

@property (readonly, weak, nonatomic) id<HMDCameraSnapshotRemoteStreamReceiverDelegate> delegate;
@property (retain, nonatomic) HMDCameraSnapshotIDSStreamReceiver *relayReceiver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_callDidSaveImageDelegateWithError:(id)a0;
- (void)_callGettingImageDelegate:(id)a0;
- (void)_getSnapshot:(unsigned long long)a0;
- (void)getSnapshot:(unsigned long long)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 accessory:(id)a2 delegate:(id)a3 delegateQueue:(id)a4 uniqueIdentifier:(id)a5 snapshotRequestHandler:(id)a6 residentMessageHandler:(id)a7 remoteDevice:(id)a8;
- (void)snapShotSendFailed:(id)a0;
- (void)streamReceiver:(id)a0 didReceiveFileWithError:(id)a1;

@end
