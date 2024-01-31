@interface GKMultiplayerActivityReporter : NSObject {
    void /* unknown type, empty encoding */ transportSupport;
    void /* unknown type, empty encoding */ localPlayerID;
    void /* unknown type, empty encoding */ apiReporter;
    void /* unknown type, empty encoding */ mutableState;
    void /* unknown type, empty encoding */ stateQueue;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithLocalPlayerID:(id)a0 transportSupport:(id)a1 apiReporter:(id)a2;
- (id /* block */)instrumentBestHostElectedHandler:(id /* block */)a0 transportContext:(id)a1;
- (id)instrumentClientDelegate:(id)a0 transportContext:(id)a1;
- (id /* block */)instrumentErrorHandler:(id /* block */)a0 transportContext:(id)a1;
- (void)onDisconnectWithTransportContext:(id)a0;
- (void)onGameplayEndedWithReason:(long long)a0 error:(id)a1 transportContext:(id)a2;
- (void)onGameplayStartedWithTransportContext:(id)a0;
- (void)onInviteSentWithApproach:(unsigned long long)a0 isHosted:(BOOL)a1 recipients:(id)a2 transportContext:(id)a3;
- (void)onTransportError:(id)a0 transportContext:(id)a1;

@end
