@class ATXUniversalBlendingLayer, NSString, ATXUniversalBlendingFeedbackWriter, _PASLock, ATXClientModelNotificationManager, ATXUniversalRealTimeSuggestionRequestCoordinator, NSObject, NSXPCListener, _PASSimpleCoalescingTimer;
@protocol OS_dispatch_queue, ATXBlendingLayerServerDelegateProtocol, ATXEngagementRecordManagerProtocol, ATXClientModelCacheManagerProtocol, ATXUniversalBlendingLayerHyperParametersProtocol;

@interface ATXUniversalBlendingLayerServer : NSObject <ATXProactiveSuggestionClientModelXPCInterface, NSXPCListenerDelegate> {
    _PASLock *_pendingRefreshTrackerLock;
    ATXClientModelNotificationManager *_clientModelNotificationManager;
    id<ATXBlendingLayerServerDelegateProtocol> _serverDelegate;
    id<ATXEngagementRecordManagerProtocol> _engagementRecordsManager;
    id<ATXUniversalBlendingLayerHyperParametersProtocol> _hyperParameters;
    ATXUniversalRealTimeSuggestionRequestCoordinator *_realTimeSuggestionRequestCoordinator;
    ATXUniversalBlendingFeedbackWriter *_feedbackWriter;
    NSObject<OS_dispatch_queue> *_queue;
    _PASSimpleCoalescingTimer *_coalescedBlendingLayerRefreshOperation;
    int _blendingDarwinNotificationObserver;
    NSXPCListener *_xpcListener;
}

@property (readonly, nonatomic) ATXUniversalBlendingLayer *blendingLayer;
@property (readonly, nonatomic) id<ATXClientModelCacheManagerProtocol> clientModelCacheManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerRealTimeSuggestionProviderDelegate:(id)a0 clientModelId:(id)a1;
- (void)clientModelUpdatedNotificationId:(id)a0 clientModelId:(id)a1 completion:(id /* block */)a2;
- (void)updateClientModelCacheWithCacheUpdate:(id)a0 previousCacheUpdate:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)start;
- (void)clientModelUpdatedSuggestions:(id)a0 feedbackMetadata:(id)a1 clientModelId:(id)a2 completion:(id /* block */)a3;
- (void)coalescedBlendingLayerRefresh;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)generatedRankedSuggestionsForSuggestionRequest:(id)a0 limit:(id)a1;
- (void)refreshBlendingLayer;
- (void)generateLayoutForRequest:(id)a0 reply:(id /* block */)a1;
- (id)initWithBlendingLayer:(id)a0 engagementRecordsManager:(id)a1 hyperParameters:(id)a2 serverDelegate:(id)a3;
- (id)consumerSubTypesToRefreshGivenUpdatesFromClientModels:(id)a0;
- (void).cxx_destruct;
- (void)generateRankedSuggestionsForRequest:(id)a0 limit:(id)a1 reply:(id /* block */)a2;
- (void)refreshBlendingLayerIfNeededForNewSuggestions:(id)a0 previousCacheUpdate:(id)a1 clientModelId:(id)a2;
- (id)initWithBlendingLayer:(id)a0 engagementRecordsManager:(id)a1 hyperParameters:(id)a2 clientModelCacheManager:(id)a3 clientModelNotificationManager:(id)a4 serverDelegate:(id)a5 pendingRefreshTracker:(id)a6;
- (void)retrieveSuggestionsForClientModelId:(id)a0 reply:(id /* block */)a1;
- (id)clientModelsThatUpdatedSuggestionsRecently;
- (void)setupXPCListener;
- (id)selectedLayoutForSuggestionRequest:(id)a0;
- (BOOL)willForceRefreshOfAllUIs;

@end
