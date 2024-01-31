@interface SiriKitRuntime.RemoteConversationService : _TtCs12_SwiftObject <SKRRemoteConversationXPC> {
    void /* unknown type, empty encoding */ flowPlugin;
    void /* unknown type, empty encoding */ pluginId;
    void /* unknown type, empty encoding */ siriKitRuntime;
    void /* unknown type, empty encoding */ flowPluginBundle;
    void /* unknown type, empty encoding */ referenceResolutionClient;
    void /* unknown type, empty encoding */ snippetManager;
    void /* unknown type, empty encoding */ asyncUpdateQueue;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ turnDataProvider;
}

- (void)resetWithReply:(id /* block */)a0;
- (void)acceptInitialInputWithInputIdentifier:(id)a0 speechData:(id)a1 reply:(id /* block */)a2;
- (void)acceptWithInputData:(id)a0 speechData:(id)a1 reply:(id /* block */)a2;
- (void)canHandleWithInputData:(id)a0 rcId:(id)a1 reply:(id /* block */)a2;
- (void)cancelWithReply:(id /* block */)a0;
- (void)commitWithBridge:(id)a0 reply:(id /* block */)a1;
- (void)drainAsyncWorkWithReply:(id /* block */)a0;
- (void)ensureReadyWithReply:(id /* block */)a0;
- (void)flexibleExecutionSupportOptionsWithReply:(id /* block */)a0;
- (void)isCorrectableWithReply:(id /* block */)a0;
- (void)isEmptyWithReply:(id /* block */)a0;
- (void)paraphraseWithReply:(id /* block */)a0;
- (void)prepareWithBridge:(id)a0 reply:(id /* block */)a1;
- (void)startTurnFromCacheWithExecutionRequestId:(id)a0 bridge:(id)a1 reply:(id /* block */)a2;
- (void)startTurnWithTurnData:(id)a0 bridge:(id)a1 reply:(id /* block */)a2;
- (void)warmupWithRefId:(id)a0 reply:(id /* block */)a1;

@end
