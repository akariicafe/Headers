@interface SiriKitRuntime.ServerFallbackCapableRequestProcessor : SiriKitRuntime.ConversationRequestProcessor {
    void /* unknown type, empty encoding */ requestHandledOnServer;
    void /* unknown type, empty encoding */ runSiriKitExecutorProcessor;
    void /* unknown type, empty encoding */ executeNLOnServerMessage;
    void /* unknown type, empty encoding */ isUserOnActivePhoneCall;
    void /* unknown type, empty encoding */ gatedExecuteNLOnServer;
}

@end
