@class NSUUID, NSString, HMFTimer, HMDRemoteDeviceMonitor, NSSet, HMDPrimaryElectionFindPrimaryMeshOperation, HMFFuture, NSObject, __HMDPrimaryElectionCandidate;
@protocol OS_dispatch_queue, HMDPrimaryResidentElectionAddOnDelegate, HMDLocalElectionMeshController, HMFAsyncContext, HMDResidentDeviceManagerContext, HMDLocalElectionMeshNode, HMDPrimaryElectionCoordinationAddOnDataSource;

@interface HMDPrimaryElectionCoordinationAddOn : NSObject <HMFLogging, HMFMessageReceiver, HMDLocalElectionMeshControllerDelegate, HMFTimerDelegate, HMDPrimaryResidentElectionAddOn> {
    id<HMDLocalElectionMeshController> _meshController;
    NSObject<OS_dispatch_queue> *_queue;
    id<HMFAsyncContext> _asyncContext;
}

@property (readonly) unsigned long long messageTransportRestriction;
@property (readonly, weak) id<HMDResidentDeviceManagerContext> context;
@property (readonly) id<HMDPrimaryElectionCoordinationAddOnDataSource> dataSource;
@property unsigned long long residentCountDuringLastElection;
@property (retain) HMFTimer *debounceTimer;
@property (retain) HMFTimer *activeNodesUpdateDebounceTimer;
@property (retain) HMFTimer *pingTimer;
@property (retain) HMFTimer *secondaryMeshTimer;
@property (retain) HMFTimer *meshLeaderToPrimaryResidentPingResponseTimer;
@property (retain) HMDPrimaryElectionFindPrimaryMeshOperation *findPrimaryMeshOperation;
@property (retain) HMFFuture *findPrimaryMeshFuture;
@property (readonly) HMDRemoteDeviceMonitor *remoteDeviceMonitor;
@property (retain) id<HMDLocalElectionMeshNode> lastKnownLeaderNode;
@property long long inPessimisticSecondaryMesh;
@property unsigned long long state;
@property (retain) __HMDPrimaryElectionCandidate *selectedPrimaryResidentCandidate;
@property (retain) NSSet *lastEvaluatedMeshNodes;
@property BOOL electionGotAborted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (weak) id<HMDPrimaryResidentElectionAddOnDelegate> delegate;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void)start;
- (id)initWithContext:(id)a0;
- (id)dumpState;
- (void)stop;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)registerForMessages;
- (void)meshControllerDidStartElection:(id)a0;
- (void)performElection;
- (id)residentsInMesh;
- (void)meshController:(id)a0 didReceivePingFromLeaderWithPrimaryResidentUUID:(id)a1;
- (BOOL)residentIsPartOfTheCurrentMesh:(id)a0;
- (void)_findPrimaryMeshWithContext:(id)a0 otherResidents:(id)a1;
- (void)_selectPrimaryResidentWithReason:(unsigned long long)a0;
- (void)handleCurrentPrimaryNotification:(id)a0;
- (void)handleCurrentPrimaryRequest:(id)a0;
- (void)handleDeviceCapabilitiesRequest:(id)a0;
- (void)handleMeshInformationRequest:(id)a0;
- (id)initWithContext:(id)a0 meshController:(id)a1 dataSource:(id)a2;
- (void)meshControllerDidElectLeader:(id)a0;
- (void)meshControllerDidUpdatesNodes:(id)a0;
- (void)performElectionWithReason:(unsigned long long)a0;
- (void)primaryResidentChanged:(id)a0 previousResidentDevice:(id)a1;
- (id /* block */)primarySortComparatorForCurrentPrimary:(id)a0;

@end
