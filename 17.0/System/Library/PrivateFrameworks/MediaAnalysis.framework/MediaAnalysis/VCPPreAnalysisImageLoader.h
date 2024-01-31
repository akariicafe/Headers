@class VCPSceneProcessingImageManager, VCPPoolBasedPixelBufferCreator;

@interface VCPPreAnalysisImageLoader : NSObject {
    VCPSceneProcessingImageManager *_imageManager;
    VCPPoolBasedPixelBufferCreator *_monochromeBufferCreator;
    struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } _transferSession;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)_convertFromBuffer:(struct __CVBuffer { } *)a0 toLumaPixelBuffer:(struct __CVBuffer **)a1 abnormalDimension:(unsigned long long)a2;
- (int)_createPixelBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(int)a2 pixelBuffer:(struct __CVBuffer **)a3;
- (id)initWithMonochromeBufferCreator:(id)a0;
- (int)loadImageURL:(id)a0 abnormalDimension:(unsigned long long)a1 withNonPanoPreWarmSizes:(id)a2 toColorPixelBuffer:(struct __CVBuffer **)a3 lumaPixelBuffer:(struct __CVBuffer **)a4 andImage:(id *)a5;

@end
