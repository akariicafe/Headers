@class NSProgress, NSString;

@interface PLModelMigrationAction_DeletePetPersonsAndDetectedFaces : PLModelMigrationAction <PLModelMigrationAction>

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)deleteManagedObjectsWithManagedObjectContext:(id)a0 entity:(Class)a1 predicate:(id)a2 pendingParentUnitCount:(long long)a3 deletedIdentifiers:(id *)a4 entityIdentifierKeyPath:(id)a5 error:(id *)a6;
- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;

@end
