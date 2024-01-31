@class ATXUniversalBlendingLayer, ATXUniversalBlendingFeedbackWriter, ATXUniversalBlendingLayerServer, _PASLock;
@protocol ATXUniversalBlendingLayerHyperParametersProtocol;

@interface ATXUniversalRealTimeSuggestionRequestCoordinator : NSObject {
    _PASLock *_pendingRefreshTrackerLock;
    ATXUniversalBlendingLayer *_blendingLayer;
    id<ATXUniversalBlendingLayerHyperParametersProtocol> _hyperParameters;
    ATXUniversalBlendingLayerServer *_server;
    ATXUniversalBlendingFeedbackWriter *_feedbackWriter;
}

- (void)registerRealTimeSuggestionProviderDelegate:(id)a0 clientModelId:(id)a1;
- (void)respondToRequestWithPreviouslyCachedPredictionsForClientModelId:(id)a0 suggestionRequest:(id)a1;
- (void)realTimeProviderDelegateForClientModelId:(id)a0 completion:(id /* block */)a1;
- (id)generatedRankedSuggestionsForSuggestionRequest:(id)a0 limit:(id)a1;
- (void)remoteAsyncDelegateForClientModel:(id)a0 completion:(id /* block */)a1;
- (id)initWithBlendingLayer:(id)a0 hyperParameters:(id)a1 pendingRefreshTracker:(id)a2 server:(id)a3;
- (id)clientModelUpdatesForSuggestionRequest:(id)a0;
- (void).cxx_destruct;
- (void)updateSuggestionsFromDelegate:(id)a0 clientModelId:(id)a1 clientModelsPendingUpdate:(id)a2 dispatchGroup:(id)a3 suggestionRequest:(id)a4;
- (void)delegateUpdatedSuggestionsForClientModelId:(id)a0 suggestionRequest:(id)a1 response:(id)a2 clientModelsPendingUpdate:(id)a3;
- (id)cacheUpdateDictionaryFromCacheUpdatesArray:(id)a0;
- (id)selectedLayoutForSuggestionRequest:(id)a0;

@end
