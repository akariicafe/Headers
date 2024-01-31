@protocol GEOSearchAttributionServerProxy;

@interface GEOSearchAttributionManifestManager : NSObject

@property (readonly, nonatomic) id<GEOSearchAttributionServerProxy> serverProxy;

+ (id)sharedManager;
+ (void)useLocalProxy;
+ (void)setUseLocalProxy:(BOOL)a0;
+ (void)useRemoteProxy;
+ (void)useProxy:(Class)a0;

- (id)init;
- (void).cxx_destruct;
- (void)loadAttributionInfoForIdentifiers:(id)a0 completionHandler:(id /* block */)a1;

@end
