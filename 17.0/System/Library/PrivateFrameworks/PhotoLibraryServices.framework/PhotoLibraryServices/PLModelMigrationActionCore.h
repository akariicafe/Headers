@class PLModelMigratorLog, NSString, NSProgress, PLModelMigrationHistory, PLPhotoLibraryPathManager, PLMigrationContext;

@interface PLModelMigrationActionCore : NSObject <PLModelMigrationActionCore>

@property (retain) PLModelMigratorLog *logger;
@property (retain) NSProgress *progress;
@property (readonly) PLMigrationContext *migrationContext;
@property (readonly) unsigned short startingSchemaVersion;
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
- (id)cancellableDiscreteProgressWithTotalUnitCount:(long long)a0 pendingParentUnitCount:(long long)a1 cancellationHandler:(id /* block */)a2;
- (void)finalizeProgress;
- (id)initWithMigrationContext:(id)a0 logger:(id)a1 progress:(id)a2;
- (BOOL)isCancelledWithError:(id *)a0;

@end
