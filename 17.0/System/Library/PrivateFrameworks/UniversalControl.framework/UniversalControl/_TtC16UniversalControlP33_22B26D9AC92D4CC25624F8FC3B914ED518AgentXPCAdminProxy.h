@interface _TtC16UniversalControlP33_22B26D9AC92D4CC25624F8FC3B914ED518AgentXPCAdminProxy : NSObject <UniversalControl.UniversalControlXPCAdminInterface> {
    void /* unknown type, empty encoding */ parent;
}

- (id)init;
- (void).cxx_destruct;
- (void)xpcSetConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)xpcConnectTo:(id)a0 completion:(id /* block */)a1;
- (void)xpcDiagnoseWithCompletion:(id /* block */)a0;
- (void)xpcDisconnect;
- (void)xpcDisconnectFrom:(id)a0 completion:(id /* block */)a1;
- (void)xpcGetAutomaticallyReconnectWithCompletion:(id /* block */)a0;
- (void)xpcGetConfigurationWithCompletion:(id /* block */)a0;
- (void)xpcGetConnectedDevicesWithCompletion:(id /* block */)a0;
- (void)xpcGetDevicesWithCompletion:(id /* block */)a0;
- (void)xpcGetIDSWithCompletion:(id /* block */)a0;
- (void)xpcMoveWithType:(id)a0 device:(id)a1 completion:(id /* block */)a2;
- (void)xpcReleaseClientAssertion:(id)a0 completion:(id /* block */)a1;
- (void)xpcSetAutomaticallyReconnect:(BOOL)a0 completion:(id /* block */)a1;
- (void)xpcSynchronizeWith:(id)a0 completion:(id /* block */)a1;
- (void)xpcTakeClientAssertion:(id)a0 assertionID:(id)a1 completion:(id /* block */)a2;

@end
