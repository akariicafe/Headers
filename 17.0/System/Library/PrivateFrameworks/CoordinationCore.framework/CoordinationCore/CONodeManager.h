@class COBallotBrowser, NSError, COExecutionContext, NSArray, COElectionInfo, NSMutableDictionary, NSSet, COConstituent, NSMutableArray, NSObject, NSString, COMeshNode;
@protocol OS_dispatch_source, CONodeManagerDelegate;

@interface CONodeManager : NSObject <CONodeControllerDelegate> {
    BOOL _started;
}

@property (retain, nonatomic) COConstituent *leader;
@property (retain, nonatomic) COBallotBrowser *ballotBrowser;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *electionElapsedTimer;
@property (nonatomic) unsigned long long electionPrevious;
@property (nonatomic) unsigned long long electionStart;
@property (nonatomic) unsigned long long electionEnd;
@property (nonatomic) unsigned long long longestBackOff;
@property (retain, nonatomic) COConstituent *longestBackedOffConstituent;
@property (nonatomic) BOOL isInElection;
@property (readonly, nonatomic) NSMutableDictionary *browsersObservers;
@property (retain, nonatomic) NSMutableDictionary *nodeControllers;
@property (retain, nonatomic) COElectionInfo *electionInfo;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableArray *pendingDiscoveryRecords;
@property (retain, nonatomic) NSMutableDictionary *leaderCommands;
@property (weak, nonatomic) id<CONodeManagerDelegate> delegate;
@property (copy, nonatomic) COExecutionContext *executionContext;
@property (readonly, nonatomic) COConstituent *me;
@property (readonly, nonatomic) COMeshNode *nodeForMe;
@property (readonly, nonatomic) NSArray *nodes;
@property (retain, nonatomic) NSSet *acceptableCommands;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (id)shortDescription;
- (void)stopWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithExecutionContext:(id)a0;
- (void)sendCommand:(id)a0;
- (void)addBrowser:(id)a0;
- (void)removeBrowser:(id)a0;
- (void)_bumpGeneration;
- (void)_didLoseRecord:(id)a0;
- (void)_nodeBecameInactive:(id)a0 withReason:(long long)a1;
- (void)nodeController:(id)a0 didAddTransport:(id)a1;
- (void)_checkForElectionCompletion:(id)a0 nodeController:(id)a1;
- (id)_constituentCharacteristics:(id)a0;
- (void)_didDiscoverRecord:(id)a0;
- (void)_handleDiscoveryRecord:(id)a0;
- (void)_handleEnqueuedCommandsForLostNode:(id)a0 error:(id)a1;
- (void)_handleLostRecord:(id)a0;
- (void)_informControllersAboutNewElectionInfo;
- (void)_logElectionSummary;
- (void)_nodeStartedElection:(id)a0 withElectionInfo:(id)a1;
- (void)_nodeStopped:(id)a0 withReason:(long long)a1;
- (void)_reportLostLeader:(id)a0 withReason:(long long)a1;
- (void)_resetBallot;
- (BOOL)_updateBallot:(id)a0;
- (id)activeNodesWithSelfNode:(BOOL)a0;
- (void)backedOffNodeMovedOutOfElection:(id)a0;
- (void)nodeController:(id)a0 didReceiveCommand:(id)a1;
- (void)nodeController:(id)a0 didReceiveElectionCmd:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)nodeController:(id)a0 didReceiveError:(id)a1 forCommand:(id)a2;
- (void)nodeController:(id)a0 didReceiveOnDemandNodeCreationRequest:(id)a1;
- (void)nodeController:(id)a0 didReceiveRequest:(id)a1 callback:(id /* block */)a2;
- (void)nodeController:(id)a0 didRemoveTransport:(id)a1 withError:(id)a2;
- (void)nodeController:(id)a0 didUpdateRemoteConstituent:(id)a1 to:(id)a2;
- (void)nodeController:(id)a0 didUpdateState:(long long)a1 to:(long long)a2 reason:(long long)a3 withLastSentElectionInfo:(id)a4;
- (id)nodeControllerForConstituent:(id)a0;
- (id)nodeControllerForIDS:(id)a0;
- (void)pingLeader;
- (void)sendCommands:(id)a0;

@end
