@class IRPolicyEngine, IRCandidateManager, IRMediaRemoteProvider, IRServiceDO, NSString, IRReplayWriter, IRHistoryManager, NSObject, IRSystemStateManager, IRStatisticsManager;
@protocol OS_dispatch_queue, IRPolicyManagerDelegate;

@interface IRPolicyManager : NSObject <IRServiceHandling, IRPolicyManagerContextObserver, IRPersistenceSynchronizable, IRDeallocSync>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<IRPolicyManagerDelegate> delegate;
@property (retain, nonatomic) IRCandidateManager *candidateManager;
@property (retain, nonatomic) IRSystemStateManager *systemStateManager;
@property (retain, nonatomic) IRHistoryManager *historyManager;
@property (retain, nonatomic) IRPolicyEngine *policyEngine;
@property (retain, nonatomic) IRReplayWriter *replayWriter;
@property (retain, nonatomic) IRStatisticsManager *statisticsManager;
@property (retain, nonatomic) IRMediaRemoteProvider *saredLocalEndpointProvider;
@property (nonatomic) long long mode;
@property (nonatomic) BOOL isLowLatencyMiLo;
@property (retain, nonatomic) IRServiceDO *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (void)dealloc;
- (void).cxx_destruct;
- (id)requestCurrentContext;
- (void)clearStatistics;
- (void)setUpdateMode:(long long)a0;
- (id)getService;
- (id)getStatistics;
- (void)deleteCandidate:(id)a0;
- (void)updateCandidates:(id)a0;
- (void)synchronizeAndFetchFromDBOnDisk;
- (void)_checkAndStartLowLatencyMiLoIfNeeded;
- (void)_handleMiLoRealTimeUponAddEvent:(id)a0;
- (void)_handleMiLoRealTimeUponContextChange;
- (void)_handleMiLoRealTimeUponRequestCurrentContext;
- (void)addEvent:(id)a0 forCandidateIdentifier:(id)a1;
- (void)deallocSync;
- (void)didReceiveMiloPredictionRealTime;
- (void)didUpdateContextWithReason:(id)a0;
- (id)initWithService:(id)a0 queue:(id)a1 delegate:(id)a2 avOutputDeviceProvider:(id)a3 biomeProvider:(id)a4 miloProvider:(id)a5 rapportProvider:(id)a6 proximityProvider:(id)a7 serviceStore:(id)a8 displayMonitor:(id)a9 audioAVOutputContextController:(id)a10 isLowLatencyMiLo:(BOOL)a11;
- (void)restartLowLatencyMiLo:(BOOL)a0;

@end
