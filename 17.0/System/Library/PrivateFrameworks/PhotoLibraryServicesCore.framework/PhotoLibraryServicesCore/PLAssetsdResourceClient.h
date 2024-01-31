@protocol PLAssetJobExecutor;

@interface PLAssetsdResourceClient : PLAssetsdBaseClient {
    id<PLAssetJobExecutor> _creationRequestBridge;
}

- (id)consolidateAssets:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)updateInternalResourcePath:(id)a0 objectURI:(id)a1 error:(id *)a2;
- (void)adjustmentDataForAsset:(id)a0 networkAccessAllowed:(BOOL)a1 trackCPLDownload:(BOOL)a2 completionHandler:(id /* block */)a3;
- (BOOL)fileURLForAssetURL:(id)a0 withAdjustments:(BOOL)a1 fileURL:(id *)a2 error:(id *)a3;
- (BOOL)imageDataForAsset:(id)a0 format:(int)a1 allowPlaceholder:(BOOL)a2 wantURLOnly:(BOOL)a3 networkAccessAllowed:(BOOL)a4 trackCPLDownload:(BOOL)a5 outImageData:(id *)a6 outImageDataInfo:(id *)a7 outCPLDownloadContext:(id *)a8 error:(id *)a9;
- (void)downloadCloudSharedAsset:(id)a0 withCloudPlaceholderKind:(unsigned long long)a1 shouldPrioritize:(BOOL)a2 shouldExtendTimer:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)initWithQueue:(id)a0 proxyCreating:(id)a1 proxyGetter:(SEL)a2;
- (void)saveAssetWithJobDictionary:(id)a0 imageSurface:(struct __IOSurface { } *)a1 previewImageSurface:(struct __IOSurface { } *)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)addAssetWithURL:(id)a0 toAlbumWithUUID:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)sandboxExtensionsForAssetWithUUID:(id)a0 sandboxExtensionTokens:(id *)a1 error:(id *)a2;
- (BOOL)fileDescriptorForAssetURL:(id)a0 withAdjustments:(BOOL)a1 fileExtension:(id *)a2 fileDescriptor:(int *)a3 error:(id *)a4;
- (id)projectExtensionDataForProjectUuid:(id)a0;
- (void)addGroupWithName:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)estimatedOutputFileLengthForVideoURL:(id)a0 fallbackFilePath:(id)a1 exportPreset:(id)a2 exportProperties:(id)a3 outFileLength:(long long *)a4 error:(id *)a5;
- (void)imageDataForAsset:(id)a0 format:(int)a1 allowPlaceholder:(BOOL)a2 wantURLOnly:(BOOL)a3 networkAccessAllowed:(BOOL)a4 trackCPLDownload:(BOOL)a5 completionHandler:(id /* block */)a6;
- (BOOL)sandboxExtensionForFileSystemBookmark:(id)a0 bookmarkURL:(id *)a1 sandboxExtensionToken:(id *)a2 error:(id *)a3;

@end
