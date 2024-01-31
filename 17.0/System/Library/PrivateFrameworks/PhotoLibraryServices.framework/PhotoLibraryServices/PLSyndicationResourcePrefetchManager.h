@protocol PLSyndicationResourcePrefetchManagerDelegate;

@interface PLSyndicationResourcePrefetchManager : NSObject

@property (readonly, weak, nonatomic) id<PLSyndicationResourcePrefetchManagerDelegate> delegate;

- (void)_prepareResourceForPrefetch:(id)a0;
- (void)prefetchResourceWithObjectID:(id)a0 completion:(id /* block */)a1;
- (id)_resourcesForPrefetchWithManagedObjectContext:(id)a0 predicate:(id)a1;
- (id)highPriorityResourcesForPrefetchWithManagedObjectContext:(id)a0;
- (void)prefetchResourceWithObjectIDs:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)lowPriorityResourcesForPrefetchWithManagedObjectContext:(id)a0;
- (id)_fetchDownloadThrottlingDateAndClearIfNeededWithManagedObjectContext:(id)a0;
- (void)_handleDownloadFinishedWithSuccess:(BOOL)a0 error:(id)a1 resource:(id)a2 downloadThrottlingDate:(id)a3 networkAccessAllowed:(BOOL)a4 managedObjectContext:(id)a5;

@end
