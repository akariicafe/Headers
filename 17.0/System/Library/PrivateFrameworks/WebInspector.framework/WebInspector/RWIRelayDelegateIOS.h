@class RWIRelay, RBSProcessMonitor;
@protocol BSInvalidatable;

@interface RWIRelayDelegateIOS : NSObject <RWIRelayDelegate> {
    RWIRelay *_relay;
    RBSProcessMonitor *_processMonitor;
    id<BSInvalidatable> _idleTimerAssertion;
}

- (void).cxx_destruct;
- (void)_stopPreventingDeviceFromIdling;
- (void)relayClientConnectionDidChange:(id)a0;
- (void)_createProcessMonitorIfNeeded;
- (void)_updateProcessMonitorPredicates;
- (void)_handleProcessMonitorStateUpdate:(id)a0 forProcess:(id)a1;
- (id)_processMonitorPredicatesForConnectedApplications;
- (void)_startPreventingDeviceFromIdling;
- (void)_updateDeviceIdlePrevention;
- (void)relay:(id)a0 activateApplicationWithBundleIdentifier:(id)a1;
- (void)relay:(id)a0 applicationConnected:(id)a1;
- (void)relay:(id)a0 applicationDisconnected:(id)a1;
- (id)relay:(id)a0 applicationInfoForIncomingConnection:(id)a1 bundleIdentifier:(id)a2;
- (void)relay:(id)a0 applicationUpdated:(id)a1;
- (void)relay:(id)a0 unhandledApplicationXPCMessage:(id)a1;
- (void)relayInitialize:(id)a0;
- (id)relaySetupResponseForClientConnection:(id)a0;

@end
