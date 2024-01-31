@class NTKBundleComplicationIdentifierCache;

@interface NTKBundleComplicationMigrationService : NSObject <NTKBundleComplicationMigrationServiceProtocol> {
    NTKBundleComplicationIdentifierCache *_cache;
}

- (id)init;
- (void).cxx_destruct;
- (void)_enumerateBundles:(id /* block */)a0;
- (id)_loadAndFetchClassesForBundleIdentifier:(id)a0;
- (void)_performMigrationWithDataSource:(id)a0 complication:(id)a1 family:(long long)a2 device:(id)a3 completion:(id /* block */)a4;
- (void)_processFallbackRequest:(id)a0 completion:(id /* block */)a1;
- (void)_processSingleRequest:(id)a0 completion:(id /* block */)a1;
- (void)generateComplicationTypeLookupForDevice:(id)a0 completion:(id /* block */)a1;
- (void)processRequest:(id)a0 completion:(id /* block */)a1;

@end
