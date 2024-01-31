@interface GEOUtilityService : NSObject

@property (class, readonly, nonatomic) GEOUtilityService *sharedService;

- (id)_getPathSynchronous:(const char *)a0;
- (void)getCurrentGeoServicesState:(id)a0 callback:(id /* block */)a1;
- (id)getGeoServicesCacheDirectoryPath;
- (id)getHomeDirectoryPath;
- (void)sendHeartbeat;

@end
