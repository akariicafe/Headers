@interface UniversalControl.AgentXPCProxy : NSObject {
    void /* unknown type, empty encoding */ activeEdges;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ devices;
    void /* unknown type, empty encoding */ connectedDevices;
    void /* unknown type, empty encoding */ localDevice;
    void /* unknown type, empty encoding */ automaticallyReconnect;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ localSeed;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ notificationName;
    void /* unknown type, empty encoding */ notifyToken;
    void /* unknown type, empty encoding */ notifySeed;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ _adminRemoteObjectProxy;
}

- (id)init;
- (void).cxx_destruct;

@end
