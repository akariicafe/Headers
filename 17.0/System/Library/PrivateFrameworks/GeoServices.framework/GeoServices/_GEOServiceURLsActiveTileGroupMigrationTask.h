@class GEOResourceManifestConfiguration, NSString, GEOActiveTileGroup, GEOReportedProgress, GEOServiceURLsActiveTileGroupMigrator, GEOTileGroup, NSProgress, GEOActiveTileGroupMigrationTaskOptions, GEOResources, GEODataSetDescription;
@protocol NSObject;

@interface _GEOServiceURLsActiveTileGroupMigrationTask : NSObject <GEOActiveTileGroupMigrationTask> {
    GEOServiceURLsActiveTileGroupMigrator *_migrator;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    GEOTileGroup *_newTileGroup;
    GEOResources *_resourceManifest;
    GEOActiveTileGroup *_oldTileGroup;
    GEODataSetDescription *_dataSetDescription;
    GEOReportedProgress *_progress;
}

@property (readonly, nonatomic) long long estimatedWeight;
@property (retain, nonatomic) id<NSObject> transaction;
@property (retain, nonatomic) GEOActiveTileGroupMigrationTaskOptions *options;
@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)a0 callbackQueue:(id)a1;
- (void)cancel;
- (id)initWithMigrator:(id)a0 manifestConfiguration:(id)a1 newTileGroup:(id)a2 inResourceManifest:(id)a3 oldTileGroup:(id)a4 dataSet:(id)a5;
- (void)populateTileGroup:(id)a0;
- (void)removeOldData:(id)a0;

@end
