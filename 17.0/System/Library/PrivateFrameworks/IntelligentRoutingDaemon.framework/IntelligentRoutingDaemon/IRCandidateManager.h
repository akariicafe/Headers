@class IRRapportProvider, NSSet, IRServiceStore, NSString, IRCandidatesContainerDO, NSObject, IRAVOutputDeviceProvider;
@protocol OS_dispatch_queue, IRPolicyManagerContextObserver;

@interface IRCandidateManager : NSObject <IRAVOutputDeviceProviderObserverProtocol, IRRapportProviderObserverProtocol, IRPersistenceSynchronizable, IRDeallocSync>

@property (retain, nonatomic) NSSet *avodDevices;
@property (retain, nonatomic) NSSet *rapportDevices;
@property (retain, nonatomic) IRCandidatesContainerDO *candidatesContainer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<IRPolicyManagerContextObserver> contextObserver;
@property (retain, nonatomic) IRAVOutputDeviceProvider *avOutputDeviceProvider;
@property (retain, nonatomic) IRRapportProvider *rapportDeviceProvider;
@property (retain, nonatomic) IRServiceStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)deleteCandidate:(id)a0;
- (void)_addCandidates:(id)a0;
- (void)synchronizeAndFetchFromDBOnDisk;
- (void)_deleteCandidates:(id)a0;
- (void)_didUpdateContextWithReason:(id)a0;
- (void)_handleCandidatesCleanup;
- (id)_lastUsedDateForCandidate:(id)a0 fromHistoryEventsContainer:(id)a1;
- (id)_nodesForCandidate:(id)a0 fromExistingCandidate:(id)a1;
- (id)_oldestCandidatesFrom:(id)a0 forKey:(id)a1 limit:(unsigned long long)a2;
- (void)_updateCandidate:(id)a0;
- (id)candidateForCandidateIdentifier:(id)a0;
- (void)deallocSync;
- (id)initWithQueue:(id)a0 contextObserver:(id)a1 avOutputDeviceProvider:(id)a2 rapportDeviceProvider:(id)a3 store:(id)a4;
- (void)notifyAddEventForCandidateIdentifier:(id)a0;
- (void)provider:(id)a0 didUpdateAVOutputDevices:(id)a1;
- (void)provider:(id)a0 didUpdateRapportDevices:(id)a1;
- (void)updateCandidates:(id)a0 withHistoryEventsContainer:(id)a1;

@end
