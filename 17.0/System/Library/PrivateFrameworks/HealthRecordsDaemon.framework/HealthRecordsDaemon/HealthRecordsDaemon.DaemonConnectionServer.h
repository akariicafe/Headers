@interface HealthRecordsDaemon.DaemonConnectionServer : NSObject <HKHealthRecordsDaemonConnectionServerInterface, _HKXPCExportable> {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ serviceMap;
}

- (id)exportedInterface;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (void)remote_fetchEndpointForServiceIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
