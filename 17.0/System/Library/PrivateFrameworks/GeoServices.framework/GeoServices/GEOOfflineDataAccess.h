@class geo_isolater, NSArray;
@protocol GEOOfflineDataAccessor;

@interface GEOOfflineDataAccess : NSObject {
    id<GEOOfflineDataAccessor> _accessor;
    geo_isolater *_isolation;
    NSArray *_fullyDownloadedRegions;
    int _fullyDownloadedSubscriptionsChangedToken;
}

+ (id)sharedInstance;
+ (void)_setSharedInstanceUseLocalPersistence:(BOOL)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)dataForKey:(id)a0 error:(id *)a1;
- (id)initWithAccessor:(id)a0;
- (void)_resetFullyDownloadedRegions;
- (void)getAvailableKeysForLayer:(unsigned int)a0 callbackQueue:(id)a1 callback:(id /* block */)a2;
- (void)getDataForKey:(id)a0 callbackQueue:(id)a1 callback:(id /* block */)a2;
- (void)getFullyDownloadedRegionsWithCallbackQueue:(id)a0 callback:(id /* block */)a1;
- (void)getOfflineVersionMetadataWithCallbackQueue:(id)a0 callback:(id /* block */)a1;
- (void)hasDataForKey:(id)a0 callbackQueue:(id)a1 callback:(id /* block */)a2;
- (BOOL)hasDataForKey:(id)a0 error:(id *)a1;
- (id)offlineTileMetadataWithError:(id *)a0;

@end
