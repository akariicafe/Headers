@interface SNResourceCoordinatorXPCSubscriber : NSObject <SNResourceCoordinatorProtocol, SNResourceCoordinatorXPCProtocol> {
    void /* unknown type, empty encoding */ receiver;
}

- (id)init;
- (void).cxx_destruct;
- (id)createSystemAudioAnalyzerWithError:(id *)a0;
- (void)xpcCreateSystemAudioAnalyzerWithCompletionHandler:(id /* block */)a0;

@end
