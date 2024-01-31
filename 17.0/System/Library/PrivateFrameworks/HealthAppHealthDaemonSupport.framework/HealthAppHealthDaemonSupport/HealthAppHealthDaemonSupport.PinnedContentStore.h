@interface HealthAppHealthDaemonSupport.PinnedContentStore : NSObject <_HKXPCExportable> {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ domain;
    void /* unknown type, empty encoding */ proxyProvider;
}

- (id)exportedInterface;
- (id)init;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (void).cxx_destruct;

@end
