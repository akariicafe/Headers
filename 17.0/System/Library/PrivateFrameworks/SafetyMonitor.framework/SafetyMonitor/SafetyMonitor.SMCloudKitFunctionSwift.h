@interface SafetyMonitor.SMCloudKitFunctionSwift : NSObject {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ containerName;
    void /* unknown type, empty encoding */ serviceName;
    void /* unknown type, empty encoding */ container;
    void /* unknown type, empty encoding */ client;
}

- (id)init;
- (id)initWithServiceName:(id)a0;
- (void).cxx_destruct;
- (void)requestSafetyCacheRecordFromZone:(id)a0 token:(id)a1 completion:(id /* block */)a2;

@end
