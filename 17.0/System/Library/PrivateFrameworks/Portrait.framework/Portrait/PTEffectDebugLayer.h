@class PTUtil, PTMetalContext, PTGraphRenderer, PTEffectReactionProvider, PTColorConversion, PTMSRResize, PTDepthConverter, PTEffectRelighting, PTVFXRenderEffect;
@protocol PTRenderState, MTLTexture, MTLBuffer;

@interface PTEffectDebugLayer : NSObject {
    PTMetalContext *_metalContext;
    PTEffectRelighting *_effectRelighting;
    id<PTRenderState> _renderState;
    PTUtil *_util;
    PTColorConversion *_colorConversion;
    PTMSRResize *_msrColorPyramid;
    PTEffectReactionProvider *_reactionProvider;
    id<MTLTexture> _disparityFixedFocus;
    id<MTLBuffer> _faceDisparityArray;
    id<MTLBuffer> _focusDisparityRaw;
    id<MTLBuffer> _focusDisparityModifier;
    PTGraphRenderer *_srlGraph;
    PTGraphRenderer *_focusDisparityRelightingGraph;
    PTGraphRenderer *_focusDisparityGraph;
    PTGraphRenderer *_faceDisparityGraphs[4];
    PTGraphRenderer *_brightSceneDetector;
    PTVFXRenderEffect *_vfxRenderEffect;
    PTDepthConverter *_depthConverter;
    id<MTLTexture> _softAlphaMask;
    int _width;
    int _height;
}

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0 effectRelighting:(id)a1 renderState:(id)a2 util:(id)a3 colorConversion:(id)a4 msrColorPyramid:(id)a5 vfxRenderEffect:(id)a6 depthConverter:(id)a7 softAlphaMask:(id)a8 disparityFixedFocus:(id)a9 faceDisparityArray:(id)a10 focusDisparityRaw:(id)a11 focusDisparityModifiers:(id)a12;
- (void)renderDebugInformation:(long long)a0 effectRenderRequest:(id)a1 reactionStates:(id)a2 disparity:(id)a3 disparityCentered:(id)a4 normal:(id)a5 disparityFiltered:(id)a6 normalFiltered:(id)a7 displacementFWD:(id)a8 humanDetections:(id)a9 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a10 fNumber:(float)a11 focusDisparityRaw:(id)a12 useDisparityBufferForReactions:(id)a13 outYUV:(id)a14;
- (void)renderDebugSubjectRelighting:(id)a0 humanDetections:(id)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 outYUV:(id)a3 frameIndex:(int)a4;
- (void)renderThumbnailsWithDisparity:(id)a0 disparityCentered:(id)a1 normal:(id)a2 disparityFiltered:(id)a3 normalFiltered:(id)a4 displacementFWD:(id)a5 outYUV:(id)a6;
- (void)setReactionProvider:(id)a0;

@end
