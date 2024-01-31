@class NSProgress, NSString;

@interface PLModelMigrationAction_ResetDuplicateProcessingValue : PLModelMigrationActionPostRepair <PLModelMigrationAction>

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;

@end
