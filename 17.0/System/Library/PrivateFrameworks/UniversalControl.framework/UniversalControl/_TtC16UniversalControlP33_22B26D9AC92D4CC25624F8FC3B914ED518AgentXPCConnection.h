@interface _TtC16UniversalControlP33_22B26D9AC92D4CC25624F8FC3B914ED518AgentXPCConnection : NSObject <UniversalControl.UniversalControlXPCBasicInterface> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ machServiceName;
    void /* unknown type, empty encoding */ adminProxy;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ error;
}

- (id)init;
- (void).cxx_destruct;
- (void)xpcAdminInterfaceWithCompletion:(id /* block */)a0;
- (void)xpcGetEdgesWithCompletion:(id /* block */)a0;

@end
