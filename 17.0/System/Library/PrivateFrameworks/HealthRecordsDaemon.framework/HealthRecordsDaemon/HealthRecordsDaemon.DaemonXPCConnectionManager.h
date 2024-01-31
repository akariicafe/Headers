@interface HealthRecordsDaemon.DaemonXPCConnectionManager : NSObject <HDXPCListenerDelegate> {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ serviceMap;
}

- (id)exportObjectForListener:(id)a0 client:(id)a1 error:(id *)a2;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
