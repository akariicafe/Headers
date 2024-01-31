@class AVAssetImageGenerator, ALAssetsLibrary;

@interface SLSheetPreviewImageSource : NSObject {
    ALAssetsLibrary *_assetsLibrary;
    AVAssetImageGenerator *_assetImageGenerator;
}

@property (readonly) ALAssetsLibrary *assetsLibrary;

- (void).cxx_destruct;
- (void)_fetchPreviewImageForAssetURL:(id)a0 resultBlock:(id /* block */)a1;
- (void)_generatePreviewImageForAttachment:(id)a0 queueToBlockWhileDownsampling:(id)a1 resultBlock:(id /* block */)a2;
- (void)_generatePreviewImageForVideoFileURL:(id)a0 resultBlock:(id /* block */)a1;
- (void)cancelVideoPreviewGeneration;
- (void)previewImageForAttachment:(id)a0 queueToBlockWhileDownsampling:(id)a1 resultBlock:(id /* block */)a2;

@end
