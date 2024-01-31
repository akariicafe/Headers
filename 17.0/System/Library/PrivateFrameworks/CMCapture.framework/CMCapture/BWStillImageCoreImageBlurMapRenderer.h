@class NSString, BWPixelBufferPool, CIFilter, CIContext;

@interface BWStillImageCoreImageBlurMapRenderer : NSObject <BWFilterRenderer> {
    CIContext *_ciContext;
    CIFilter *_blurMapFilter;
    BOOL _hairnetEnabled;
    BWPixelBufferPool *_blurMapPixelBufferPool;
    struct opaqueCMFormatDescription { } *_blurredGainMapFormatDescription;
    BWPixelBufferPool *_blurredGainMapPixelBufferPool;
}

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) short type;
@property (readonly, nonatomic) BOOL supportsAnimation;
@property (readonly, nonatomic) BOOL adjustsMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (int)prepareForRenderingWithParameters:(id)a0 inputVideoFormat:(id)a1 inputDepthFormat:(id)a2;
- (void)renderUsingParameters:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 originalPixelBuffer:(struct __CVBuffer { } *)a3 processedPixelBuffer:(struct __CVBuffer { } *)a4 completionHandler:(id /* block */)a5;
- (int)_allocateBlurredGainMapPixleBufferPoolForBuffersOfWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (int)_allocateBlurMapPixelBufferPoolForBuffersOfWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (id)initForRenderingWithContext:(id)a0 hairnetEnabled:(BOOL)a1;

@end
