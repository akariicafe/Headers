@class ATXUICacheManager, NSXPCConnection;

@interface ATXProactiveSuggestionConsumer : NSObject {
    unsigned char _consumer;
    ATXUICacheManager *_cacheManager;
    NSXPCConnection *_xpcConnection;
}

- (id)init;
- (id)initWithConsumerSubType:(unsigned char)a0;
- (void)dealloc;
- (id)layoutForRequest:(id)a0;
- (id)suggestionsForRequest:(id)a0 limit:(id)a1;
- (id)suggestionLayoutFromCache;
- (void)setupRemoteClientXPCConnection;
- (id)remoteSyncBlendingLayerServer;
- (void).cxx_destruct;
- (id)cachedSuggestionsForClientModelType:(long long)a0;

@end
