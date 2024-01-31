@class PAImageConversionServiceClient, NSProgress, PAVideoConversionServiceClient, PLDeferredPhotoFinalizer;

@interface PLBackgroundJobResourceAvailabilityWorker : PLBackgroundJobWorker {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSProgress *_progressForCurrentAsset;
    PAImageConversionServiceClient *_imageConversionClient;
    PAVideoConversionServiceClient *_videoConversionClient;
    int _countOfDeferredPhotosProcessed;
    PLDeferredPhotoFinalizer *_deferredPhotoFinalizer;
}

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (BOOL)isInterruptible;
- (id)deferredPhotoFinalizer;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (void)workerDidFinishWithDatabaseContext:(id)a0;
- (void)stopWorkingOnItem:(id)a0;
- (void)_performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;
- (id)imageConversionClient;
- (id)initWithLibraryBundle:(id)a0;
- (void).cxx_destruct;
- (id)videoConversionClient;
- (BOOL)avoidCheckingOtherWorkersIfThisWorkerHasPendingWork;

@end
