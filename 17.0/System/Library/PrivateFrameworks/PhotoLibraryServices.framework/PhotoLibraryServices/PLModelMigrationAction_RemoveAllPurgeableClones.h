@class NSProgress, NSString;

@interface PLModelMigrationAction_RemoveAllPurgeableClones : PLModelMigrationActionBackground <PLModelMigrationAction>

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)actionProgressWeight;

- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;
- (long long)removePurgableClonesForAssetUUID:(id)a0 withMOC:(id)a1 error:(id *)a2;

@end
