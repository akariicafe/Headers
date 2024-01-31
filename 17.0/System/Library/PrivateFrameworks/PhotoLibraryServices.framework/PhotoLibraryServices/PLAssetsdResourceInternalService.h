@class NSString;

@interface PLAssetsdResourceInternalService : PLAbstractLibraryServicesManagerService <PLAssetsdResourceInternalServiceProtocol> {
    NSString *_trustedCallerBundleID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)asynchronousMasterThumbnailForAssetUUID:(id)a0 reply:(id /* block */)a1;
- (void)batchSaveAssetJobs:(id)a0 reply:(id /* block */)a1;
- (void)cancelAllPrewarmingWithReply:(id /* block */)a0;
- (id)initWithLibraryServicesManager:(id)a0 trustedCallerBundleID:(id)a1;
- (void)prewarmWithCapturePhotoSettings:(id)a0 reply:(id /* block */)a1;

@end
