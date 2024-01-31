@class GEOActiveTileGroup, NSURL, GEOActiveTileGroupMigrationTaskOptions, GEOAttributionVersionMigrator, NSObject, GEOResources, NSDictionary, NSMutableArray, GEODataSetDescription, NSString, GEOTileGroup, GEOResourceManifestConfiguration, NSSet, GEOReportedProgress, NSProgress;
@protocol OS_dispatch_queue, NSObject;

@interface _GEOAttributionMigrationTask : NSObject <GEOActiveTileGroupMigrationTask, GEODataURLSessionTaskDelegate> {
    GEOAttributionVersionMigrator *_migrator;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    GEOTileGroup *_newTileGroup;
    GEOResources *_resourceManifest;
    GEOActiveTileGroup *_oldTileGroup;
    GEODataSetDescription *_dataSetDescription;
    GEOReportedProgress *_progress;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_inProgressTasks;
    NSURL *_destinationDirectory;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _finished;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id /* block */ _completionHandler;
    NSSet *_allAttributionFilenames;
    NSDictionary *_urlToChecksum;
}

@property (readonly, nonatomic) long long estimatedWeight;
@property (retain, nonatomic) id<NSObject> transaction;
@property (retain, nonatomic) GEOActiveTileGroupMigrationTaskOptions *options;
@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dataURLSession:(id)a0 didCompleteTask:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)a0 callbackQueue:(id)a1;
- (void)cancel;
- (void)_finishWithError:(id)a0;
- (void)_finishedAllTasks;
- (BOOL)_hasExistingUsableDownloadForURL:(id)a0 withChecksum:(id)a1;
- (void)_startWithCompletionHandler:(id /* block */)a0 callbackQueue:(id)a1;
- (id)initWithMigrator:(id)a0 manifestConfiguration:(id)a1 newTileGroup:(id)a2 inResourceManifest:(id)a3 oldTileGroup:(id)a4 dataSet:(id)a5;
- (void)populateTileGroup:(id)a0;
- (void)removeOldData:(id)a0;

@end
