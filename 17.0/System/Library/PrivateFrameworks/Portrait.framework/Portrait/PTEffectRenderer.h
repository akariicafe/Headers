@class PTDepthConverter, PTEffectResources, PTEffectRelighting, PTEffectReactionProvider, PTTextureYUV, PTEffectTemporalFilter, PTMSRResize, PTEffectDebugLayer, PTVFXRenderEffect, NSObject, PTVFXSoftAlphaMask, PTEffectDescriptor, PTRenderPipeline, PTMetalContext, PTRenderRequest, PTEffectPersonSegmentationMatte, PTNormalEstimation, PTCVMNetwork, PTEffectUtil, PTGuidedFilter, PTRenderEffectContainer, PTColorConversion, PTUtil, PTMTLDropHints;
@protocol OS_dispatch_queue, MTLTexture, PTRenderState, MTLBuffer;

@interface PTEffectRenderer : NSObject {
    PTMetalContext *_metalContext;
    PTRenderPipeline *_renderPipeline;
    id<PTRenderState> _renderState;
    float _focalLenIn35mmFilm;
    PTVFXSoftAlphaMask *_softAlphaMask;
    id<MTLTexture> _disparityCenteredUpscaledSDOF;
    id<MTLTexture> _disparityCenteredUpscaledReactions;
    id<MTLTexture> _disparityCenteredUpscaledWithScreenCaptureRect;
    id<MTLTexture> _normalDerived;
    id<MTLTexture> _lumaIntermediate;
    id<MTLTexture> _chromaIntermediate;
    PTTextureYUV *_intermediateYUV;
    id<MTLBuffer> _faceDisparityArray;
    id<MTLBuffer> _lastFocus;
    id<MTLBuffer> _focusDisparityRaw;
    PTMSRResize *_msrColorPyramid;
    id<MTLBuffer> _focusDisparityModifiers;
    id<MTLBuffer> _studioLightEffectModifier;
    id<MTLBuffer> _useDisparityBufferForReactions;
    PTGuidedFilter *_guidedFilter;
    id<MTLTexture> _guideRGBAUpscale;
    id<MTLTexture> _guideRGBACoefficients;
    PTCVMNetwork *_cvmNetwork;
    PTEffectRelighting *_effectRelighting;
    PTColorConversion *_colorConversion;
    PTRenderRequest *_sdofRenderRequest;
    PTEffectDebugLayer *_debugLayer;
    BOOL _asynchronous;
    int _frameIndex;
    int _networkFrameIndex;
    BOOL _runCVMNetworkPreviousFrame;
    BOOL _renderStudioLightPreviousFrame;
    double _lastFrameTime;
    float _focusDisparityMax;
    struct PTDisparityFocusOffset { float disparityOffsetFactor; float offsetInMeters; } _disparityFocusOffsetSDOF;
    struct PTDisparityFocusOffset { float disparityOffsetFactor; float offsetInMeters; } _disparityFocusOffsetReactions;
    struct PTDisparityFocusOffset { float disparityOffsetFactor; float offsetInMeters; } _disparityFocusOffsetStudioLight;
    PTMTLDropHints *_temporalDisparityTempDropHints;
    PTUtil *_util;
    PTEffectUtil *_effectUtil;
    float _focusDisparityUpdateCoefficientSDOF;
    float _focusDisparityUpdateCoefficientStudioLight;
    PTEffectDescriptor *_effectDescriptor;
    unsigned long long _availableEffectTypes;
    PTNormalEstimation *_normalEstimation;
    PTEffectTemporalFilter *_temporalFilter;
    PTEffectReactionProvider *_reactionProvider;
    BOOL _externalHandDetectionsAvailable;
    long long _debugType;
    PTEffectPersonSegmentationMatte *_personSegmentation;
    struct __CVBuffer { } *_personSegmentationInput;
    PTVFXRenderEffect *_vfxEffect;
    PTRenderEffectContainer *_effectContainer;
    PTDepthConverter *_depthConverter;
    NSObject<OS_dispatch_queue> *_asyncInitQueue;
    PTEffectResources *_sharedResources;
}

@property long long effectQuality;

+ (struct PTEffectPixelBufferDescriptor { struct CGSize { double x0; double x1; } x0; unsigned int x1; })segmentationMatteFormatForColorSize:(struct CGSize { double x0; double x1; })a0;

- (void)reset:(id)a0;
- (void)setDebug:(long long)a0;
- (void).cxx_destruct;
- (id)activeReactions;
- (void)copyInYUV:(id)a0 toOutYUV:(id)a1;
- (id)copyTemporalState:(id)a0;
- (id)initWithDescriptor:(id)a0 metalContext:(id)a1 useHighResNetwork:(BOOL)a2 faceAttributesNetwork:(id)a3 prevTemporalState:(id)a4 asyncInitQueue:(id)a5 sharedResources:(id)a6;
- (BOOL)isRenderRequiredForRequest:(id)a0;
- (float)remapAperture:(id)a0;
- (int)render:(id)a0 humanDetections:(id)a1 waitUntilCompleted:(BOOL)a2 gpuCompleted:(id /* block */)a3;
- (int)renderReaction:(id)a0 effectRenderRequest:(id)a1;
- (int)runGestureDetection:(id)a0;

@end
