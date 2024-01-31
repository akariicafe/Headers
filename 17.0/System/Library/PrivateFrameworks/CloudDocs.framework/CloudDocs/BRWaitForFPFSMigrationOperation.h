@interface BRWaitForFPFSMigrationOperation : BROperation

@property (copy) id /* block */ fpfsMigrationCompletion;

- (id)init;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
