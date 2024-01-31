@class BWStillImageMetalBlurMapRenderer, CIContext, BWStillImageMetalSDOFRenderer, BWStillImageNodeConfiguration, BWRenderList, NSDictionary, BWMetalColorCubeRenderer, BWStillImageCoreImageBlurMapRenderer, BWColorLookupCache, BWPixelBufferPool, NSString, NSObject, BWVideoFormat, BWRenderListProcessor, NSError;
@protocol BWRendererResourceProvider, OS_dispatch_queue, MTLCommandQueue;

@interface BWStillImageFilterNode : BWNode <BWRendererResourceProvider> {
    BWStillImageNodeConfiguration *_nodeConfiguration;
    NSDictionary *_sensorConfigurationsByPortType;
    float _targetAspectRatio;
    NSString *_defaultPortType;
    float _defaultZoomFactor;
    BOOL _backPressureDrivenPipelining;
    BWRenderList *_renderList;
    BWRenderListProcessor *_renderListProcessor;
    id<BWRendererResourceProvider> _rendererProvider;
    CIContext *_cachedCIContext;
    BWStillImageMetalSDOFRenderer *_metalSDOFRenderer;
    BWStillImageMetalBlurMapRenderer *_metalBlurMapRenderer;
    BWMetalColorCubeRenderer *_metalFilterRenderer;
    BOOL _hairnetEnabled;
    BWStillImageCoreImageBlurMapRenderer *_coreImageBlurMapRenderer;
    NSError *_blurMapRenderErrorFromStandardResolutionImage;
    struct __CVBuffer { } *_faceAdjustedBlurMapFromStandardResolutionImage;
    struct opaqueCMSampleBuffer { } *_blurredGainMapSbuf;
    NSDictionary *_attachedMediaFromStandardResolutionImage;
    struct CGImageMetadata { } *_portraitStillImageAuxDepthMetadata;
    BWColorLookupCache *_colorLookupCache;
    NSString *_currentPortType;
    float _currentZoomFactorForSDOFRenderingParameters;
    NSDictionary *_currentSDOFRenderingParameters;
    BWVideoFormat *_outputFormat;
    struct { int width; int height; } _outputDimensions;
    struct { int width; int height; } _blurMapSourceImageDimensions;
    struct { int width; int height; } _maskDimensions;
    BOOL _depthDataDeliveryEnabled;
    struct { int width; int height; } _depthDataMapDimensions;
    int _portraitRenderQuality;
    struct OpaqueVTPixelTransferSession { } *_portraitDownsamplingTransferSession;
    BWPixelBufferPool *_processingBufferPool;
    BWVideoFormat *_blurMapOutputFormat;
    NSObject<OS_dispatch_queue> *_emitQueue;
    id<MTLCommandQueue> _mtlCommandQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)provideColorLookupCache;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (id)provideStreamingSDOFFilterRenderer;
- (id)provideCoreImageFilterRenderer;
- (id)provideStillImageMetalBlurMapRenderer;
- (id)provideStillImageCoreImageBlurMapRenderer;
- (void)handleStillImagePrewarmWithSettings:(id)a0 forInput:(id)a1;
- (id)provideMetalFilterRenderer;
- (id)provideStillImageMetalSDOFRenderer;
- (id)_initWithNodeConfiguration:(id)a0 sensorConfigurationsByPortType:(id)a1 depthDataDeliveryEnabled:(BOOL)a2 personSegmentationEnabled:(BOOL)a3 refinedDepthEnabled:(BOOL)a4 portraitRenderQuality:(int)a5 targetAspectRatio:(float)a6 defaultPortType:(id)a7 defaultZoomFactor:(float)a8 backPressureDrivenPipelining:(BOOL)a9 renderResourceProvider:(id)a10;
- (id)initWithNodeConfiguration:(id)a0 sensorConfigurationsByPortType:(id)a1 depthDataDeliveryEnabled:(BOOL)a2 personSegmentationEnabled:(BOOL)a3 refinedDepthEnabled:(BOOL)a4 portraitRenderQuality:(int)a5 targetAspectRatio:(float)a6 defaultPortType:(id)a7 defaultZoomFactor:(float)a8 backPressureDrivenPipelining:(BOOL)a9;

@end
