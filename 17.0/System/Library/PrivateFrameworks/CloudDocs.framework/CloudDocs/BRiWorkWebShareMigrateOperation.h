@class NSURL, NSOperationQueue;

@interface BRiWorkWebShareMigrateOperation : BROperation

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (copy) id /* block */ shareMigrationCompletionBlock;

- (id)initWithURL:(id)a0;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)_copyShare;
- (void)_migrateShare;
- (void)_startSharingReadWrite:(BOOL)a0;

@end
