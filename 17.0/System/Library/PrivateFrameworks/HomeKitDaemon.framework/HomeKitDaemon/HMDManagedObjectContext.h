@interface HMDManagedObjectContext : NSManagedObjectContext <HMFAsyncContext>

- (BOOL)save:(id *)a0;
- (void)performBlockAndWait:(id /* block */)a0;
- (void)assertIsExecuting;
- (void)performBlock:(id /* block */)a0;

@end
