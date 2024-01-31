@interface _TtCC24IntelligencePlatformCore18EventLogServiceXPC6Server : NSObject <GDEventLogServiceXPCProtocol> {
    void /* unknown type, empty encoding */ storage;
    void /* unknown type, empty encoding */ bufferedWriter;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)logEndWithId:(long long)a0 timestamp:(id)a1 dependencies:(id)a2 payloadType:(id)a3 payloadVariant:(id)a4 payload:(id)a5 completion:(id /* block */)a6;
- (void)logInstantWithId:(long long)a0 timestamp:(id)a1 name:(id)a2 parent:(long long)a3 dependencies:(id)a4 payloadType:(id)a5 payloadVariant:(id)a6 payload:(id)a7 completion:(id /* block */)a8;
- (void)logStartWithId:(long long)a0 timestamp:(id)a1 name:(id)a2 parent:(long long)a3 completion:(id /* block */)a4;

@end
