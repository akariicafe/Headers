@class NSString, PTRenderPipeline, FigMetalContext, PTRenderRequest, MTLTextureDescriptor, BWFigVideoCaptureDevice;
@protocol PTRenderState, MTLCommandQueue;

@interface BWStreamingRaytracingSDOFRenderer : NSObject <BWFilterRenderer> {
    FigMetalContext *_metalContext;
    PTRenderPipeline *_ptRenderPipeline;
    PTRenderRequest *_ptRenderRequest;
    MTLTextureDescriptor *_texDesc;
    MTLTextureDescriptor *_texDescUV;
    MTLTextureDescriptor *_texDescDisparity;
    id<PTRenderState> _ptRenderState;
    BOOL _isFullRange;
    BOOL _isTenBit;
    BOOL _renderStateIsConfigured;
    long long _YCbCrColorDepth;
    struct { int width; int height; } _alignment;
    float _networkBias;
    BWFigVideoCaptureDevice *_captureDevice;
    NSString *_portTypeProvidingTuningParameters;
    id<MTLCommandQueue> _commandQueue;
}

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) short type;
@property (readonly, nonatomic) BOOL supportsAnimation;
@property (readonly, nonatomic) BOOL adjustsMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (int)prepareForRenderingWithParameters:(id)a0 inputVideoFormat:(id)a1 inputDepthFormat:(id)a2;
- (void)renderUsingParameters:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 originalPixelBuffer:(struct __CVBuffer { } *)a3 processedPixelBuffer:(struct __CVBuffer { } *)a4 completionHandler:(id /* block */)a5;
- (id)initWithCaptureDevice:(id)a0 commandQueue:(id)a1;

@end
