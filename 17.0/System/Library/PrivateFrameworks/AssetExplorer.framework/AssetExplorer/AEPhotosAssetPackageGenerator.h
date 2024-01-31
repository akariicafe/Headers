@class NSError, PHAsset, NSString, PUPickerAssetPreparationOptions, PHAssetExportRequest, AEAssetPackage, PXAssetReference, NSObject, NSProgress;
@protocol OS_dispatch_queue, OS_dispatch_group, PUDisplayAsset;

@interface AEPhotosAssetPackageGenerator : AEAssetPackageGenerator <NSProgressReporting, PUReviewAssetProviderRequest>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_packagerIvarIsolationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *_packagerWorkGroup;
@property (readonly, nonatomic) PHAssetExportRequest *_exportRequest;
@property (retain, nonatomic, setter=_setIvarQueueCurrentPackage:) AEAssetPackage *_ivarQueue_currentPackage;
@property (retain, nonatomic, setter=_setIvarQueueLastError:) NSError *_ivarQueue_lastError;
@property (retain, nonatomic) PHAsset *_asset;
@property (readonly, copy, nonatomic) PXAssetReference *sourceAssetReference;
@property (retain, nonatomic) PUPickerAssetPreparationOptions *preparationOptions;
@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<PUDisplayAsset> sourceAsset;

+ (void)deleteTemporaryStorageWithTimeout:(double)a0;

- (id)initWithAsset:(id)a0;
- (void).cxx_destruct;
- (id)initWithAssetReference:(id)a0;
- (void)cancelReviewAssetRequest;
- (void)requestReviewAssetWithCompletionHandler:(id /* block */)a0;
- (id)beginGenerating;
- (id)_assetPackageforPHAsset:(id)a0 withAssetExportRequestFileURLs:(id)a1 error:(id *)a2;
- (void)_callCompletionWithResult:(id /* block */)a0;
- (void)_commonAEPhotosAssetPackageGeneratorInitWithAsset:(id)a0 assetReference:(id)a1;
- (id)_copyAssetExportFileURLs:(id)a0 forAsset:(id)a1 error:(id *)a2;
- (id)_copyItemAtURL:(id)a0 toOutputDirectory:(id)a1 error:(id *)a2;
- (id)_createOutputDirectoryBaseURLWithIdentifier:(id)a0 error:(id *)a1;
- (id)_generatePackageFromAsset:(id)a0;
- (void)_generatePackageWithAssetExportFileURLs:(id)a0 error:(id)a1;
- (BOOL)retrieveGeneratedPackageWithCompletion:(id /* block */)a0;

@end
