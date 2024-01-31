@class NSString, GEOOfflineDataConfiguration, GEOTileDB, NSArray, geo_isolater;

@interface GEOOfflineLocalDataAccess : NSObject <GEOOfflineDataAccessor> {
    GEOTileDB *_diskCache;
    GEOOfflineDataConfiguration *_configuration;
    NSArray *_testBundles;
    geo_isolater *_testBundlesIsolation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)dataForKey:(id)a0 error:(id *)a1;
- (void)getAvailableKeysForLayer:(unsigned int)a0 callbackQueue:(id)a1 callback:(id /* block */)a2;
- (void)getDataForKey:(id)a0 callbackQueue:(id)a1 callback:(id /* block */)a2;
- (void)getOfflineVersionMetadataWithCallbackQueue:(id)a0 callback:(id /* block */)a1;
- (void)hasDataForKey:(id)a0 callbackQueue:(id)a1 callback:(id /* block */)a2;
- (BOOL)hasDataForKey:(id)a0 error:(id *)a1;
- (id)initWithDiskCache:(id)a0 configuration:(id)a1;
- (id)offlineTileMetadataWithError:(id *)a0;

@end
