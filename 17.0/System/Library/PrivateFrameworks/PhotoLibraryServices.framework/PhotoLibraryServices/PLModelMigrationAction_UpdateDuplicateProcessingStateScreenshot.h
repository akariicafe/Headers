@interface PLModelMigrationAction_UpdateDuplicateProcessingStateScreenshot : PLModelMigrationAction_UpdateDuplicateProcessingState

+ (long long)actionProgressWeight;

- (id)fetchRequestForScreenshot;
- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;

@end
