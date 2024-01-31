@class NSString;

@interface HMDCameraSnapshotManagerDataSource : HMFObject <HMDCameraSnapshotManagerDataSource>

@property (readonly) BOOL supportsCameraSnapshotRequestViaRelay;
@property (readonly, getter=isWatchDevice) BOOL watchDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createLocalSnapshotSessionWithID:(id)a0 accessory:(id)a1 snapshotGetter:(id)a2 message:(id)a3 waitPeriod:(double)a4 reachabilityPath:(unsigned long long)a5 cameraLocallyReachable:(BOOL)a6 snapshotForNotification:(BOOL)a7;
- (id)createSnapshotLocalWithSessionID:(id)a0 workQueue:(id)a1 accessory:(id)a2 delegate:(id)a3 delegateQueue:(id)a4 snapshotRequestHandler:(id)a5;
- (id)createSnapshotRemoteRelayReceiverWithSessionID:(id)a0 workQueue:(id)a1 accessory:(id)a2 delegate:(id)a3 delegateQueue:(id)a4 uniqueIdentifier:(id)a5 snapshotRequestHandler:(id)a6 residentMessageHandler:(id)a7 remoteDevice:(id)a8;

@end
