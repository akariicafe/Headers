@interface ICMediaAPIURLMappingProvider : NSObject

@property (class, readonly, nonatomic) ICMediaAPIURLMappingProvider *sharedProvider;

- (id)_cacheFileURL;
- (id)_loadCacheDictionary;
- (void)_saveCachedResponsePayload:(id)a0 eTag:(id)a1;
- (void)clearCachedURLMappings;
- (id)getCurrentURLMappingSet;
- (void)setCurrentURLMappingSet:(id)a0;
- (void)updateURLMappingsWithCompletion:(id /* block */)a0;

@end
