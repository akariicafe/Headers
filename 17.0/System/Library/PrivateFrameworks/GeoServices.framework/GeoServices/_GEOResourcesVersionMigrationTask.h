@class GEOActiveTileGroup, GEOActiveTileGroupMigrationTaskOptions, GEOResourcesVersionMigrator, NSObject, GEOPowerAssertion, GEOResources, GEODataSetDescription, NSString, NSSet, GEOResourceManifestConfiguration, GEOTileGroup, GEOReportedProgress, NSArray, GEOResourceLoader, NSProgress;
@protocol OS_dispatch_queue, NSObject;

@interface _GEOResourcesVersionMigrationTask : NSObject <GEOActiveTileGroupMigrationTask> {
    GEOResourcesVersionMigrator *_migrator;
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _running;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    GEOTileGroup *_newTileGroup;
    GEOResources *_resourceManifest;
    GEODataSetDescription *_preferredDataSet;
    GEOActiveTileGroup *_oldTileGroup;
    NSSet *_activeScales;
    NSSet *_activeScenarios;
    id /* block */ _completionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GEOResourceLoader *_immediateResourceLoader;
    GEOResourceLoader *_wifiOnlyResourceLoader;
    NSArray *_loadedResources;
    NSArray *_unloadedConditionalResources;
    GEOReportedProgress *_progress;
    GEOPowerAssertion *_powerAssertion;
}

@property (readonly, nonatomic) long long estimatedWeight;
@property (retain, nonatomic) id<NSObject> transaction;
@property (retain, nonatomic) GEOActiveTileGroupMigrationTaskOptions *options;
@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_resourceLoaderClass;
+ (id)_resourcesDirectory:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)a0 callbackQueue:(id)a1;
- (void)cancel;
- (void)_loadImmediateResources:(id)a0 conditionalWifiResources:(id)a1 completionHandler:(id /* block */)a2;
- (id)_resourcesDirectory;
- (id)_staleResourceForResource:(id)a0;
- (id)initWithMigrator:(id)a0 manifestConfiguration:(id)a1 newTileGroup:(id)a2 inResourceManifest:(id)a3 dataSet:(id)a4 oldTileGroup:(id)a5 activeScales:(id)a6 activeScenarios:(id)a7;
- (void)populateTileGroup:(id)a0;
- (void)removeOldData:(id)a0;

@end
