@class RTTimerManager, NSString, RTDiagnostics, RTTimer, NSMutableDictionary, RTDefaultsManager, NSMutableArray, RTXPCActivityTask;

@interface RTXPCActivityManager : RTService

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDiagnostics *diagnostics;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) RTTimer *timer;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableDictionary *registrants;
@property (retain, nonatomic) RTXPCActivityTask *runningTask;
@property (retain, nonatomic) NSMutableArray *pendingTasks;

+ (id)lastAttemptDateKeyForIdentifier:(id)a0;
+ (long long)xpcActivityGetStateActivity:(id)a0;
+ (BOOL)xpcActivitySetStateActivity:(id)a0 state:(long long)a1;
+ (void)xpcActivityRegisterIdentifier:(const char *)a0 criteria:(id)a1 handler:(id /* block */)a2;
+ (void)xpcActivityUnregisterIdentifier:(const char *)a0;
+ (id)lastCompleteDateKeyForIdentifier:(id)a0;
+ (id)xpcActivityCopyCriteriaActivity:(id)a0;
+ (void)xpcActivitySetCriteriaActivity:(id)a0 criteria:(id)a1;
+ (id)criteriaDictionaryWithCriteria:(id)a0;
+ (BOOL)xpcActivityShouldDeferActivity:(id)a0;

- (id)init;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_setup;
- (void).cxx_destruct;
- (void)registerActivityWithIdentifier:(id)a0 criteria:(id)a1 handler:(id /* block */)a2;
- (void)_startDeferCheckTimer;
- (void)_stopDeferCheckTimer;
- (id)_lastCompleteDateForIdentifier:(id)a0;
- (id)_lastAttemptDateForIdentifier:(id)a0;
- (void)_onDeferCheckTimer;
- (void)_registerActivityWithIdentifier:(id)a0 criteria:(id)a1 handler:(id /* block */)a2;
- (id)_registerRegistrant:(id)a0;
- (void)_runRegistrantWithIdentifier:(id)a0 activity:(id)a1 handler:(id /* block */)a2;
- (void)_scheduleNextTask;
- (void)_unregisterActivityWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)_updateLastAttemptDateForIdentifier:(id)a0;
- (void)_updateLastCompleteDateForIdentifier:(id)a0;
- (id)initWithDefaultsManager:(id)a0 diagnostics:(id)a1 identifier:(id)a2;
- (id)initWithDefaultsManager:(id)a0 diagnostics:(id)a1 timerManager:(id)a2 identifier:(id)a3;
- (void)runRegistrantWithIdentifier:(id)a0 activity:(id)a1 handler:(id /* block */)a2;
- (void)unregisterActivityWithIdentifier:(id)a0 handler:(id /* block */)a1;

@end
