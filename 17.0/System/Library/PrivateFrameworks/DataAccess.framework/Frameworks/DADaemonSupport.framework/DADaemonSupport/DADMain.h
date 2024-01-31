@class NSArray, NSString, NSTimer, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DADMain : DADisableableObject <UMUserSwitchStakeholder, DATransactionMonitorDelegate> {
    NSTimer *_delayedShutdownTimer;
    NSTimer *_forceShutdownTimer;
    BOOL *_runLoopStoppedRef;
    NSObject<OS_dispatch_queue> *_analyticsQueue;
    NSObject<OS_dispatch_source> *_analyticsSource;
}

@property (retain, nonatomic) NSArray *userSwitchTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMain;

- (id)init;
- (void)dealloc;
- (void)disable;
- (void)willSwitchUser;
- (void).cxx_destruct;
- (void)addSignalHandler;
- (void)didFinishAllXPCTransactions;
- (void)_shutdownDaemon;
- (void)_configureAnalyticsLogging;
- (void)_forceShutdownDaemonOnLogoutInTimeInterval:(int)a0;
- (void)_forceShutdownTimerFired:(id)a0;
- (void)_setRunLoopStopped:(BOOL)a0;
- (void)addLanguageChangeHandler;
- (void)addToOperationsQueueDisabledCheckAndGoBlock:(id /* block */)a0 wrappedBlock:(id /* block */)a1;
- (void)agentsStarted;
- (void)evaluateConnectedStartupActivityStatus;
- (void)setRunLoopStoppedRef:(BOOL *)a0;
- (void)shutdownDAD;
- (void)waitForSystemAvailability;
- (void)xpc_checkin;

@end
