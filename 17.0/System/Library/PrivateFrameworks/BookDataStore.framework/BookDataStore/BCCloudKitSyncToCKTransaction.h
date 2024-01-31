@protocol BCCloudDataSyncProvider;

@interface BCCloudKitSyncToCKTransaction : BCCloudKitTransaction

@property (retain, nonatomic) id<BCCloudDataSyncProvider> syncManager;

+ (id)transactionNameForEntityName:(id)a0;

- (void).cxx_destruct;
- (double)coalescingDelay;
- (id)initWithEntityName:(id)a0 syncManager:(id)a1 delegate:(id)a2;
- (void)performWorkWithCompletion:(id /* block */)a0;
- (double)transactionLifetimeTimout;

@end
