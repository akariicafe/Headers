@class NSSet, NSString, NSURL, NSOperationQueue, PLBackgroundJobService, PLLazyObject;

@interface PLServerPhotoLibraryBundle : PLPhotoLibraryBundle <NSFilePresenter> {
    Class _libraryServicesDelegateClass;
    PLBackgroundJobService *_backgroundJobService;
    NSOperationQueue *_presentedItemOperationQueue;
    PLLazyObject *_lazyTouchCoalescer;
}

@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)touch;
- (void)close;
- (id)boundAssetsdServices;
- (void)_touch;
- (BOOL)calculateTotalSizeWithResult:(id /* block */)a0;
- (id)newLibraryServicesManager;
- (void)clearShutdownReason;
- (id)transferPersons:(id)a0 toBundle:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)initWithLibraryURL:(id)a0 bundleController:(id)a1 backgroundJobService:(id)a2 libraryServicesDelegateClass:(Class)a3;
- (void)relinquishPresentedItemToReader:(id /* block */)a0;
- (BOOL)shouldRelinquishToWriterOfSubitemAtURL:(id)a0;
- (id)newAssetsdClient;
- (id)transferAssets:(id)a0 toBundle:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)unbindAssetsdService:(id)a0;
- (id)newBoundAssetsdServicesTable;
- (void)presentedItemDidMoveToURL:(id)a0;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)invalidateClientConnectionsWithReason:(id)a0;
- (id)newChangePublisher;
- (void)relinquishPresentedItemToWriter:(id /* block */)a0;
- (BOOL)bindAssetsdService:(id)a0 error:(id *)a1;
- (void)accommodatePresentedSubitemDeletionAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)_newTouchCoalescer;
- (void)savePresentedItemChangesWithCompletionHandler:(id /* block */)a0;
- (void)shutdownWithReason:(id)a0;

@end
