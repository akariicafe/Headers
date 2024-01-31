@class PLModelMigratorLog, NSString, NSProgress, NSMutableArray;
@protocol PLModelMigrationContext;

@interface PLModelMigration : NSObject <NSProgressReporting> {
    BOOL _hadStagedMigration;
    NSMutableArray *_actions;
    NSMutableArray *_actionsStaged;
    NSMutableArray *_actionsPreRepair;
    NSMutableArray *_actionsPostRepair;
    unsigned long long _actionProgressPortion;
    unsigned long long _actionProgressPortionPreRepair;
    unsigned long long _actionProgressPortionPostRepair;
    id<PLModelMigrationContext> _internalMigrationContext;
}

@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) PLModelMigratorLog *logger;
@property (retain, nonatomic) NSString *migrationUUID;
@property (readonly) BOOL allowRebuild;
@property (readonly) BOOL didCreateSqliteErrorIndicator;
@property (retain) id legacyMigrationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)currentModelVersion;

- (id)pathManager;
- (long long)migrateWithError:(id *)a0;
- (id)analyticsEventManager;
- (void).cxx_destruct;
- (id)migrationContext;
- (long long)setupWithError:(id *)a0;
- (id)_managedObjectModelForLightweightMigrationStageWithURL:(id)a0;
- (id)_nextRequiredStagedMigrationVersionAfterVersion:(id)a0;
- (void)_registerActionClass:(Class)a0 actionsContainer:(id)a1 progressPortion:(unsigned long long *)a2;
- (id)_stagedManagedObjectModelURLWithStageVersion:(id)a0;
- (void)actionRegistration;
- (id)addStoreWithCoordinator:(id)a0 migrationUUID:(id)a1 storeURL:(id)a2 options:(id)a3 description:(id)a4 fromVersion:(int)a5 toVersion:(int)a6 progress:(id)a7 progressUnitCount:(unsigned long long)a8 error:(id *)a9;
- (id)initWithMigrationContext:(id)a0 logger:(id)a1;
- (BOOL)isMigrationCancelledWithError:(id *)a0;
- (long long)migratePostProcessingWithActions:(id)a0 migrationActionType:(long long)a1 progress:(id)a2 progressUnitCount:(unsigned long long)a3 error:(id *)a4;
- (long long)migratePostProcessingWithProgressUnitCount:(unsigned long long)a0 error:(id *)a1;
- (long long)migrateSchemaMigrationWithAutoMigrationOptions:(id)a0 currentStoreVersion:(id)a1 error:(id *)a2;
- (long long)migrateStagedMigrationWithAutoMigrationOptions:(id)a0 currentStoreVersion:(id)a1 error:(id *)a2;
- (void)registerActionClass:(Class)a0 onCondition:(BOOL)a1;
- (void)registerPostRepairActionClass:(Class)a0 onCondition:(BOOL)a1;
- (void)registerPreRepairActionClass:(Class)a0 onCondition:(BOOL)a1;
- (void)registerStagedActionClass:(Class)a0 onCondition:(BOOL)a1;
- (void)resetBackgroundActionClass:(Class)a0 onCondition:(BOOL)a1;
- (long long)runMigrationAction:(id)a0 withCoordinator:(id)a1 error:(id *)a2;

@end
