@class NSString, IDSSession, NSObject, HMDCameraIDSSessionInviterDeviceVerifier;
@protocol OS_dispatch_queue, HMDCameraIDSSessionReceiverDelegate;

@interface HMDCameraIDSSessionReceiver : HMDCameraIDSSessionHandler <IDSSessionDelegate, HMDCameraRemoteStreamReceiverDestinationProtocol>

@property (readonly, nonatomic) HMDCameraIDSSessionInviterDeviceVerifier *sessionInviterDeviceVerifier;
@property (weak) id<HMDCameraIDSSessionReceiverDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *remoteDestination;
@property (readonly) IDSSession *session;

+ (id)logCategory;

- (void)dealloc;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 inviteReceivedForSession:(id)a2 fromID:(id)a3 withContext:(id)a4;
- (void)sessionStarted:(id)a0;
- (void)sessionEnded:(id)a0 withReason:(unsigned int)a1 error:(id)a2;
- (void)_callSessionEndedWithError:(id)a0;
- (void)_callSessionSetup:(id)a0;
- (void)_receivedIDSSession:(id)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 sessionInviterDeviceVerifier:(id)a2 delegate:(id)a3 delegateQueue:(id)a4;
- (void)setUpRemoteConnectionWithDevice:(id)a0;

@end
