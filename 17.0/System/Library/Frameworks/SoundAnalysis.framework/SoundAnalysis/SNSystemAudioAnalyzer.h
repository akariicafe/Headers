@protocol SNSystemAudioAnalyzerProtocol;

@interface SNSystemAudioAnalyzer : NSObject {
    id<SNSystemAudioAnalyzerProtocol> _impl;
}

+ (void)configureNewAnalyzersToComputeInThisProcess:(BOOL)a0;

- (id)init;
- (void)removeAllRequests;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)removeRequest:(id)a0;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)addRequestInBackground:(id)a0 withObserver:(id)a1;
- (id)initWithAudioConfiguration:(id)a0;

@end
