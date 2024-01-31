@interface SNAnalysisClient : NSObject {
    void /* unknown type, empty encoding */ connectionToServerGenerator;
    void /* unknown type, empty encoding */ xpcConnectionToServer;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ pendingInvalidationHandlers;
}

+ (id)defaultClient;

- (id)init;
- (void).cxx_destruct;
- (id)createRemoteSystemAudioAnalyzerWithInvalidationHandler:(id /* block */)a0 queue:(id)a1 error:(id *)a2;
- (id)initToConnectToMachServiceWithName:(id)a0 queue:(id)a1;
- (id)initWithConnectionGenerator:(id /* block */)a0 queue:(id)a1;

@end
