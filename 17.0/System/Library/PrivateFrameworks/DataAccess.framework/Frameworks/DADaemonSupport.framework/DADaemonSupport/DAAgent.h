@class DAAccount, DATrustHandler, NSString;

@interface DAAgent : NSObject <DAReachabilityClient> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } reachabilityLock;
    unsigned long long _reachabilityUnrestrictedTimestamp;
    int _consecutiveDelayedReachabilityCallbacks;
    int _reachabilityCallbackSequence;
    BOOL _allowNextReachabilityCallback;
    BOOL _delayingReachabilityCallback;
}

@property (retain, nonatomic) DAAccount *account;
@property (nonatomic) double lastRetryTimeout;
@property (nonatomic) BOOL syncWhenReachable;
@property (copy, nonatomic) id /* block */ networkReachableBlock;
@property (nonatomic) BOOL isWaitingForPassword;
@property (nonatomic) BOOL isMonitoring;
@property (readonly, nonatomic) DATrustHandler *trustHandler;
@property (readonly, nonatomic) NSString *publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shutdown;
- (id)initWithAccount:(id)a0;
- (void)stopObservingReachability;
- (void).cxx_destruct;
- (void)startMonitoring;
- (void)networkReachable;
- (id)stateString;
- (void)saveXpcActivity:(id)a0;
- (id)hostToObserveForDAReachability:(id)a0;
- (void)_scheduleDelayedReachabilityCallback:(double)a0 block:(id /* block */)a1;
- (id)getDAAccount;
- (void)observeReachabilityWithBlock:(id /* block */)a0;
- (int)preferredEventDaysToSync;
- (int)preferredToDoDaysToSync;
- (void)processMeetingRequestDatas:(id)a0 deliveryIdsToClear:(id)a1 deliveryIdsToSoftClear:(id)a2 inFolderWithId:(id)a3 callback:(id /* block */)a4;
- (void)refreshFolderListRequireChangedFolders:(BOOL)a0 isUserRequested:(BOOL)a1;
- (void)requestAgentStopMonitoringWithCompletionBlock:(id /* block */)a0;
- (void)setDelayingReachabilityCallback:(BOOL)a0;
- (BOOL)shouldBeMonitoringReachability;
- (void)startOrStopMonitoringReachability:(BOOL)a0;
- (void)syncFolderIDs:(id)a0 forDataclasses:(long long)a1 isUserRequested:(BOOL)a2;

@end
