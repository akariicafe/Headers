@class NSObject, NSString, ACHAwardsClient, HDProfile, ACHDataStore, NSMutableSet, ACHEarnedInstanceAwardingEngine;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ACHGizmoAwardingScheduler : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject, ACHAwardingScheduler, ACHDataStoreObserving> {
    ACHAwardsClient *_client;
    HDProfile *_profile;
    ACHDataStore *_dataStore;
    ACHEarnedInstanceAwardingEngine *_awardingEngine;
    NSMutableSet *_blocksWaitingOnFirstEvaluation;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_retryTimer;
    BOOL _needsRetry;
    BOOL _firstEvaluationComplete;
    BOOL _dataStoreHasPopulated;
    int _protectedDataToken;
}

@property (nonatomic) double retryInterval;
@property (nonatomic) double retryLeeway;
@property (copy, nonatomic) id /* block */ scheduledEvaluationCompleteBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)daemonReady:(id)a0;
- (void)dealloc;
- (id)diagnosticDescription;
- (void)activate;
- (void)requestAwardingEvaluationWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_startUp;
- (void)dataStoreDidPopulate:(id)a0;
- (id)initWithClient:(id)a0 dataStore:(id)a1 awardingEngine:(id)a2;
- (void)_queue_cancelRetryAwardingEvaluationTimer;
- (void)_queue_handleProtectedDataChange:(BOOL)a0;
- (void)_queue_requestRetryingAwardingEvaluationWithCompletion:(id /* block */)a0;
- (void)_queue_scheduleRetryAwardingEvaluation;
- (id)initWithProfile:(id)a0 dataStore:(id)a1 awardingEngine:(id)a2;
- (void)performAfterFirstEvaluation:(id /* block */)a0;

@end
