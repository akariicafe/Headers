@class PLModelMigratorLog, NSString, NSProgress, PLModelMigrationHistory, PLPhotoLibraryPathManager, PLLazyObject;
@protocol PLModelMigrationContext;

@interface PLModelMigrationActionBackground : NSObject <PLModelMigrationActionCore> {
    NSString *_resumeMarkerKeyPath;
    PLLazyObject *_lazyAppPrivateData;
}

@property (retain) PLModelMigratorLog *logger;
@property (retain) NSProgress *progress;
@property (copy) id /* block */ continuationHandler;
@property (readonly) BOOL isCancelled;
@property (readonly) id<PLModelMigrationContext> migrationContext;
@property (readonly) PLPhotoLibraryPathManager *pathManager;
@property (readonly) NSString *actionName;
@property (readonly) PLModelMigrationHistory *migrationHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionDescription;
+ (long long)actionProgressWeight;
+ (id)shortenedMigrationActionClassName;

- (void).cxx_destruct;
- (void)setup;
- (id)appPrivateData;
- (id)cancellableDiscreteProgressWithTotalUnitCount:(long long)a0 pendingParentUnitCount:(long long)a1 cancellationHandler:(id /* block */)a2;
- (void)finalizeProgress;
- (id)initWithMigrationContext:(id)a0 logger:(id)a1 progress:(id)a2 continuationHandler:(id /* block */)a3;
- (BOOL)isCancelledWithResumeMarker:(id)a0 error:(id *)a1;
- (id)resumeMarker;
- (void)setResumeMarkerValue:(id)a0;

@end
