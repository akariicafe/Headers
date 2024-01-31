@class NSProgress, NSString;

@interface PLModelMigrationAction_FixDuplicateMergeCrashRecoveryAssets : PLModelMigrationActionBackground <PLModelMigrationAction>

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)actionProgressWeight;

- (BOOL)_isLibraryRepairRequiredWithManagedObjectContext:(id)a0;
- (void)_processForRepairWithAsset:(id)a0 repairCount:(long long *)a1;
- (void)_repairAsset:(id)a0;
- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;

@end
