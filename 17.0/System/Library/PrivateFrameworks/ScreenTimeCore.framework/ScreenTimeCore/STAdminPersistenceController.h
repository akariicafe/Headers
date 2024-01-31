@interface STAdminPersistenceController : STPersistenceController

@property (class, readonly, nonatomic) STAdminPersistenceController *sharedController;

- (id)newBackgroundContext;
- (id)viewContext;
- (id)init;
- (void)performBackgroundTask:(id /* block */)a0;
- (void)performBackgroundTaskAndWait:(id /* block */)a0;
- (BOOL)saveContext:(id)a0 error:(id *)a1;

@end
