@interface SNSystemAudioAnalyzerXPCSubscriber : NSObject <SNSystemAudioAnalyzerXPCProtocol, SNSystemAudioAnalyzerProtocol> {
    void /* unknown type, empty encoding */ remoteObservers;
    void /* unknown type, empty encoding */ receiver;
}

- (id)init;
- (void)removeAllRequests;
- (void).cxx_destruct;
- (void)removeRequest:(id)a0;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)setAudioConfiguration:(id)a0;
- (void)xpcAddRequest:(id)a0 withObserver:(id)a1 completionHandler:(id /* block */)a2;
- (void)xpcRemoveAllRequestsWithCompletionHandler:(id /* block */)a0;
- (void)xpcRemoveRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)xpcSetAudioConfiguration:(id)a0 completionHandler:(id /* block */)a1;

@end
