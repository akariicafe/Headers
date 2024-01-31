@class NSDate, HMDTriggerConfirmationTimer, NSArray, NSPredicate, HMDPredicateUtilities, HMFTimer, NSString, NSMutableSet, NSMutableArray, NSMapTable, HMDEventTriggerUserConfirmationSession;

@interface HMDEventTriggerExecutionSession : HMDEventTriggerSession <HMFDumpState, HMFLogging, HMDEventDelegate, HMFTimerDelegate>

@property (readonly, nonatomic) NSMapTable *writeRequests;
@property (readonly, nonatomic) NSMutableSet *mediaProfiles;
@property (readonly, nonatomic) NSDate *executionStartTime;
@property (readonly, nonatomic) NSMutableArray *triggerEvents;
@property (readonly, nonatomic) NSMutableArray *causingDevices;
@property (readonly, nonatomic) NSArray *endEvents;
@property (retain, nonatomic) NSArray *monitorEvents;
@property (nonatomic) unsigned long long executionState;
@property (readonly, nonatomic) HMDPredicateUtilities *predicateUtilities;
@property (readonly, nonatomic) NSArray *actionSets;
@property (readonly, nonatomic) NSPredicate *evaluationCondition;
@property (readonly, nonatomic) NSArray *recurrences;
@property (readonly, nonatomic) HMDEventTriggerUserConfirmationSession *userConfirmationSession;
@property (retain, nonatomic) HMDTriggerConfirmationTimer *secureTriggerConfirmationTimer;
@property (retain, nonatomic) HMFTimer *startCharacteristicsMonitorTimer;
@property (nonatomic) BOOL actionSetExecutionInProgress;
@property (nonatomic) BOOL restoreInProgress;
@property (nonatomic) BOOL executionCompleteCalled;
@property (readonly, nonatomic) BOOL needsUserConfirmation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)dumpState;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_restoreState;
- (void)_activateDurationEvents;
- (void)_activateEvents:(id)a0;
- (void)_activateMonitoringEvents;
- (void)_addEvent:(id)a0 causingDevice:(id)a1;
- (void)_callExecutionComplete:(id)a0;
- (void)_callExecutionComplete:(id)a0 callDelegate:(BOOL)a1;
- (void)_callExecutionCompleteIfNoMoreOutstandingRequests;
- (void)_directlyExecuteActionSetsWithCompletionHandler:(id /* block */)a0;
- (void)_evaluateFiringTrigger;
- (void)_executeTriggerAfterEvaluatingCondition:(id)a0;
- (void)_handleActionSetExecutionResponse:(id)a0 actionSetError:(id)a1 completion:(id /* block */)a2;
- (void)_handleMonitoringEvent:(id)a0;
- (id)_monitoringEventsFromActionSetResponse:(id)a0;
- (void)_removeUserDialog;
- (void)_submitAnalyticsData:(id)a0;
- (void)_userResponse:(unsigned long long)a0 device:(id)a1 completionHandler:(id /* block */)a2;
- (void)addEvent:(id)a0 causingDevice:(id)a1;
- (void)cancelSessionIfWaitingForUserResponse;
- (BOOL)containsSecureActionSet;
- (id)didOccurEvent:(id)a0 causingDevice:(id)a1;
- (id)durationEndEvents;
- (void)evaluateFiringTrigger;
- (void)handleSessionPlaybackStateUpdatedNotification:(id)a0;
- (id)initWithEventTrigger:(id)a0 predicateUtilities:(id)a1 triggerEvent:(id)a2 causingDevice:(id)a3 workQueue:(id)a4 actionSets:(id)a5 evaluationCondition:(id)a6 recurrences:(id)a7 endEvents:(id)a8 msgDispatcher:(id)a9;
- (void)postponeRestoreIfWaitingForEndEvent;
- (void)userResponse:(unsigned long long)a0 device:(id)a1 completionHandler:(id /* block */)a2;
- (id)valueInActionSetWriteResponse:(id)a0 actionSetUUID:(id)a1 accUUID:(id)a2 serviceID:(id)a3 characteristicID:(id)a4;

@end
