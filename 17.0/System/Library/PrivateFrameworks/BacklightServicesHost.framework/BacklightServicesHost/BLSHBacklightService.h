@class BLSHDiagnosticsServer, BLSHWatchdogTester, BLSHCriticalAssertTester, BLSHBacklightStateMachine, BLSHXPCBacklightProxyHostServer, BLSHBacklightTransitionStateMachine;

@interface BLSHBacklightService : NSObject {
    BLSHBacklightStateMachine *_stateMachine;
    BLSHBacklightTransitionStateMachine *_transitionStateMachine;
    BLSHXPCBacklightProxyHostServer *_backlightXPCServer;
    BLSHDiagnosticsServer *_diagnosticsServer;
    BLSHWatchdogTester *_watchdogTester;
    BLSHCriticalAssertTester *_criticalAssertTester;
}

+ (id)serviceWithPlatformProvider:(id)a0 osInterfaceProvider:(id)a1 inactiveBudgetPolicy:(id)a2 localAssertionService:(id)a3 localOnly:(BOOL)a4;

- (void).cxx_destruct;
- (id)initWithPlatformProvider:(id)a0 osInterfaceProvider:(id)a1 inactiveBudgetPolicy:(id)a2 localAssertionService:(id)a3 localOnly:(BOOL)a4;

@end
