@interface NotificationAgent : NSObject <DockKitCore.StateEventProtocol> {
    void /* unknown type, empty encoding */ manager;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ callback;
    void /* unknown type, empty encoding */ tracking;
    void /* unknown type, empty encoding */ stateLock;
}

- (id)init;
- (void)dealloc;
- (void)deregister;
- (void).cxx_destruct;
- (BOOL)isTracking;
- (void)stateEventWithInfo:(id)a0 connectedState:(long long)a1 dockState:(long long)a2 trackingButtonState:(long long)a3;
- (BOOL)registerWithCallback:(id /* block */)a0;

@end
