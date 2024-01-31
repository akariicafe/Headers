@interface StateReplicator.IDSServiceWrapper : NSObject <IDSServiceDelegate> {
    void /* unknown type, empty encoding */ idsService;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ delegate;
}

- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;
- (void)service:(id)a0 nearbyDevicesChanged:(id)a1;
- (void)service:(id)a0 connectedDevicesChanged:(id)a1;
- (void)service:(id)a0 linkedDevicesChanged:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
