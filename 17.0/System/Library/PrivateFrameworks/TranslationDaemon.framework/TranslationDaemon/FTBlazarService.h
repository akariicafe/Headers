@interface FTBlazarService : OspreyChannel

- (id)performSpeechTranslationWithDelegate:(id)a0 requestBuilder:(id /* block */)a1 completion:(id /* block */)a2;
- (id)performBatchTranslationWithDelegate:(id)a0 requestBuilder:(id /* block */)a1 completion:(id /* block */)a2;
- (id)performMultiUserWithDelegate:(id)a0 requestBuilder:(id /* block */)a1 completion:(id /* block */)a2;
- (id)performMultilingualWithDelegate:(id)a0 requestBuilder:(id /* block */)a1 completion:(id /* block */)a2;
- (void)performServiceDiscovery:(id)a0 requestBuilder:(id /* block */)a1 completion:(id /* block */)a2;
- (void)performTextToSpeechRouter:(id)a0 requestBuilder:(id /* block */)a1 completion:(id /* block */)a2;
- (id)performTextToSpeechRouterStreamingWithDelegate:(id)a0 requestBuilder:(id /* block */)a1 completion:(id /* block */)a2;

@end
