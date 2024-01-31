@class NSProgress, NSString;

@interface PLModelMigrationAction_RepairSingletons : PLModelMigrationActionPreRepair <PLModelMigrationAction>

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)repairSingletonObjectsInDatabaseUsingContext:(id)a0 pathManager:(id)a1 error:(id *)a2;
+ (void)_repairRootFolderFixedOrderKeysInStore:(id)a0 context:(id)a1 pathManager:(id)a2;

- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;

@end
