@class PAImageConversionServiceClient, NSSet, NSProgress, PAVideoConversionServiceClient;

@interface PLBackgroundJobDeferredRenderDerivativesBaseWorker : PLBackgroundJobWorker {
    NSProgress *_progressForCurrentAsset;
    PAImageConversionServiceClient *_imageConversionClient;
    PAVideoConversionServiceClient *_videoConversionClient;
}

@property (readonly, copy, nonatomic) NSSet *deferredProcessingStatesHandled;

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (id)_criteriaToUse;

- (BOOL)isInterruptible;
- (id)taskIdentifier;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)_predicateToFetchDeferredAssets;
- (void)stopWorkingOnItem:(id)a0;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;
- (id)imageConversionClient;
- (void).cxx_destruct;
- (id)videoConversionClient;

@end
