@class NSString, _PASLock;

@interface ATXClientModelCacheManager : NSObject <ATXClientModelCacheManagerProtocol> {
    _PASLock *_clientModelCacheHandlersLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cacheDirectory;
- (id)init;
- (id)cacheFileHandlerForClientModel:(id)a0 guardedData:(id)a1;
- (id)lastCacheUpdateDateForClientModel:(id)a0;
- (id)cachedSuggestionsForAllClientModels;
- (void)initGuardedData;
- (void)updateCachedSuggestions:(id)a0;
- (id)cachedSuggestionsForClientModel:(id)a0;
- (double)cacheAgeForClientModel:(id)a0;
- (void).cxx_destruct;
- (void)addCacheHandlersForExistingClientModelCaches;
- (void)addNewCacheHandlerIfNeededGivenExistingCacheHandlersInGuardedData:(id)a0 clientModelId:(id)a1;

@end
