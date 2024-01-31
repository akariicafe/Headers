@interface AppleIDSetupUI.AISFlowTask : NSObject <AISFlowTaskInfoProtocol> {
    void /* unknown type, empty encoding */ cachedContinuation;
    void /* unknown type, empty encoding */ completed;
}

- (id)init;
- (void).cxx_destruct;
- (void)waitUntilLoadedWithCompletionHandler:(void (^)(void))a0;

@end
