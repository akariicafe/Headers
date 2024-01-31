@class NSString, NSArray, NSOrderedSet, CDMServiceGraphRunner, NSLock;

@interface CDMComposerService : CDMBaseService {
    NSString *_languageCode;
    NSArray *_servicesArray;
    CDMServiceGraphRunner *_serviceGraphRunner;
    NSLock *_aneLock;
    NSOrderedSet *_availableServiceGraphs;
}

- (id)supportedCommands;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (void)_handleNLURequest:(id)a0 withCallback:(id /* block */)a1;
- (void)_handleListGraphs:(id)a0 withCallback:(id /* block */)a1;
- (void)updateServices:(id)a0;
- (void)_handleEmbeddingRequest:(id)a0 withCallback:(id /* block */)a1;
- (void)_handleNLUPreprocessRequest:(id)a0 withCallback:(id /* block */)a1;
- (void)_handleSetupRequest:(id)a0 withCallback:(id /* block */)a1;
- (void)_handleSsuInferenceRequest:(id)a0 withCallback:(id /* block */)a1;
- (id)createServiceGraphForCommand:(id)a0 withSelfMetadata:(id)a1 withCallback:(id /* block */)a2;
- (void)failWithError:(id)a0 callback:(id /* block */)a1;
- (void)failWithError:(id)a0 rawCommand:(id)a1 callback:(id /* block */)a2;
- (void)handleCommand:(id)a0 withCallback:(id /* block */)a1;
- (id)prepareRequestHandler:(id)a0 withCallback:(id /* block */)a1;
- (void)updateServiceGraphRunner:(id)a0;

@end
