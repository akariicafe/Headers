@interface SNSystemAudioAnalyzerXPCPublisher : NSObject <SNSystemAudioAnalyzerProtocol> {
    void /* unknown type, empty encoding */ subscriber;
}

- (id)init;
- (void)removeAllRequests;
- (void).cxx_destruct;
- (void)removeRequest:(id)a0;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)setAudioConfiguration:(id)a0;

@end
