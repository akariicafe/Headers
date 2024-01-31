@interface CloudTelemetry : NSObject {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ configured;
    void /* unknown type, empty encoding */ connectionManager;
    void /* unknown type, empty encoding */ generatedSessionID;
    void /* unknown type, empty encoding */ earlyCachedEvents;
    void /* unknown type, empty encoding */ completelyDisabled;
    void /* unknown type, empty encoding */ extraFields;
    void /* unknown type, empty encoding */ terminated;
    void /* unknown type, empty encoding */ sentEventCount;
}

+ (BOOL)reportWithTeamID:(id)a0 schemaID:(long long)a1 event:(id)a2 error:(id *)a3;
+ (BOOL)setupXpcServiceActivitiesAndReturnError:(id *)a0;

- (id)init;
- (void).cxx_destruct;

@end
