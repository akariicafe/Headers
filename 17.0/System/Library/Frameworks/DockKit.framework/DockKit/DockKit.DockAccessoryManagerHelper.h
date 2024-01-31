@interface DockKit.DockAccessoryManagerHelper : NSObject <DockKitCore.StateEventProtocol> {
    void /* unknown type, empty encoding */ callback;
    void /* unknown type, empty encoding */ manager;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ weakPublishedAccessoriesLock;
    void /* unknown type, empty encoding */ weakPublishedAccessories;
}

- (id)init;
- (void).cxx_destruct;
- (void)stateEventWithInfo:(id)a0 connectedState:(long long)a1 dockState:(long long)a2 trackingButtonState:(long long)a3;

@end
