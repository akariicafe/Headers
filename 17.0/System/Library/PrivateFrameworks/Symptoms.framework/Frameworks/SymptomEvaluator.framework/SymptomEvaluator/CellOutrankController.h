@class NSString, NWNetworkAgentRegistration, NSSet, NSMutableDictionary, NEPolicySession, NEPathControllerNetworkAgent, NSObject, FlowBasedIconAdviser;
@protocol OS_dispatch_queue;

@interface CellOutrankController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id _foregroundAppObserver;
    NSMutableDictionary *_activeApps;
    NSMutableDictionary *_activeFallbackClients;
    NEPathControllerNetworkAgent *_neAgent;
    NWNetworkAgentRegistration *_neAgentRegistration;
    NEPolicySession *_nePolicySession;
    int _nePolicyCount;
    unsigned int _nePolicyOrderSeqno;
    int _outrankEffectiveToken;
    BOOL _cellIconSettingDampening;
    NSSet *_cellIconAlwaysSetApps;
    FlowBasedIconAdviser *_flowBasedIconAdviser;
    NSString *_cellInterfaceName;
    BOOL _cellOutranksWiFi;
    BOOL _cellOutrankEffective;
    BOOL _cellOutrankIcon;
    BOOL _graceTimerRunning;
    BOOL _evictionTimerRunning;
    double _cellIconChangeTime;
    double _cellOutrankChangeTime;
    double _cellIconAccumulatedDuration;
    double _cellOutrankAccumulatedDuration;
    double _cellOutrankFGExploitDuration;
    double _cellOutrankFGNonExploitDuration;
    double _cellCurrentUsageTimerStartTime;
    unsigned int _cellOutrankIconSetEvents;
    int _numAppsExploitingOutrank;
    int _numAppsNonExploitingOutrank;
    unsigned int _currentUsage;
    double _activeAppsCacheRetainPeriod;
    double _activeAppsCacheGracePeriod;
    double _cellIconOnDebounceInterval;
    double _cellIconOffDebounceInterval;
    double _outrankFlowMonitorMinSamplePeriod;
    double _outrankFlowMonitorSamplePeriodThroughputThreshold;
}

@property (nonatomic) BOOL cellOutrankEffective;
@property (nonatomic) unsigned int currentUsage;
@property (readonly, nonatomic) int neAgentInstanceNumber;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *cellInterfaceName;
@property (nonatomic) BOOL cellOutranksWiFi;
@property (readonly, nonatomic) BOOL cellOutrankIcon;
@property (readonly, nonatomic) double cellOutrankPossibleDuration;
@property (readonly, nonatomic) double cellOutrankIconSetDuration;
@property (readonly, nonatomic) double cellOutrankFGExploitDuration;
@property (readonly, nonatomic) double cellOutrankFGNonExploitDuration;
@property (readonly, nonatomic) unsigned int cellOutrankIconSetEvents;
@property (readonly, nonatomic) int numForegroundAppsExploitingOutrank;
@property (readonly, nonatomic) int numForegroundAppsNonExploitingOutrank;

+ (id)sharedInstance;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)restoreDefaults;
- (void)assessIconState;
- (id)init;
- (BOOL)updatePolicy;
- (void)didSampleFlows;
- (void)_updateExploitNumbers;
- (void)checkInvariants:(id)a0;
- (void)assertFallbackForClient:(id)a0 process:(id)a1;
- (void)reportABCCase:(id)a0;
- (void)ensureMaintenanceTimer;
- (void)deleteAllAssertionTrackers;
- (void)setConfiguration:(id)a0;
- (void)deleteAssertionTracker:(id)a0;
- (void).cxx_destruct;
- (void)_foregroundAppActivity:(id)a0 uuid:(id)a1 isForeground:(BOOL)a2;
- (BOOL)applyPolicyDelta;
- (void)unassertFallbackForClient:(id)a0;
- (id)getState:(BOOL)a0;
- (BOOL)removeAllPolicies;
- (void)cleanupNEPolicy;

@end
